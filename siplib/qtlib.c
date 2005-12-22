// The SIP library code that implements the interface to the optional module
// supplied Qt support.
//
// @BS_LICENSE@


#include <Python.h>
#include <string.h>

#include "sip.h"
#include "sipint.h"


// This is how Qt "types" signals and slots.
#define	isQtSlot(s)	(*(s) == '1')
#define	isQtSignal(o,s)	(*(s) == '2' && sipQtSupport->qt_is_signal((o), (s)))


static PyObject *py_sender = NULL;	// The last Python signal sender.


static int isSameSlot(sipSlot *,PyObject *,const char *);
static int emitQtSig(sipWrapper *,const char *,PyObject *);
static int emitToSlotList(sipPySigRx *,PyObject *);
static int addSlotToPySigList(sipWrapper *,const char *,PyObject *,const char *);
static void removeSlotFromPySigList(sipWrapper *,const char *,PyObject *,const char *);
static PyObject *connectToPythonSlot(sipWrapper *,const char *,PyObject *,int);
static PyObject *disconnectFromPythonSlot(sipWrapper *,const char *,PyObject *);
static PyObject *doDisconnect(sipWrapper *,const char *,void *,const char *);
static PyObject *getWeakRef(PyObject *obj);
static sipPySig *findPySignal(sipWrapper *,const char *);
static char *sipStrdup(const char *);
static int sameSigSlotName(const char *,const char *);
static int saveSlot(sipSlot *sp, PyObject *rxObj, const char *slot);
static int parseSignature(sipConnection *conn, const char *sig);


// Return the most recent signal sender.
PyObject *sip_api_get_sender()
{
	PyObject *sender;
	const void *qt_sender;

	// If there is a Qt sender then it is more recent than the last Python
	// sender, so use it instead.
	if ((qt_sender = sipQtSupport->qt_get_sender()) != NULL)
		sender = sip_api_map_cpp_to_self_sub_class(qt_sender, sipQObjectClass);
	else
	{
		if ((sender = py_sender) == NULL)
			sender = Py_None;

		Py_INCREF(sender);
	}

	return sender;
}


// Release the resources held by a connection.
void sip_api_free_connection(sipConnection *conn)
{
	if (conn->sc_args)
		sip_api_free(conn->sc_args);

	if (conn->sc_signature)
		sip_api_free(conn->sc_signature);

	if (conn->sc_slot.name)
		sip_api_free(conn->sc_slot.name);

	Py_XDECREF(conn->sc_slot.weakSlot);
}


// Compare two connections and return TRUE if they are the same.
int sip_api_same_connection(sipConnection *conn, void *tx, const char *sig,
			    PyObject *rxObj, const char *slot)
{
	return (conn->sc_transmitter == tx &&
		sameSigSlotName(conn->sc_signature, sig) &&
		isSameSlot(&conn->sc_slot, rxObj, slot));
}


// Parse the signal arguments for a connection.
static int parseSignature(sipConnection *conn, const char *sig)
{
	const char *sp, *ep;

	// Allocate space for the deep copy of the signal, but we use it as
	// temporary workspace for the moment.
	if ((conn->sc_signature = (char *)sip_api_malloc(strlen(sig) + 1)) == NULL)
		return -1;

	// Find the start and end of the arguments.
	sp = strchr(sig, '(');
	ep = strrchr(sig, ')');

	// If the signal isn't well formed we assume Qt will pick it up.
	if (sp && ep && sp < ep)
	{
		// Copy the signature arguments while counting them and
		// removing non-significant spaces.  Each argument is left as a
		// '\0' terminated string.
		char *dp = conn->sc_signature;
		int depth = 0, nrcommas = 0, argstart = TRUE;

		for (;;)
		{
			char ch = *++sp;

			if (strchr(",*&)<>", ch))
			{
				// Backup over any previous trailing space.
				if (dp > conn->sc_signature && dp[-1] == ' ')
					--dp;

				if (sp == ep)
				{
					*dp = '\0';
					break;
				}

				if (ch == ',' && depth == 0)
				{
					*dp++ = '\0';
					++nrcommas;
					argstart = TRUE;
				}
				else
				{
					*dp++ = ch;

					// Make sure commas in template
					// arguments are ignored.
					if (ch == '<')
						++depth;
					else if (ch == '>')
						--depth;
				}
			}
			else if (ch == ' ')
			{
				// Ignore leading and multiple spaces.
				if (!argstart && dp[-1] != ' ')
					*dp++ = ch;
			}
			else
			{
				*dp++ = ch;
				argstart = FALSE;
			}
		}

		// Handle the arguments now they are in a normal form.
		if (*conn->sc_signature)
		{
			char *arg = conn->sc_signature;
			int a;

			// Allocate the space.
			conn->sc_nrargs = nrcommas + 1;

			if ((conn->sc_args = (sipSigArg *)sip_api_malloc(sizeof (sipSigArg) * conn->sc_nrargs)) == NULL)
				return -1;

			for (a = 0; a < conn->sc_nrargs; ++a)
			{
				size_t btlen = 0;
				int unsup, isref = FALSE, indir = 0;
				sipSigArgType sat = unknown_sat;

				// Find the start of the significant part of
				// the type.
				dp = arg;

				if (strncmp(dp, "const ", 6) == 0)
					dp += 6;

				// Find the length of the base type, the number
				// of indirections and if it is a reference.
				for (ep = dp; *ep; ++ep)
					if (*ep == '&')
						isref = TRUE;
					else if (*ep == '*')
						++indir;
					else
						++btlen;

				// Assume that anything other than a base type
				// is unsupported.
				unsup = (isref || indir);

				// Parse the base type.
				switch (btlen)
				{
				case 3:
					if (strncmp(dp, "int", 3) == 0)
						sat = int_sat;
					break;

				case 4:
					if (strncmp(dp, "bool", 4) == 0)
						sat = bool_sat;
					else if (strncmp(dp, "long", 4) == 0)
						sat = long_sat;
					else if (strncmp(dp, "char", 4) == 0)
					{
						sat = (indir ? string_sat : char_sat);
						unsup = (isref || indir > 1);
					}
					else if (strncmp(dp, "void", 4) == 0)
					{
						sat = void_sat;
						unsup = (isref || indir != 1);
					}
					break;

				case 5:
					if (strncmp(dp, "float", 5) == 0)
						sat = float_sat;
					else if (strncmp(dp, "short", 5) == 0)
						sat = short_sat;
					break;

				case 6:
					if (strncmp(dp, "double", 6) == 0)
						sat = double_sat;
					break;

				case 8:
					if (strncmp(dp, "unsigned", 8) == 0)
						sat = uint_sat;
					else if (strncmp(dp, "QVariant", 8) == 0 && indir == 0)
					{
						if (indir == 0)
						{
							sat = qvariant_sat;
							unsup = FALSE;
						}
						else if (indir == 1)
						{
							sat = qvariantp_sat;
							unsup = FALSE;
						}
					}
					break;

				case 9:
					if (strncmp(dp, "long long", 9) == 0)
						sat = longlong_sat;
					break;

				case 12:
					if (strncmp(dp, "unsigned int", 12) == 0)
						sat = uint_sat;
					break;

				case 13:
					if (strncmp(dp, "unsigned long", 13) == 0)
						sat = ulong_sat;
					else if (strncmp(dp, "unsigned char", 13) == 0)
					{
						sat = (indir ? ustring_sat : uchar_sat);
						unsup = (isref || indir > 1);
					}
					break;

				case 14:
					if (strncmp(dp, "unsigned short", 14) == 0)
						sat = ushort_sat;
					break;

				case 18:
					if (strncmp(dp, "unsigned long long", 18) == 0)
						sat = ulonglong_sat;
					break;
				}

				if (sat == unknown_sat)
					sipFindSigArgType(dp, btlen, &conn->sc_args[a], indir);
				else
				{
					if (unsup)
						sat = unknown_sat;

					conn->sc_args[a].atype = sat;
				}

				// Move to the start of the next argument.
				arg += strlen(arg) + 1;
			}
		}
	}

	// Make a deep copy of the signal.
	strcpy(conn->sc_signature, sig);

	return 0;
}


// Create a universal slot.  Returns a pointer to it or 0 if there was an
// error.
static void *createUniversalSlot(sipWrapper *txSelf, const char *sig,
				 PyObject *rxObj, const char *slot,
				 const char **member)
{
	sipConnection conn;
	void *us;

	// Initialise the connection.
	conn.sc_transmitter = (txSelf ? sipGetAddress(txSelf) : 0);
	conn.sc_nrargs = 0;
	conn.sc_args = 0;
	conn.sc_signature = 0;

	// Save the real slot.
	if (saveSlot(&conn.sc_slot, rxObj, slot) < 0)
		return 0;

	// Parse the signature and create the universal slot.
	if (parseSignature(&conn, sig) < 0 || (us = sipQtSupport->qt_create_universal_slot(txSelf, &conn, member)) == NULL)
	{
		sip_api_free_connection(&conn);
		return 0;
	}

	return us;
}


// Compare two signal/slot names and return non-zero if they match.
static int sameSigSlotName(const char *s1,const char *s2)
{
	// moc formats signal names, so we should first convert the supplied
	// string to the same format before comparing them.  Instead we just
	// compare them as they are, but ignoring all spaces - this will have
	// the same result.
	do
	{
		// Skip any spaces.

		while (*s1 == ' ')
			++s1;

		while (*s2 == ' ')
			++s2;

		if (*s1++ != *s2)
			return 0;
	}
	while (*s2++ != '\0');

	return 1;
}


// Emit a Python or Qt signal.
int sip_api_emit_signal(PyObject *self,const char *sig,PyObject *sigargs)
{
	sipPySig *ps;
	void *tx;
	sipWrapper *w = (sipWrapper *)self;

	// Don't do anything if signals are blocked.  Qt signals would be
	// blocked anyway, but this blocks Python signals as well.
	if ((tx = sip_api_get_cpp_ptr(w, sipQObjectClass)) == NULL || sipQtSupport->qt_signals_blocked(tx))
		return 0;

	if (isQtSignal(tx, sig))
		return emitQtSig(w,sig,sigargs);

	if ((ps = findPySignal(w,sig)) != NULL)
	{
		int rc;

		// Forget the last Qt sender and remember this one.
		sipQtSupport->qt_forget_sender();
		py_sender = self;

		rc = emitToSlotList(ps -> rxlist,sigargs);

		// Forget this as a sender.
		py_sender = NULL;

		return rc;
	}

	return 0;
}


// Search the Python signal list for a signal.
static sipPySig *findPySignal(sipWrapper *w,const char *sig)
{
	sipPySig *ps;

	for (ps = w -> pySigList; ps != NULL; ps = ps -> next)
		if (sameSigSlotName(ps -> name,sig))
			return ps;

	return NULL;
}


// Search a signal table for a signal.  If found, call the emitter function
// with the signal arguments.  Return 0 if the signal was emitted or <0 if
// there was an error.
static int emitQtSig(sipWrapper *w,const char *sig,PyObject *sigargs)
{
	sipQtSignal *tab;

	// Search the table.
	for (tab = ((sipWrapperType *)(w -> ob_type)) -> type -> td_emit; tab -> st_name != NULL; ++tab)
	{
		const char *sp, *tp;
		int found;

		// Compare only the base name.
		sp = &sig[1];
		tp = tab -> st_name;

		found = TRUE;

		while (*sp != '\0' && *sp != '(' && *tp != '\0')
			if (*sp++ != *tp++)
			{
				found = FALSE;
				break;
			}

		if (found)
			return (*tab -> st_emitfunc)(w,sigargs);
	}

	// It wasn't found if we got this far.
	PyErr_Format(PyExc_NameError,"Invalid signal %s",&sig[1]);

	return -1;
}


// Send a signal to a single slot (Qt or Python).
int sip_api_emit_to_slot(sipSlot *slot, PyObject *sigargs)
{
	PyObject *sa, *oxtype, *oxvalue, *oxtb, *sfunc, *newmeth, *sref;

	// Keep some compilers quiet.
	oxtype = oxvalue = oxtb = NULL;

	// Fan out Qt signals.
	if (slot -> name != NULL && slot -> name[0] != '\0')
		return sip_api_emit_signal(slot -> pyobj,slot -> name,sigargs);

	// Get the object to call, resolving any weak references.
	if (slot -> weakSlot == NULL)
		sref = NULL;
	else if ((sref = PyWeakref_GetObject(slot -> weakSlot)) == NULL)
		return -1;
	else
		Py_INCREF(sref);

	if (sref == Py_None)
	{
		// If the real object has gone then we pretend everything is
		// Ok.  This mimics the Qt behaviour of not caring if a
		// receiving object has been deleted.  (However, programmers
		// may prefer an exception because it usually means a bug where
		// they have forgotten to keep the receiving object alive.)
		Py_DECREF(sref);
		return 0;
	}

	if (slot -> pyobj == NULL)
	{
		if ((sfunc = PyMethod_New(slot -> meth.mfunc,(sref != NULL ? sref : slot -> meth.mself),slot -> meth.mclass)) == NULL)
			return -1;

		// Make sure we garbage collect the new method.
		newmeth = sfunc;
	}
	else if (slot -> name != NULL)
	{
		char *mname = slot -> name + 1;

		if ((sfunc = PyObject_GetAttrString((sref != NULL ? sref : slot -> pyobj),mname)) == NULL || !PyCFunction_Check(sfunc))
		{
			// Note that in earlier versions of SIP this error
			// would be detected when the slot was connected.
			PyErr_Format(PyExc_NameError,"Invalid slot %s",mname);
			return -1;
		}

		// Make sure we garbage collect the new method.
		newmeth = sfunc;
	}
	else
	{
		sfunc = slot -> pyobj;
		newmeth = NULL;
	}

	// We make repeated attempts to call a slot.  If we work out that it
	// failed because of an immediate type error we try again with one less
	// argument.  We keep going until we run out of arguments to drop.
	// This emulates the Qt ability of the slot to accept fewer arguments
	// than a signal provides.
	sa = sigargs;
        Py_INCREF(sa);

	for (;;)
	{
		PyObject *nsa, *xtype, *xvalue, *xtb, *resobj;

		if ((resobj = PyEval_CallObject(sfunc,sa)) != NULL)
		{
			Py_DECREF(resobj);

			Py_XDECREF(newmeth);
			Py_XDECREF(sref);

			// Remove any previous exception. */

			if (sa != sigargs)
			{
				Py_XDECREF(oxtype);
				Py_XDECREF(oxvalue);
				Py_XDECREF(oxtb);
				PyErr_Clear();
			}

			Py_DECREF(sa);

			return 0;
		}

		// Get the exception.
		PyErr_Fetch(&xtype,&xvalue,&xtb);

		// See if it is unacceptable.  An acceptable failure is a type
		// error with no traceback - so long as we can still reduce the
		// number of arguments and try again.
		if (!PyErr_GivenExceptionMatches(xtype,PyExc_TypeError) ||
		    xtb != NULL ||
		    PyTuple_GET_SIZE(sa) == 0)
		{
			// If there is a traceback then we must have called the
                        // slot and the exception was later on - so report the
                        // exception as is.
                        if (xtb != NULL)
                        {
                                if (sa != sigargs)
                                {
				        Py_XDECREF(oxtype);
				        Py_XDECREF(oxvalue);
				        Py_XDECREF(oxtb);
                                }

                                PyErr_Restore(xtype,xvalue,xtb);
                        }
			else if (sa == sigargs)
				PyErr_Restore(xtype,xvalue,xtb);
			else
			{
				// Discard the latest exception and restore the
				// original one.
				Py_XDECREF(xtype);
				Py_XDECREF(xvalue);
				Py_XDECREF(xtb);

				PyErr_Restore(oxtype,oxvalue,oxtb);
			}

			break;
		}

		// If this is the first attempt, save the exception.
		if (sa == sigargs)
		{
			oxtype = xtype;
			oxvalue = xvalue;
			oxtb = xtb;
		}
		else
		{
			Py_XDECREF(xtype);
			Py_XDECREF(xvalue);
			Py_XDECREF(xtb);
		}

		// Create the new argument tuple.
		if ((nsa = PyTuple_GetSlice(sa,0,PyTuple_GET_SIZE(sa) - 1)) == NULL)
		{
			// Tidy up.
			Py_XDECREF(oxtype);
			Py_XDECREF(oxvalue);
			Py_XDECREF(oxtb);

			break;
		}

	        Py_DECREF(sa);
		sa = nsa;
	}

	Py_XDECREF(newmeth);
	Py_XDECREF(sref);

        Py_DECREF(sa);

	return -1;
}


// Send a signal to the slots (Qt or Python) in a Python list.
static int emitToSlotList(sipPySigRx *rxlist,PyObject *sigargs)
{
	int rc;

	// Apply the arguments to each slot method.
	rc = 0;

	while (rxlist != NULL && rc >= 0)
	{
		sipPySigRx *next;

		// We get the next in the list before calling the slot in case
		// the list gets changed by the slot - usually because the slot
		// disconnects itself.
		next = rxlist -> next;
		rc = sip_api_emit_to_slot(&rxlist -> rx, sigargs);
		rxlist = next;
	}

	return rc;
}


// Add a slot to a transmitter's Python signal list.  The signal is a Python
// signal, the slot may be either a Qt signal, a Qt slot, a Python signal or a
// Python slot.
static int addSlotToPySigList(sipWrapper *txSelf,const char *sig,
			      PyObject *rxObj,const char *slot)
{
	sipPySig *ps;
	sipPySigRx *psrx;

	// Create a new one if necessary.
	if ((ps = findPySignal(txSelf,sig)) == NULL)
	{
		if ((ps = (sipPySig *)sip_api_malloc(sizeof (sipPySig))) == NULL)
			return -1;

		if ((ps -> name = sipStrdup(sig)) == NULL)
		{
			sip_api_free(ps);
			return -1;
		}

		ps -> rxlist = NULL;
		ps -> next = txSelf -> pySigList;

		txSelf -> pySigList = ps;
	}

	// Create the new receiver.
	if ((psrx = (sipPySigRx *)sip_api_malloc(sizeof (sipPySigRx))) == NULL)
		return -1;

	if (saveSlot(&psrx->rx, rxObj, slot) < 0)
	{
		sip_api_free(psrx);
		return -1;
	}

	psrx -> next = ps -> rxlist;
	ps -> rxlist = psrx;

	return 0;
}


// Compare two slots to see if they are the same.
static int isSameSlot(sipSlot *slot1,PyObject *rxobj2,const char *slot2)
{
	// See if they are signals or Qt slots, ie. they have a name.
	if (slot1 -> name != NULL)
		return (slot2 != NULL &&
			sameSigSlotName(slot1 -> name,slot2) &&
			slot1 -> pyobj == rxobj2);

	// Both must be Python slots.
	if (slot2 != NULL)
		return 0;

	// See if they are Python methods.
	if (slot1 -> pyobj == NULL)
		return (PyMethod_Check(rxobj2) &&
			slot1 -> meth.mfunc == PyMethod_GET_FUNCTION(rxobj2) &&
			slot1 -> meth.mself == PyMethod_GET_SELF(rxobj2) &&
			slot1 -> meth.mclass == PyMethod_GET_CLASS(rxobj2));

	if (PyMethod_Check(rxobj2))
		return 0;

	// The objects must be the same.
	return (slot1 -> pyobj == rxobj2);
}


// Remove a slot from a transmitter's Python signal list.
static void removeSlotFromPySigList(sipWrapper *txSelf,const char *sig,
				    PyObject *rxObj,const char *slot)
{
	sipPySig *ps;

	if ((ps = findPySignal(txSelf,sig)) != NULL)
	{
		sipPySigRx **psrxp;

		for (psrxp = &ps -> rxlist; *psrxp != NULL; psrxp = &(*psrxp) -> next)
		{
			sipPySigRx *psrx = *psrxp;

			if (isSameSlot(&psrx -> rx,rxObj,slot))
			{
				*psrxp = psrx -> next;

				if (psrx -> rx.name != NULL)
					sip_api_free(psrx -> rx.name);

				// Remove any weak reference.
				Py_XDECREF(psrx -> rx.weakSlot);

				sip_api_free(psrx);

				break;
			}
		}
	}
}


// Convert a valid Python signal or slot to an existing universal slot.
void *sipGetRx(sipWrapper *txSelf,const char *sigargs,PyObject *rxObj,
	       const char *slot,const char **memberp)
{
	if (slot != NULL)
	{
		void *rx;

		rx = sip_api_get_cpp_ptr((sipWrapper *)rxObj, sipQObjectClass);

		if (isQtSlot(slot) || isQtSignal(rx, slot))
		{
			*memberp = slot;

			return rx;
		}
	}

	return sipQtSupport->qt_find_slot(sipGetAddress(txSelf), sigargs, rxObj, slot, memberp);
}


// Convert a Python receiver (either a Python signal or slot or a Qt signal
// or slot) to a Qt receiver.  It is only ever called when the signal is a
// Qt signal.  Return NULL is there was an error.
void *sip_api_convert_rx(sipWrapper *txSelf,const char *sig,PyObject *rxObj,
			 const char *slot,const char **memberp)
{
	void *rx;

	if (slot == NULL)
		return createUniversalSlot(txSelf, sig, rxObj, NULL, memberp);

	rx = sip_api_get_cpp_ptr((sipWrapper *)rxObj, sipQObjectClass);

	if (isQtSlot(slot) || isQtSignal(rx, slot))
	{
		*memberp = slot;

		return rx;
	}

	// The slot is a Python signal so we need a universal slot to catch it.
	return createUniversalSlot(txSelf, sig, rxObj, slot, memberp);
}


// Connect a Qt signal or a Python signal to a Qt slot, a Qt signal, a Python
// slot or a Python signal.  This is all possible combinations.
PyObject *sip_api_connect_rx(PyObject *txObj,const char *sig,PyObject *rxObj,
			     const char *slot, int type)
{
	sipWrapper *txSelf = (sipWrapper *)txObj;
	void *tx;

	// See if the receiver is a Python slot.
	if (slot == NULL)
		return connectToPythonSlot(txSelf,sig,rxObj,type);

	// Handle Qt signals.
	if ((tx = sip_api_get_cpp_ptr(txSelf, sipQObjectClass)) == NULL)
		return NULL;

	if (isQtSignal(tx, sig))
	{
		void *rx;
		const char *member;
		int res;

		if ((rx = sip_api_convert_rx(txSelf,sig,rxObj,slot,&member)) == NULL)
			return NULL;

		Py_BEGIN_ALLOW_THREADS
		res = sipQtSupport->qt_connect(tx, sig, rx, member, type);
		Py_END_ALLOW_THREADS

		return PyBool_FromLong(res);
	}

	// Handle Python signals.
	if (addSlotToPySigList(txSelf,sig,rxObj,slot) < 0)
		return NULL;

	Py_INCREF(Py_True);
	return Py_True;
}


// Connect either a Qt signal or a Python signal to a Python slot.  This will
// not be called for any other combination.
static PyObject *connectToPythonSlot(sipWrapper *txSelf,const char *sig,
				     PyObject *rxObj, int type)
{
	void *tx;

	// Handle Qt signals.
	if ((tx = sip_api_get_cpp_ptr(txSelf, sipQObjectClass)) == NULL)
		return NULL;

	if (isQtSignal(tx, sig))
	{
		void *rx;
		const char *member;
		int res;

		if ((rx = createUniversalSlot(txSelf, sig, rxObj, NULL, &member)) == NULL)
			return NULL;

		Py_BEGIN_ALLOW_THREADS
		res = sipQtSupport->qt_connect(tx, sig, rx, member, type);
		Py_END_ALLOW_THREADS

		return PyBool_FromLong(res);
	}

	// Handle Python signals.
	if (addSlotToPySigList(txSelf,sig,rxObj,NULL) < 0)
		return NULL;

	Py_INCREF(Py_True);
	return Py_True;
}


// Disconnect a signal to a signal or a Qt slot.
PyObject *sip_api_disconnect_rx(PyObject *txObj,const char *sig,
				PyObject *rxObj,const char *slot)
{
	sipWrapper *txSelf = (sipWrapper *)txObj;
	void *tx;

	if (slot == NULL)
		return disconnectFromPythonSlot(txSelf, sig, rxObj);

	// Handle Qt signals.
	if ((tx = sip_api_get_cpp_ptr(txSelf, sipQObjectClass)) == NULL)
		return NULL;

	if (isQtSignal(tx, sig))
	{
		void *rx;
		const char *member;

		if ((rx = sipGetRx(txSelf, sig, rxObj, slot, &member)) == NULL)
		{
			Py_INCREF(Py_False);
			return Py_False;
		}

		return doDisconnect(txSelf, sig, rx, member);
	}

	// Handle Python signals.
	removeSlotFromPySigList(txSelf,sig,rxObj,slot);

	Py_INCREF(Py_True);
	return Py_True;
}


// Disconnect a signal from a Python slot.
static PyObject *disconnectFromPythonSlot(sipWrapper *txSelf,const char *sig,
					  PyObject *rxObj)
{
	void *tx;

	// Handle Qt signals.
	if ((tx = sip_api_get_cpp_ptr(txSelf, sipQObjectClass)) == NULL)
		return NULL;

	if (isQtSignal(tx, sig))
	{
		void *rx;
		const char *member;

		if ((rx = sipGetRx(txSelf, sig, rxObj, NULL, &member)) == NULL)
		{
			Py_INCREF(Py_False);
			return Py_False;
		}

		return doDisconnect(txSelf, sig, rx, member);
	}

	// Handle Python signals.
	removeSlotFromPySigList(txSelf,sig,rxObj,NULL);

	Py_INCREF(Py_True);
	return Py_True;
}


// Actually do a QObject disconnect.
static PyObject *doDisconnect(sipWrapper *txSelf, const char *sig, void *rx,
			      const char *slot)
{
	void *tx;
	PyObject *res;

	if ((tx = sip_api_get_cpp_ptr(txSelf, sipQObjectClass)) == NULL)
		res = NULL;
	else
		res = PyBool_FromLong(sipQtSupport->qt_disconnect(tx, sig, rx, slot));

	// Delete it if it is a universal slot as this will be it's only
	// connection.
	sipQtSupport->qt_destroy_universal_slot(rx);

	return res;
}


// Implement strdup() using sip_api_malloc().
static char *sipStrdup(const char *s)
{
	char *d;

	if ((d = (char *)sip_api_malloc(strlen(s) + 1)) != NULL)
		strcpy(d,s);

	return d;
}


// Initialise a slot, returning 0 if there was no error.  If the signal was a
// Qt signal, then the slot may be a Python signal or a Python slot.  If the
// signal was a Python signal, then the slot may be anything.
static int saveSlot(sipSlot *sp, PyObject *rxObj, const char *slot)
{
	sp -> weakSlot = NULL;

	if (slot == NULL)
	{
		sp -> name = NULL;

		if (PyMethod_Check(rxObj))
		{
			// Python creates methods on the fly.  We could
			// increment the reference count to keep it alive, but
			// that would keep "self" alive as well and would
			// probably be a circular reference.  Instead we
			// remember the component parts and hope they are still
			// valid when we re-create the method when we need it.
			sipSaveMethod(&sp -> meth,rxObj);

			// Notice if the class instance disappears.
			sp -> weakSlot = getWeakRef(sp -> meth.mself);

			// This acts a flag to say that the slot is a method.
			sp -> pyobj = NULL;
		}
		else
		{
			PyObject *self;

			// We know that it is another type of callable, ie. a
			// function/builtin.

			if (PyCFunction_Check(rxObj) &&
			    (self = PyCFunction_GET_SELF(rxObj)) != NULL &&
			    sip_api_wrapper_check(self))
			{
				// It is a wrapped C++ class method.  We can't
				// keep a copy because they are generated on
				// the fly and we can't take a reference as
				// that may keep the instance (ie. self) alive.
				// We therefore treat it as if the user had
				// specified the slot at "obj, SLOT('meth()')"
				// rather than "obj.meth" (see below).

				char *meth;

				// Get the method name.
				meth = ((PyCFunctionObject *)rxObj) -> m_ml -> ml_name;

				if ((sp -> name = (char *)sip_api_malloc(strlen(meth) + 2)) == NULL)
					return -1;

				// Copy the name and set the marker that it
				// needs converting to a built-in method.
				sp -> name[0] = '\0';
				strcpy(&sp -> name[1],meth);

				sp -> pyobj = self;
				sp -> weakSlot = getWeakRef(self);
			}
			else
			{
				// It's unlikely that we will succeed in
				// getting a weak reference to the slot, but
				// there is no harm in trying (and future
				// versions of Python may support references to
				// more object types).
				sp -> pyobj = rxObj;
				sp -> weakSlot = getWeakRef(rxObj);
			}
		}
	}
	else if ((sp -> name = sipStrdup(slot)) == NULL)
		return -1;
	else if (isQtSlot(slot))
	{
		// The user has decided to connect a Python signal to a Qt slot
		// and specified the slot as "obj, SLOT('meth()')" rather than
		// "obj.meth".

		char *tail;

		// Remove any arguments.
		if ((tail = strchr(sp -> name,'(')) != NULL)
			*tail = '\0';

		// A bit of a hack to indicate that this needs converting to a
		// built-in method.
		sp -> name[0] = '\0';

		// Notice if the class instance disappears.
		sp -> weakSlot = getWeakRef(rxObj);

		sp -> pyobj = rxObj;
	}
	else
		// It's a Qt signal.
		sp -> pyobj = rxObj;

	return 0;
}


// Return a weak reference to the given object.
static PyObject *getWeakRef(PyObject *obj)
{
	PyObject *wr;

	if ((wr = PyWeakref_NewRef(obj,NULL)) == NULL)
		PyErr_Clear();

	return wr;
}
