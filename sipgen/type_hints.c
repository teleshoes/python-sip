/*
 * The PEP 484 type hints generator for SIP.
 *
 * Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
 *
 * This file is part of SIP.
 *
 * This copy of SIP is licensed for use under the terms of the SIP License
 * Agreement.  See the file LICENSE for more details.
 *
 * This copy of SIP may also used under the terms of the GNU General Public
 * License v2 or v3 as published by the Free Software Foundation which can be
 * found in the files LICENSE-GPL2 and LICENSE-GPL3 included in this package.
 *
 * SIP is supplied WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */


#include <stdio.h>
#include <string.h>

#include "sip.h"


static void pyiEnums(sipSpec *pt, moduleDef *mod, classDef *scope,
        classList *defined, int indent, FILE *fp);
static void pyiVars(sipSpec *pt, moduleDef *mod, classDef *scope, int indent,
        FILE *fp);
static int pyiCtor(sipSpec *pt, moduleDef *mod, classDef *scope, ctorDef *ct,
        int sec, FILE *fp);
static int pyiOverload(sipSpec *pt, overDef *od, int sec, int indent,
        FILE *fp);
static int pyiPythonSignature(sipSpec *pt, FILE *fp, signatureDef *sd, int sec,
        int names, int defaults, int in_str, int is_signal, int pep484);
static const char *pyiType(sipSpec *pt, argDef *ad, int sec, classDef **scope);
static void prIndent(int indent, FILE *fp);
static int separate(int first, int indent, FILE *fp);
static void prClassRef(classDef *cd, moduleDef *mod, classList *defined,
        FILE *fp);
static void prEnumRef(enumDef *ed, moduleDef *mod, classList *defined,
        FILE *fp);
static void prTypeRef(moduleDef *owning_mod, classDef *scope, nameDef *pyname,
        moduleDef *mod, classList *defined, FILE *fp);


/*
 * Generate the .pyi file.
 */
void generateTypeHints(sipSpec *pt, moduleDef *mod, const char *pyiFile)
{
    int first;
    overDef *od;
    classDef *cd;
    classList *defined;
    moduleListDef *mld;
    FILE *fp;

    /* Generate the file. */
    if ((fp = fopen(pyiFile, "w")) == NULL)
        fatal("Unable to create file \"%s\"\n", pyiFile);

    /* Write the header. */
    fprintf(fp,
"# The PEP 484 type hints stub file for the %s module.\n"
"#\n"
"# Generated by SIP %s\n"
        , mod->name
        , sipVersion);

    prCopying(fp, mod, "#");

    /*
     * Generate the imports. Note that we assume the super-types are the
     * standard SIP ones.
     */
    fprintf(fp,
"\n"
"\n"
"from typing import overload\n"
"\n"
"import sip\n"
        );

    first = TRUE;

    for (mld = mod->imports; mld != NULL; mld = mld->next)
    {
        char *cp;

        /* We only want a single blank line so lie about the indent. */
        first = separate(first, 1, fp);

        if ((cp = strrchr(mld->module->fullname->text, '.')) == NULL)
        {
            fprintf(fp, "import %s\n", mld->module->name);
        }
        else
        {
            *cp = '\0';
            fprintf(fp, "from %s import %s\n", mld->module->fullname->text,
                    mld->module->name);
            *cp = '.';
        }
    }

    /* Generate the types - enums and classes. */
    pyiEnums(pt, mod, NULL, NULL, 0, fp);

    // FIXME: Nested classes and namespaces.
    // FIXME: Mapped types.
    defined = NULL;

    for (cd = pt->classes; cd != NULL; cd = cd->next)
    {
        ctorDef *ct;

        if (cd->iff->module != mod)
            continue;

        if (isExternal(cd))
            continue;

        fprintf(fp, "\n\nclass %s(", cd->pyname->text);

        if (cd->supers != NULL)
        {
            classList *cl;

            for (cl = cd->supers; cl != NULL; cl = cl->next)
            {
                if (cl != cd->supers)
                    fprintf(fp, ", ");

                prClassRef(cl->cd, mod, defined, fp);
            }
        }
        else if (cd->supertype != NULL)
        {
            fprintf(fp, "%s", cd->supertype->text);
        }
        else if (cd->iff->type == namespace_iface)
        {
            fprintf(fp, "sip.simplewrapper");
        }
        else
        {
            fprintf(fp, "sip.wrapper");
        }

        fprintf(fp, "):\n");

        // FIXME: Fix the indents.
        pyiEnums(pt, mod, cd, defined, 1, fp);
        pyiVars(pt, mod, cd, 1, fp);

        first = TRUE;

        for (ct = cd->ctors; ct != NULL; ct = ct->next)
        {
            if (isPrivateCtor(ct))
                continue;

            // FIXME: Fix the indents.
            first = separate(first, 1, fp);

            if (pyiCtor(pt, mod, cd, ct, FALSE, fp))
                pyiCtor(pt, mod, cd, ct, TRUE, fp);
        }

        first = TRUE;

        for (od = cd->overs; od != NULL; od = od->next)
        {
            if (isPrivate(od))
                continue;

            if (od->common->slot != no_slot)
                continue;

            // FIXME: Fix the indents.
            first = separate(first, 1, fp);

            if (pyiOverload(pt, od, FALSE, 1, fp))
                pyiOverload(pt, od, TRUE, 1, fp);
        }

        /*
         * Keep track of what has been defined so that forward references are
         * no longer required.
         */
        appendToClassList(&defined, cd);
    }

    pyiVars(pt, mod, NULL, 0, fp);

    first = TRUE;

    for (od = mod->overs; od != NULL; od = od->next)
    {
        if (od->common->module != mod)
            continue;

        if (od->common->slot != no_slot)
            continue;

        first = separate(first, 0, fp);

        if (pyiOverload(pt, od, FALSE, 0, fp))
            pyiOverload(pt, od, TRUE, 0, fp);
    }

    fclose(fp);
}


/*
 * Generate an API ctor.
 */
static int pyiCtor(sipSpec *pt, moduleDef *mod, classDef *scope, ctorDef *ct,
        int sec, FILE *fp)
{
    int need_sec = FALSE, need_comma, a;

    /* Do the callable type form. */
    fprintf(fp, "%s.", mod->name);
    prScopedPythonName(fp, scope->ecd, scope->pyname->text);
    fprintf(fp, "(");

    need_comma = FALSE;

    for (a = 0; a < ct->pysig.nrArgs; ++a)
    {
        argDef *ad = &ct->pysig.args[a];

        need_comma = prArgument(pt, ad, FALSE, need_comma, sec, TRUE, TRUE,
                FALSE, fp);

        if (ad->atype == rxcon_type || ad->atype == rxdis_type)
            need_sec = TRUE;
    }

    fprintf(fp, ")\n");

    /* Do the call __init__ form. */
    fprintf(fp, "%s.", mod->name);
    prScopedPythonName(fp, scope->ecd, scope->pyname->text);
    fprintf(fp, ".__init__(self");

    for (a = 0; a < ct->pysig.nrArgs; ++a)
        prArgument(pt, &ct->pysig.args[a], FALSE, TRUE, sec, TRUE, TRUE,
                FALSE, fp);

    fprintf(fp, ")\n");

    return need_sec;
}


/*
 * Generate the APIs for all the enums in a scope.
 */
static void pyiEnums(sipSpec *pt, moduleDef *mod, classDef *scope,
        classList *defined, int indent, FILE *fp)
{
    enumDef *ed;

    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        enumMemberDef *emd;

        if (ed->module != mod)
            continue;

        if (scope != NULL)
        {
            if (ed->ecd != scope)
                continue;
        }
        else if (ed->ecd != NULL || ed->emtd != NULL)
        {
            /* FIXME: Handle enums in mapped types. */
            continue;
        }

        separate(TRUE, indent, fp);

        if (ed->pyname != NULL)
        {
            prIndent(indent, fp);
            fprintf(fp, "class %s(int): ...\n", ed->pyname->text);
        }

        for (emd = ed->members; emd != NULL; emd = emd->next)
        {
            prIndent(indent, fp);
            fprintf(fp, "%s = ... # type: ", emd->pyname->text);

            if (ed->pyname != NULL)
                prEnumRef(ed, mod, defined, fp);
            else
                fprintf(fp, "int");

            fprintf(fp, "\n");
        }
    }
}


/*
 * Generate the APIs for all the variables in a scope.
 */
static void pyiVars(sipSpec *pt, moduleDef *mod, classDef *scope, int indent,
        FILE *fp)
{
    int first = TRUE;
    varDef *vd;

    for (vd = pt->vars; vd != NULL; vd = vd->next)
    {
        const char *tname;
        classDef *tscope;

        if (vd->module != mod)
            continue;

        if (vd->ecd != scope)
            continue;

        /* This should never fail. */
        if ((tname = pyiType(pt, &vd->type, FALSE, &tscope)) == NULL)
            continue;

        first = separate(first, indent, fp);

        // FIXME: Handle forward references.
        prIndent(indent, fp);
        fprintf(fp, "%s = ... # type: ", vd->pyname->text);
        prScopedPythonName(fp, tscope, tname);
        fprintf(fp, "\n");
    }
}


/*
 * Generate a single API overload.
 */
static int pyiOverload(sipSpec *pt, overDef *od, int sec, int indent, FILE *fp)
{
    int need_sec;

    prIndent(indent, fp);
    fprintf(fp, "def %s", od->common->pyname->text);

    /* FIXME: Handle @overload - means we need to know sec ahead of time. */
    need_sec = pyiPythonSignature(pt, fp, &od->pysig, sec, TRUE, TRUE, FALSE,
            FALSE, TRUE);

    fprintf(fp, ": ...\n");

    return need_sec;
}


/*
 * Generate a Python argument.
 */
int prArgument(sipSpec *pt, argDef *ad, int out, int need_comma,
        int sec, int names, int defaults, int in_str, FILE *fp)
{
    const char *tname;
    classDef *tscope;

    if (isArraySize(ad))
        return need_comma;

    if (sec && (ad->atype == slotcon_type || ad->atype == slotdis_type))
        return need_comma;

    if ((tname = pyiType(pt, ad, sec, &tscope)) == NULL)
        return need_comma;

    if (need_comma)
        fprintf(fp, ", ");

    prScopedPythonName(fp, tscope, tname);

    /*
     * Handle the default value is required, but ignore it if it is an output
     * only argument.
     */
    if (defaults && ad->defval && !out)
    {
        if (names && ad->name != NULL)
            fprintf(fp, " %s", ad->name->text);

        fprintf(fp, "=");
        prcode(fp, "%M");
        prDefaultValue(ad, in_str, fp);
        prcode(fp, "%M");
    }

    return TRUE;
}


/*
 * Generate the default value of an argument.
 */
void prDefaultValue(argDef *ad, int in_str, FILE *fp)
{
    /* Use any explicitly provided documentation. */
    if (ad->docval != NULL)
    {
        prcode(fp, "%s", ad->docval);
        return;
    }

    /* Translate some special cases. */
    if (ad->defval->next == NULL && ad->defval->vtype == numeric_value)
    {
        if (ad->nrderefs > 0 && ad->defval->u.vnum == 0)
        {
            prcode(fp, "None");
            return;
        }

        if (ad->atype == bool_type || ad->atype == cbool_type)
        {
            prcode(fp, ad->defval->u.vnum ? "True" : "False");
            return;
        }
    }

    generateExpression(ad->defval, in_str, fp);
}


/*
 * Get the Python representation of a type.
 */
static const char *pyiType(sipSpec *pt, argDef *ad, int sec, classDef **scope)
{
    const char *type_name;

    *scope = NULL;

    /* Use any explicit documented type. */
    if (ad->doctype != NULL)
        return ad->doctype;

    /* For classes and mapped types we need the default implementation. */
    if (ad->atype == class_type || ad->atype == mapped_type)
    {
        classDef *def_cd = NULL;
        mappedTypeDef *def_mtd = NULL;
        ifaceFileDef *iff;

        if (ad->atype == class_type)
        {
            iff = ad->u.cd->iff;

            if (iff->api_range == NULL)
            {
                /* There is only one implementation. */
                def_cd = ad->u.cd;
                iff = NULL;
            }
        }
        else
        {
            iff = ad->u.mtd->iff;

            if (iff->api_range == NULL)
            {
                /* There is only one implementation. */
                def_mtd = ad->u.mtd;
                iff = NULL;
            }
        }

        if (iff != NULL)
        {
            int def_api;

            /* Find the default implementation. */
            def_api = findAPI(pt, iff->api_range->api_name->text)->from;

            for (iff = iff->first_alt; iff != NULL; iff = iff->next_alt)
            {
                apiVersionRangeDef *avd = iff->api_range;

                if (avd->from > 0 && avd->from > def_api)
                    continue;

                if (avd->to > 0 && avd->to <= def_api)
                    continue;

                /* It's within range. */
                break;
            }

            /* Find the corresponding class or mapped type. */
            for (def_cd = pt->classes; def_cd != NULL; def_cd = def_cd->next)
                if (def_cd->iff == iff)
                    break;

            if (def_cd == NULL)
                for (def_mtd = pt->mappedtypes; def_mtd != NULL; def_mtd = def_mtd->next)
                    if (def_mtd->iff == iff)
                        break;
        }

        /* Now handle the correct implementation. */
        if (def_cd != NULL)
        {
            *scope = def_cd->ecd;
            type_name = def_cd->pyname->text;
        }
        else
        {
            /*
             * Give a hint that /DocType/ should be used, or there is no
             * default implementation.
             */
            type_name = "unknown-type";

            if (def_mtd != NULL)
            {
                if (def_mtd->doctype != NULL)
                    type_name = def_mtd->doctype;
                else if (def_mtd->pyname != NULL)
                    type_name = def_mtd->pyname->text;
            }
        }

        return type_name;
    }

    switch (ad->atype)
    {
    case capsule_type:
        type_name = scopedNameTail(ad->u.cap);
        break;

    case struct_type:
    case void_type:
        type_name = "sip.voidptr";
        break;

    case enum_type:
        if (ad->u.ed->pyname != NULL)
        {
            type_name = ad->u.ed->pyname->text;
            *scope = ad->u.ed->ecd;
        }
        else
            type_name = "int";
        break;

    case signal_type:
        type_name = "SIGNAL()";
        break;

    case slot_type:
        type_name = "SLOT()";
        break;

    case rxcon_type:
    case rxdis_type:
        if (sec)
            type_name = "callable";
        else
            type_name = "QObject";

        break;

    case qobject_type:
        type_name = "QObject";
        break;

    case ustring_type:
    case string_type:
    case sstring_type:
    case wstring_type:
    case ascii_string_type:
    case latin1_string_type:
    case utf8_string_type:
        type_name = "str";
        break;

    case byte_type:
    case sbyte_type:
    case ubyte_type:
    case ushort_type:
    case uint_type:
    case long_type:
    case longlong_type:
    case ulong_type:
    case ulonglong_type:
    case short_type:
    case int_type:
    case cint_type:
        type_name = "int";
        break;

    case float_type:
    case cfloat_type:
    case double_type:
    case cdouble_type:
        type_name = "float";
        break;

    case bool_type:
    case cbool_type:
        type_name = "bool";
        break;

    case pyobject_type:
        type_name = "object";
        break;

    case pytuple_type:
        type_name = "tuple";
        break;

    case pylist_type:
        type_name = "list";
        break;

    case pydict_type:
        type_name = "dict";
        break;

    case pycallable_type:
        type_name = "callable";
        break;

    case pyslice_type:
        type_name = "slice";
        break;

    case pytype_type:
        type_name = "type";
        break;

    case pybuffer_type:
        type_name = "buffer";
        break;

    case ellipsis_type:
        type_name = "...";
        break;

    case slotcon_type:
    case anyslot_type:
        type_name = "SLOT()";
        break;

    default:
        type_name = NULL;
    }

    return type_name;
}


/*
 * Generate a scoped Python name.
 */
void prScopedPythonName(FILE *fp, classDef *scope, const char *pyname)
{
    if (scope != NULL)
    {
        prScopedPythonName(fp, scope->ecd, NULL);
        fprintf(fp, "%s.", scope->pyname->text);
    }

    if (pyname != NULL)
        fprintf(fp, "%s", pyname);
}


/*
 * Generate a Python signature.
 */
static int pyiPythonSignature(sipSpec *pt, FILE *fp, signatureDef *sd, int sec,
        int names, int defaults, int in_str, int is_signal, int pep484)
{
    int need_sec = FALSE, need_comma = FALSE, is_res, nr_out, a;

    if (is_signal)
    {
        if (sd->nrArgs != 0)
            fprintf(fp, "[");
    }
    else
    {
        fprintf(fp, "(");
    }

    nr_out = 0;

    for (a = 0; a < sd->nrArgs; ++a)
    {
        argDef *ad = &sd->args[a];

        if (isOutArg(ad))
            ++nr_out;

        if (!isInArg(ad))
            continue;

        need_comma = prArgument(pt, ad, FALSE, need_comma, sec, names,
                defaults, in_str, fp);

        if (ad->atype == rxcon_type || ad->atype == rxdis_type)
            need_sec = TRUE;
    }

    if (is_signal)
    {
        if (sd->nrArgs != 0)
            fprintf(fp, "]");
    }
    else
    {
        fprintf(fp, ")");
    }

    is_res = !((sd->result.atype == void_type && sd->result.nrderefs == 0) ||
            (sd->result.doctype != NULL && sd->result.doctype[0] == '\0'));

    if (is_res || nr_out > 0)
    {
        fprintf(fp, " -> ");

        if ((is_res && nr_out > 0) || nr_out > 1)
            fprintf(fp, "(");

        if (is_res)
            need_comma = prArgument(pt, &sd->result, TRUE, FALSE, sec, FALSE,
                    FALSE, in_str, fp);
        else
            need_comma = FALSE;

        for (a = 0; a < sd->nrArgs; ++a)
        {
            argDef *ad = &sd->args[a];

            if (isOutArg(ad))
                /* We don't want the name in the result tuple. */
                need_comma = prArgument(pt, ad, TRUE, need_comma, sec, FALSE,
                        FALSE, in_str, fp);
        }

        if ((is_res && nr_out > 0) || nr_out > 1)
            fprintf(fp, ")");
    }
    else if (pep484)
    {
        fprintf(fp, " -> None");
    }

    return need_sec;
}


/*
 * Generate the required indentation.
 */
static void prIndent(int indent, FILE *fp)
{
    while (indent--)
        fprintf(fp, "    ");
}


/*
 * Generate a newline if not already done.
 */
static int separate(int first, int indent, FILE *fp)
{
    if (first)
        fprintf(fp, (indent ? "\n" : "\n\n"));

    return FALSE;
}


/*
 * Generate a class reference, including its owning module if necessary and
 * handling forward references if necessary.
 */
static void prClassRef(classDef *cd, moduleDef *mod, classList *defined,
        FILE *fp)
{
    prTypeRef(cd->iff->module, cd->ecd, cd->pyname, mod, defined, fp);
}


/*
 * Generate an enum reference, including its owning module if necessary and
 * handling forward references if necessary.
 */
static void prEnumRef(enumDef *ed, moduleDef *mod, classList *defined,
        FILE *fp)
{
    prTypeRef(ed->module, ed->ecd, ed->pyname, mod, defined, fp);
}


/*
 * Generate a type reference, including its owning module if necessary and
 * handling forward references if necessary.
 */
static void prTypeRef(moduleDef *owning_mod, classDef *scope, nameDef *pyname,
        moduleDef *mod, classList *defined, FILE *fp)
{
    int forward;

    if (owning_mod != mod)
    {
        fprintf(fp, "%s.", owning_mod->name);
        forward = FALSE;
    }
    else if (scope != NULL)
    {
        classList *cl;

        forward = TRUE;

        for (cl = defined; cl != NULL; cl = cl->next)
            if (scope == cl->cd)
            {
                forward = FALSE;
                break;
            }

        if (forward)
            fprintf(fp, "'");
    }
    else
    {
        forward = FALSE;
    }

    prScopedPythonName(fp, scope, pyname->text);

    if (forward)
        fprintf(fp, "'");
}
