/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_READBUFFERCODE = 258,
     TK_WRITEBUFFERCODE = 259,
     TK_SEGCOUNTCODE = 260,
     TK_CHARBUFFERCODE = 261,
     TK_AUTOPYNAME = 262,
     TK_DEFDOCSTRFMT = 263,
     TK_DEFDOCSTRSIG = 264,
     TK_DEFENCODING = 265,
     TK_PLUGIN = 266,
     TK_VIRTERRORHANDLER = 267,
     TK_EXPTYPEHINTCODE = 268,
     TK_TYPEHINTCODE = 269,
     TK_DOCSTRING = 270,
     TK_EXTRACT = 271,
     TK_ACCESSCODE = 272,
     TK_GETCODE = 273,
     TK_SETCODE = 274,
     TK_PREINITCODE = 275,
     TK_INITCODE = 276,
     TK_POSTINITCODE = 277,
     TK_FINALCODE = 278,
     TK_UNITCODE = 279,
     TK_UNITPOSTINCLUDECODE = 280,
     TK_MODCODE = 281,
     TK_TYPECODE = 282,
     TK_COPYING = 283,
     TK_MAPPEDTYPE = 284,
     TK_CODELINE = 285,
     TK_IF = 286,
     TK_END = 287,
     TK_NAME_VALUE = 288,
     TK_PATH_VALUE = 289,
     TK_STRING_VALUE = 290,
     TK_VIRTUALCATCHERCODE = 291,
     TK_TRAVERSECODE = 292,
     TK_CLEARCODE = 293,
     TK_GETBUFFERCODE = 294,
     TK_RELEASEBUFFERCODE = 295,
     TK_PICKLECODE = 296,
     TK_VIRTUALCALLCODE = 297,
     TK_METHODCODE = 298,
     TK_PREMETHODCODE = 299,
     TK_INSTANCECODE = 300,
     TK_FROMTYPE = 301,
     TK_TOTYPE = 302,
     TK_RELEASE = 303,
     TK_TOSUBCLASS = 304,
     TK_INCLUDE = 305,
     TK_IMPORT = 306,
     TK_EXPHEADERCODE = 307,
     TK_MODHEADERCODE = 308,
     TK_TYPEHEADERCODE = 309,
     TK_MODULE = 310,
     TK_COMPOMODULE = 311,
     TK_CLASS = 312,
     TK_STRUCT = 313,
     TK_UNION = 314,
     TK_PUBLIC = 315,
     TK_PROTECTED = 316,
     TK_PRIVATE = 317,
     TK_SIGNALS = 318,
     TK_SIGNAL_METHOD = 319,
     TK_SLOTS = 320,
     TK_SLOT_METHOD = 321,
     TK_BOOL = 322,
     TK_SHORT = 323,
     TK_INT = 324,
     TK_LONG = 325,
     TK_FLOAT = 326,
     TK_DOUBLE = 327,
     TK_CHAR = 328,
     TK_WCHAR_T = 329,
     TK_VOID = 330,
     TK_PYOBJECT = 331,
     TK_PYTUPLE = 332,
     TK_PYLIST = 333,
     TK_PYDICT = 334,
     TK_PYCALLABLE = 335,
     TK_PYSLICE = 336,
     TK_PYTYPE = 337,
     TK_PYBUFFER = 338,
     TK_PYENUM = 339,
     TK_VIRTUAL = 340,
     TK_ENUM = 341,
     TK_SIGNED = 342,
     TK_UNSIGNED = 343,
     TK_SCOPE = 344,
     TK_LOGICAL_OR = 345,
     TK_CONST = 346,
     TK_STATIC = 347,
     TK_PYHASHT = 348,
     TK_PYSSIZET = 349,
     TK_SIZET = 350,
     TK_NUMBER_VALUE = 351,
     TK_REAL_VALUE = 352,
     TK_TYPEDEF = 353,
     TK_NAMESPACE = 354,
     TK_TIMELINE = 355,
     TK_PLATFORMS = 356,
     TK_FEATURE = 357,
     TK_LICENSE = 358,
     TK_QCHAR_VALUE = 359,
     TK_TRUE_VALUE = 360,
     TK_FALSE_VALUE = 361,
     TK_NULL_VALUE = 362,
     TK_OPERATOR = 363,
     TK_THROW = 364,
     TK_NOEXCEPT = 365,
     TK_EXCEPTION = 366,
     TK_RAISECODE = 367,
     TK_EXPLICIT = 368,
     TK_TEMPLATE = 369,
     TK_FINAL = 370,
     TK_ELLIPSIS = 371,
     TK_DEFMETATYPE = 372,
     TK_DEFSUPERTYPE = 373,
     TK_PROPERTY = 374,
     TK_HIDE_NS = 375,
     TK_FORMAT = 376,
     TK_GET = 377,
     TK_ID = 378,
     TK_KWARGS = 379,
     TK_LANGUAGE = 380,
     TK_LICENSEE = 381,
     TK_NAME = 382,
     TK_OPTIONAL = 383,
     TK_ORDER = 384,
     TK_REMOVELEADING = 385,
     TK_SET = 386,
     TK_SIGNATURE = 387,
     TK_TIMESTAMP = 388,
     TK_TYPE = 389,
     TK_USEARGNAMES = 390,
     TK_USELIMITEDAPI = 391,
     TK_ALLRAISEPYEXC = 392,
     TK_CALLSUPERINIT = 393,
     TK_DEFERRORHANDLER = 394,
     TK_VERSION = 395
   };
#endif
/* Tokens.  */
#define TK_READBUFFERCODE 258
#define TK_WRITEBUFFERCODE 259
#define TK_SEGCOUNTCODE 260
#define TK_CHARBUFFERCODE 261
#define TK_AUTOPYNAME 262
#define TK_DEFDOCSTRFMT 263
#define TK_DEFDOCSTRSIG 264
#define TK_DEFENCODING 265
#define TK_PLUGIN 266
#define TK_VIRTERRORHANDLER 267
#define TK_EXPTYPEHINTCODE 268
#define TK_TYPEHINTCODE 269
#define TK_DOCSTRING 270
#define TK_EXTRACT 271
#define TK_ACCESSCODE 272
#define TK_GETCODE 273
#define TK_SETCODE 274
#define TK_PREINITCODE 275
#define TK_INITCODE 276
#define TK_POSTINITCODE 277
#define TK_FINALCODE 278
#define TK_UNITCODE 279
#define TK_UNITPOSTINCLUDECODE 280
#define TK_MODCODE 281
#define TK_TYPECODE 282
#define TK_COPYING 283
#define TK_MAPPEDTYPE 284
#define TK_CODELINE 285
#define TK_IF 286
#define TK_END 287
#define TK_NAME_VALUE 288
#define TK_PATH_VALUE 289
#define TK_STRING_VALUE 290
#define TK_VIRTUALCATCHERCODE 291
#define TK_TRAVERSECODE 292
#define TK_CLEARCODE 293
#define TK_GETBUFFERCODE 294
#define TK_RELEASEBUFFERCODE 295
#define TK_PICKLECODE 296
#define TK_VIRTUALCALLCODE 297
#define TK_METHODCODE 298
#define TK_PREMETHODCODE 299
#define TK_INSTANCECODE 300
#define TK_FROMTYPE 301
#define TK_TOTYPE 302
#define TK_RELEASE 303
#define TK_TOSUBCLASS 304
#define TK_INCLUDE 305
#define TK_IMPORT 306
#define TK_EXPHEADERCODE 307
#define TK_MODHEADERCODE 308
#define TK_TYPEHEADERCODE 309
#define TK_MODULE 310
#define TK_COMPOMODULE 311
#define TK_CLASS 312
#define TK_STRUCT 313
#define TK_UNION 314
#define TK_PUBLIC 315
#define TK_PROTECTED 316
#define TK_PRIVATE 317
#define TK_SIGNALS 318
#define TK_SIGNAL_METHOD 319
#define TK_SLOTS 320
#define TK_SLOT_METHOD 321
#define TK_BOOL 322
#define TK_SHORT 323
#define TK_INT 324
#define TK_LONG 325
#define TK_FLOAT 326
#define TK_DOUBLE 327
#define TK_CHAR 328
#define TK_WCHAR_T 329
#define TK_VOID 330
#define TK_PYOBJECT 331
#define TK_PYTUPLE 332
#define TK_PYLIST 333
#define TK_PYDICT 334
#define TK_PYCALLABLE 335
#define TK_PYSLICE 336
#define TK_PYTYPE 337
#define TK_PYBUFFER 338
#define TK_PYENUM 339
#define TK_VIRTUAL 340
#define TK_ENUM 341
#define TK_SIGNED 342
#define TK_UNSIGNED 343
#define TK_SCOPE 344
#define TK_LOGICAL_OR 345
#define TK_CONST 346
#define TK_STATIC 347
#define TK_PYHASHT 348
#define TK_PYSSIZET 349
#define TK_SIZET 350
#define TK_NUMBER_VALUE 351
#define TK_REAL_VALUE 352
#define TK_TYPEDEF 353
#define TK_NAMESPACE 354
#define TK_TIMELINE 355
#define TK_PLATFORMS 356
#define TK_FEATURE 357
#define TK_LICENSE 358
#define TK_QCHAR_VALUE 359
#define TK_TRUE_VALUE 360
#define TK_FALSE_VALUE 361
#define TK_NULL_VALUE 362
#define TK_OPERATOR 363
#define TK_THROW 364
#define TK_NOEXCEPT 365
#define TK_EXCEPTION 366
#define TK_RAISECODE 367
#define TK_EXPLICIT 368
#define TK_TEMPLATE 369
#define TK_FINAL 370
#define TK_ELLIPSIS 371
#define TK_DEFMETATYPE 372
#define TK_DEFSUPERTYPE 373
#define TK_PROPERTY 374
#define TK_HIDE_NS 375
#define TK_FORMAT 376
#define TK_GET 377
#define TK_ID 378
#define TK_KWARGS 379
#define TK_LANGUAGE 380
#define TK_LICENSEE 381
#define TK_NAME 382
#define TK_OPTIONAL 383
#define TK_ORDER 384
#define TK_REMOVELEADING 385
#define TK_SET 386
#define TK_SIGNATURE 387
#define TK_TIMESTAMP 388
#define TK_TYPE 389
#define TK_USEARGNAMES 390
#define TK_USELIMITEDAPI 391
#define TK_ALLRAISEPYEXC 392
#define TK_CALLSUPERINIT 393
#define TK_DEFERRORHANDLER 394
#define TK_VERSION 395




/* Copy the first part of user declarations.  */
#line 19 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "sip.h"


#define MAX_NESTED_IF       10
#define MAX_NESTED_SCOPE    10

#define inMainModule()      (currentSpec->module == currentModule || currentModule->container != NULL)


static sipSpec *currentSpec;            /* The current spec being parsed. */
static int strictParse;                 /* Set if the platform is enforced. */
static stringList *backstops;           /* The list of backstops. */
static stringList *neededQualifiers;    /* The list of required qualifiers. */
static stringList *excludedQualifiers;  /* The list of excluded qualifiers. */
static moduleDef *currentModule;        /* The current module being parsed. */
static mappedTypeDef *currentMappedType;    /* The current mapped type. */
static enumDef *currentEnum;            /* The current enum being parsed. */
static int sectionFlags;                /* The current section flags. */
static int currentIsVirt;               /* Set if the callable is virtual. */
static int currentCtorIsExplicit;       /* Set if the ctor is explicit. */
static int currentIsStatic;             /* Set if the current is static. */
static int currentIsSignal;             /* Set if the current is Q_SIGNAL. */
static int currentIsSlot;               /* Set if the current is Q_SLOT. */
static int currentIsTemplate;           /* Set if the current is a template. */
static char *previousFile;              /* The file just parsed. */
static parserContext currentContext;    /* The current context. */
static int stackPtr;                    /* The stack pointer. */
static int skipStack[MAX_NESTED_IF];    /* Stack of skip flags. */
static classDef *scopeStack[MAX_NESTED_SCOPE];  /* The scope stack. */
static int sectFlagsStack[MAX_NESTED_SCOPE];    /* The section flags stack. */
static int currentScopeIdx;             /* The scope stack index. */
static unsigned currentTimelineOrder;   /* The current timeline order. */
static classList *currentSupers;        /* The current super-class list. */
static platformDef *currentPlatforms;   /* The current platforms list. */
static platformDef *platformStack[MAX_NESTED_IF];   /* Stack of platforms. */
static KwArgs defaultKwArgs;            /* The default keyword arguments support. */
static int makeProtPublic;              /* Treat protected items as public. */
static stringList **mainModuleSipFiles; /* The list of .sip files for the main module. */
static int parsingCSignature;           /* An explicit C/C++ signature is being parsed. */


static const char *getPythonName(moduleDef *mod, optFlags *optflgs,
        const char *cname);
static classDef *findClass(sipSpec *pt, ifaceFileType iftype,
        scopedNameDef *fqname, int tmpl_arg);
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff,
        int tmpl_arg);
static classDef *newClass(sipSpec *pt, ifaceFileType iftype,
        scopedNameDef *snd, const char *virt_error_handler,
        typeHintDef *typehint_in, typeHintDef *typehint_out,
        const char *typehint_value);
static void finishClass(sipSpec *, moduleDef *, classDef *, optFlags *);
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new);
static mappedTypeDef *newMappedType(sipSpec *,argDef *, optFlags *);
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, mappedTypeDef *mt_scope,
        char *name, optFlags *optflgs, int flags, int isscoped);
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod,
        classDef *scope, scopedNameDef *fqname, classTmplDef *tcd,
        templateDef *td, const char *pyname, int use_template_name,
        docstringDef *docstring);
static void newTypedef(sipSpec *, moduleDef *, char *, argDef *, optFlags *,
        docstringDef *);
static void newVar(sipSpec *pt, moduleDef *mod, char *name, int isstatic,
        argDef *type, optFlags *of, codeBlock *acode, codeBlock *gcode,
        codeBlock *scode, int section);
static void newCtor(moduleDef *, char *, int, signatureDef *, optFlags *,
                    codeBlock *, throwArgs *, signatureDef *, int,
                    docstringDef *, codeBlock *);
static void newFunction(sipSpec *, moduleDef *, classDef *, ifaceFileDef *,
        mappedTypeDef *, int, int, int, int, int, char *, signatureDef *, int,
        int, optFlags *, codeBlock *, codeBlock *, codeBlock *, throwArgs *,
        signatureDef *, docstringDef *, int, codeBlock *);
static optFlag *findOptFlag(optFlags *flgs, const char *name);
static optFlag *getOptFlag(optFlags *flgs, const char *name, flagType ft);
static memberDef *findFunction(sipSpec *, moduleDef *, classDef *,
        ifaceFileDef *, mappedTypeDef *, const char *, int, int, int);
static void checkAttributes(sipSpec *, moduleDef *, classDef *,
        mappedTypeDef *, const char *, int);
static void newModule(FILE *fp, const char *filename);
static moduleDef *allocModule(void);
static void parseFile(FILE *fp, const char *name, moduleDef *prevmod,
        int optional);
static void handleEOF(void);
static void handleEOM(void);
static qualDef *findQualifier(const char *name);
static const char *getInt(const char *cp, int *ip);
static scopedNameDef *text2scopedName(ifaceFileDef *scope, char *text);
static scopedNameDef *scopeScopedName(ifaceFileDef *scope,
        scopedNameDef *name);
static void pushScope(classDef *);
static void popScope(void);
static classDef *currentScope(void);
static void newQualifier(moduleDef *, int, unsigned, int, const char *,
        qualType);
static qualDef *allocQualifier(moduleDef *, int, unsigned, int, const char *,
        qualType);
static void newImport(const char *filename);
static int timePeriod(const char *lname, const char *uname);
static int platOrFeature(char *name, int optnot);
static void addPlatform(qualDef *qd);
static int notSkipping(void);
static void getHooks(optFlags *,char **,char **);
static int getTransfer(optFlags *optflgs);
static int getReleaseGIL(optFlags *optflgs);
static int getHoldGIL(optFlags *optflgs);
static int getDeprecated(optFlags *optflgs);
static int getAllowNone(optFlags *optflgs);
static int getDisallowNone(optFlags *optflgs);
static const char *getVirtErrorHandler(optFlags *optflgs);
static const char *getTypeHintValue(optFlags *optflgs);
static void getTypeHints(optFlags *optflgs, typeHintDef **in,
        typeHintDef **out);
static int getNoTypeHint(optFlags *optflgs);
static void templateSignature(signatureDef *sd, KwArgs kwargs, int result,
        classTmplDef *tcd, templateDef *td, classDef *ncd,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td,
        classDef *ncd, scopedNameDef *type_names, scopedNameDef *type_values);
static int search_back(const char *end, const char *start, const char *target);
static char *type2string(argDef *ad);
static char *scopedNameToString(scopedNameDef *name);
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname);
static int sameName(scopedNameDef *snd, const char *sname);
static int stringFind(stringList *sl, const char *s);
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname);
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name);
static void defineClass(scopedNameDef *snd, classList *supers, optFlags *of);
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def);
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod);
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateTypedefs(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, scopedNameDef *type_names,
        scopedNameDef *type_values);
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void resolveAnyTypedef(sipSpec *pt, argDef *ad);
static void addTypedef(sipSpec *pt, typedefDef *tdd);
static void addVariable(sipSpec *pt, varDef *vd);
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags);
static Format convertFormat(const char *format);
static Signature convertSignature(const char *signature);
static argType convertEncoding(const char *encoding);
static char *convertFeaturedString(char *fs);
static KwArgs keywordArgs(moduleDef *mod, optFlags *optflgs, signatureDef *sd,
        int need_name);
static char *strip(char *s);
static int isEnabledFeature(const char *name);
static void addProperty(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *name, const char *get, const char *set,
        docstringDef *docstring);
static moduleDef *configureModule(sipSpec *pt, moduleDef *module,
        const char *filename, const char *name, int c_module, KwArgs kwargs,
        int use_arg_names, int use_limited_api, int call_super_init,
        int all_raise_py_exc, const char *def_error_handler,
        docstringDef *docstring);
static void addAutoPyName(moduleDef *mod, const char *remove_leading);
static KwArgs convertKwArgs(const char *kwargs);
static void checkAnnos(optFlags *annos, const char *valid[]);
static void appendCodeBlock(codeBlockList **headp, codeBlock *cb);
static void handleKeepReference(optFlags *optflgs, argDef *ad, moduleDef *mod);
static void mappedTypeAnnos(sipSpec *pt, mappedTypeDef *mtd,
        optFlags *optflgs);
static void add_new_deref(argDef *new, argDef *orig, int isconst);
static void add_derefs(argDef *dst, argDef *src);
static int isBackstop(qualDef *qd);
static void checkEllipsis(signatureDef *sd);
static int checkUserState(codeBlockList *convtocode,
        codeBlockList *releasecode);
static scopedNameDef *fullyQualifiedName(scopedNameDef *snd);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 202 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
{
    char            qchar;
    char            *text;
    long            number;
    double          real;
    argDef          memArg;
    signatureDef    signature;
    signatureDef    *optsignature;
    throwArgs       *throwlist;
    codeBlock       *codeb;
    docstringDef    *docstr;
    valueDef        value;
    valueDef        *valp;
    optFlags        optflags;
    optFlag         flag;
    scopedNameDef   *scpvalp;
    fcallDef        fcall;
    int             boolean;
    exceptionDef    exceptionbase;
    classDef        *klass;
    autoPyNameCfg   autopyname;
    compModuleCfg   compmodule;
    defDocstringFmtCfg  defdocstringfmt;
    defDocstringSigCfg  defdocstringsig;
    defEncodingCfg  defencoding;
    defMetatypeCfg  defmetatype;
    defSupertypeCfg defsupertype;
    hiddenNsCfg     hiddenns;
    exceptionCfg    exception;
    docstringCfg    docstring;
    extractCfg      extract;
    featureCfg      feature;
    licenseCfg      license;
    importCfg       import;
    includeCfg      include;
    moduleCfg       module;
    pluginCfg       plugin;
    propertyCfg     property;
    variableCfg     variable;
    vehCfg          veh;
    int             token;
}
/* Line 193 of yacc.c.  */
#line 602 "/Users/phil/hg/sip/code_generator/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 615 "/Users/phil/hg/sip/code_generator/parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  233
/* YYNRULES -- Number of rules.  */
#define YYNRULES  550
/* YYNRULES -- Number of states.  */
#define YYNSTATES  945

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   395

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   148,     2,     2,     2,   161,   153,     2,
     141,   142,   151,   150,   143,   149,     2,   152,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   158,   147,
     156,   144,   157,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   159,     2,   160,   162,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   145,   154,   146,   155,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     101,   103,   107,   109,   113,   117,   120,   122,   126,   128,
     132,   136,   139,   141,   145,   147,   151,   155,   158,   160,
     164,   166,   170,   174,   178,   180,   184,   186,   190,   194,
     200,   201,   205,   210,   212,   215,   217,   219,   221,   223,
     226,   227,   233,   234,   241,   246,   248,   251,   253,   255,
     257,   259,   262,   265,   268,   270,   272,   274,   289,   290,
     296,   297,   301,   303,   306,   307,   313,   315,   318,   320,
     323,   325,   329,   331,   335,   339,   340,   346,   348,   351,
     353,   354,   360,   362,   365,   369,   374,   376,   380,   382,
     385,   386,   388,   392,   394,   398,   402,   406,   410,   414,
     417,   419,   423,   425,   429,   433,   436,   438,   442,   444,
     448,   452,   455,   457,   461,   463,   467,   471,   475,   477,
     481,   483,   487,   491,   492,   497,   499,   502,   504,   506,
     508,   512,   513,   516,   520,   522,   526,   530,   534,   538,
     542,   546,   550,   554,   558,   559,   564,   566,   569,   571,
     573,   575,   577,   579,   581,   584,   586,   590,   592,   596,
     600,   604,   607,   609,   613,   615,   619,   623,   626,   629,
     632,   635,   638,   641,   644,   647,   650,   653,   656,   659,
     662,   665,   668,   671,   674,   677,   680,   683,   686,   689,
     693,   695,   699,   703,   707,   708,   710,   714,   716,   720,
     724,   728,   729,   731,   735,   737,   741,   743,   747,   751,
     755,   758,   760,   763,   764,   774,   775,   777,   779,   781,
     782,   784,   785,   787,   789,   792,   794,   796,   801,   802,
     804,   805,   808,   809,   812,   814,   818,   820,   822,   824,
     826,   828,   830,   831,   833,   835,   837,   839,   841,   843,
     847,   848,   852,   855,   857,   859,   863,   865,   867,   869,
     871,   876,   879,   881,   883,   885,   887,   889,   891,   892,
     894,   898,   905,   918,   919,   920,   928,   929,   930,   939,
     940,   944,   949,   950,   951,   960,   961,   964,   966,   970,
     973,   974,   976,   978,   980,   981,   985,   986,   988,   991,
     993,   995,   997,   999,  1001,  1003,  1005,  1007,  1009,  1011,
    1013,  1015,  1017,  1019,  1021,  1023,  1025,  1027,  1030,  1033,
    1036,  1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1056,
    1059,  1062,  1066,  1070,  1074,  1077,  1081,  1085,  1087,  1091,
    1095,  1099,  1103,  1104,  1109,  1111,  1114,  1116,  1118,  1120,
    1122,  1124,  1125,  1127,  1128,  1132,  1134,  1146,  1147,  1151,
    1153,  1165,  1166,  1167,  1174,  1175,  1176,  1184,  1202,  1210,
    1228,  1245,  1247,  1249,  1251,  1253,  1255,  1257,  1259,  1261,
    1264,  1267,  1270,  1273,  1276,  1279,  1282,  1285,  1288,  1291,
    1295,  1299,  1301,  1304,  1307,  1309,  1312,  1315,  1318,  1320,
    1323,  1324,  1326,  1327,  1329,  1330,  1333,  1334,  1338,  1340,
    1344,  1346,  1350,  1352,  1354,  1356,  1357,  1360,  1361,  1364,
    1365,  1368,  1369,  1372,  1374,  1375,  1377,  1381,  1384,  1385,
    1389,  1390,  1394,  1396,  1397,  1401,  1403,  1405,  1407,  1408,
    1412,  1414,  1420,  1421,  1425,  1427,  1430,  1432,  1434,  1437,
    1440,  1443,  1448,  1452,  1456,  1457,  1459,  1460,  1464,  1467,
    1469,  1474,  1477,  1480,  1483,  1485,  1487,  1490,  1492,  1494,
    1497,  1500,  1504,  1506,  1508,  1510,  1513,  1516,  1518,  1520,
    1522,  1524,  1526,  1528,  1530,  1532,  1534,  1536,  1538,  1540,
    1542,  1544,  1546,  1548,  1550,  1554,  1555,  1557,  1562,  1563,
    1565
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     164,     0,    -1,   165,    -1,   164,   165,    -1,    -1,   166,
     167,    -1,   181,    -1,   240,    -1,   264,    -1,   169,    -1,
     173,    -1,   177,    -1,   228,    -1,   232,    -1,   265,    -1,
     282,    -1,   294,    -1,   211,    -1,   236,    -1,   260,    -1,
     256,    -1,   278,    -1,   224,    -1,   195,    -1,   247,    -1,
     275,    -1,   266,    -1,   207,    -1,   277,    -1,   279,    -1,
     215,    -1,   283,    -1,   280,    -1,   281,    -1,   185,    -1,
     197,    -1,   168,    -1,   219,    -1,   223,    -1,   203,    -1,
     325,    -1,   331,    -1,   328,    -1,   189,    -1,   321,    -1,
     300,    -1,   360,    -1,   384,    -1,   267,    -1,     8,   170,
      -1,    35,    -1,   141,   171,   142,    -1,   172,    -1,   171,
     143,   172,    -1,   127,   144,    35,    -1,     9,   174,    -1,
      35,    -1,   141,   175,   142,    -1,   176,    -1,   175,   143,
     176,    -1,   127,   144,    35,    -1,    10,   178,    -1,    35,
      -1,   141,   179,   142,    -1,   180,    -1,   179,   143,   180,
      -1,   127,   144,    35,    -1,    11,   182,    -1,    33,    -1,
     141,   183,   142,    -1,   184,    -1,   183,   143,   184,    -1,
     127,   144,    33,    -1,    12,   186,   298,    -1,    33,    -1,
     141,   187,   142,    -1,   188,    -1,   187,   143,   188,    -1,
     127,   144,    33,    -1,   111,   315,   190,   365,   191,    -1,
      -1,   141,   315,   142,    -1,   145,   192,   146,   147,    -1,
     193,    -1,   192,   193,    -1,   219,    -1,   223,    -1,   194,
      -1,   267,    -1,   112,   298,    -1,    -1,    29,   392,   365,
     196,   199,    -1,    -1,   330,    29,   392,   365,   198,   199,
      -1,   145,   200,   146,   147,    -1,   201,    -1,   200,   201,
      -1,   219,    -1,   223,    -1,   267,    -1,   276,    -1,    46,
     298,    -1,    47,   298,    -1,    48,   298,    -1,   272,    -1,
     300,    -1,   202,    -1,    92,   388,    33,   141,   373,   142,
     362,   394,   365,   358,   147,   293,   371,   370,    -1,    -1,
      99,    33,   204,   205,   147,    -1,    -1,   145,   206,   146,
      -1,   168,    -1,   206,   168,    -1,    -1,   101,   208,   145,
     209,   146,    -1,   210,    -1,   209,   210,    -1,    33,    -1,
     102,   212,    -1,    33,    -1,   141,   213,   142,    -1,   214,
      -1,   213,   143,   214,    -1,   127,   144,   348,    -1,    -1,
     100,   216,   145,   217,   146,    -1,   218,    -1,   217,   218,
      -1,    33,    -1,    -1,    31,   141,   220,   222,   142,    -1,
      33,    -1,   148,    33,    -1,   221,    90,    33,    -1,   221,
      90,   148,    33,    -1,   221,    -1,   303,   149,   303,    -1,
      32,    -1,   103,   225,    -1,    -1,    35,    -1,   141,   226,
     142,    -1,   227,    -1,   226,   143,   227,    -1,   134,   144,
      35,    -1,   126,   144,    35,    -1,   132,   144,    35,    -1,
     133,   144,    35,    -1,   117,   229,    -1,   255,    -1,   141,
     230,   142,    -1,   231,    -1,   230,   143,   231,    -1,   127,
     144,   255,    -1,   118,   233,    -1,   255,    -1,   141,   234,
     142,    -1,   235,    -1,   234,   143,   235,    -1,   127,   144,
     255,    -1,   120,   237,    -1,   315,    -1,   141,   238,   142,
      -1,   239,    -1,   238,   143,   239,    -1,   127,   144,   315,
      -1,    56,   241,   244,    -1,   255,    -1,   141,   242,   142,
      -1,   243,    -1,   242,   143,   243,    -1,   127,   144,   255,
      -1,    -1,   145,   245,   146,   147,    -1,   246,    -1,   245,
     246,    -1,   219,    -1,   223,    -1,   289,    -1,    55,   248,
     252,    -1,    -1,   255,   249,    -1,   141,   250,   142,    -1,
     251,    -1,   250,   143,   251,    -1,   124,   144,    35,    -1,
     125,   144,    35,    -1,   127,   144,   255,    -1,   135,   144,
     318,    -1,   136,   144,   318,    -1,   137,   144,   318,    -1,
     138,   144,   318,    -1,   139,   144,    33,    -1,    -1,   145,
     253,   146,   147,    -1,   254,    -1,   253,   254,    -1,   219,
      -1,   223,    -1,   285,    -1,   289,    -1,    33,    -1,    34,
      -1,    50,   257,    -1,    34,    -1,   141,   258,   142,    -1,
     259,    -1,   258,   143,   259,    -1,   127,   144,    34,    -1,
     128,   144,   318,    -1,    51,   261,    -1,    34,    -1,   141,
     262,   142,    -1,   263,    -1,   262,   143,   263,    -1,   127,
     144,    34,    -1,    28,   298,    -1,    52,   298,    -1,    53,
     298,    -1,    54,   298,    -1,    37,   298,    -1,    38,   298,
      -1,    39,   298,    -1,    40,   298,    -1,    45,   298,    -1,
      41,   298,    -1,    23,   298,    -1,    26,   298,    -1,    27,
     298,    -1,    20,   298,    -1,    21,   298,    -1,    22,   298,
      -1,    24,   298,    -1,    25,   298,    -1,    13,   298,    -1,
      14,   298,    -1,    14,   298,    -1,     7,   286,    -1,   141,
     287,   142,    -1,   288,    -1,   287,   143,   288,    -1,   130,
     144,    35,    -1,    15,   290,   298,    -1,    -1,    35,    -1,
     141,   291,   142,    -1,   292,    -1,   291,   143,   292,    -1,
     121,   144,    35,    -1,   132,   144,    35,    -1,    -1,   289,
      -1,    16,   295,   298,    -1,    33,    -1,   141,   296,   142,
      -1,   297,    -1,   296,   143,   297,    -1,   123,   144,    33,
      -1,   129,   144,    96,    -1,   299,    32,    -1,    30,    -1,
     299,    30,    -1,    -1,    86,   302,   303,   365,   301,   145,
     304,   146,   147,    -1,    -1,    57,    -1,    58,    -1,    59,
      -1,    -1,    33,    -1,    -1,   305,    -1,   306,    -1,   305,
     306,    -1,   219,    -1,   223,    -1,    33,   308,   365,   307,
      -1,    -1,   143,    -1,    -1,   144,   313,    -1,    -1,   144,
     310,    -1,   313,    -1,   310,   311,   313,    -1,   149,    -1,
     150,    -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,
      -1,   148,    -1,   155,    -1,   149,    -1,   150,    -1,   151,
      -1,   153,    -1,   314,   312,   319,    -1,    -1,   141,   315,
     142,    -1,    89,   316,    -1,   316,    -1,   317,    -1,   316,
      89,   317,    -1,    33,    -1,   105,    -1,   106,    -1,   315,
      -1,   392,   141,   320,   142,    -1,   145,   146,    -1,    97,
      -1,    96,    -1,   318,    -1,   107,    -1,    35,    -1,   104,
      -1,    -1,   310,    -1,   320,   143,   310,    -1,    98,   388,
      33,   365,   147,   293,    -1,    98,   388,   141,   151,    33,
     142,   141,   393,   142,   365,   147,   293,    -1,    -1,    -1,
      59,   315,   323,   365,   324,   338,   147,    -1,    -1,    -1,
      58,   315,   326,   334,   365,   327,   338,   147,    -1,    -1,
     330,   329,   331,    -1,   114,   156,   393,   157,    -1,    -1,
      -1,    57,   315,   332,   334,   365,   333,   338,   147,    -1,
      -1,   158,   335,    -1,   336,    -1,   335,   143,   336,    -1,
     337,   315,    -1,    -1,    60,    -1,    61,    -1,    62,    -1,
      -1,   145,   339,   146,    -1,    -1,   340,    -1,   339,   340,
      -1,   219,    -1,   223,    -1,   203,    -1,   322,    -1,   325,
      -1,   331,    -1,   328,    -1,   189,    -1,   321,    -1,   300,
      -1,   341,    -1,   289,    -1,   276,    -1,   267,    -1,   268,
      -1,   269,    -1,   270,    -1,   271,    -1,     3,   298,    -1,
       4,   298,    -1,     5,   298,    -1,     6,   298,    -1,   272,
      -1,   273,    -1,   274,    -1,   284,    -1,   353,    -1,   350,
      -1,   376,    -1,    49,   298,    -1,    47,   298,    -1,    46,
     298,    -1,    60,   349,   158,    -1,    61,   349,   158,    -1,
      62,   349,   158,    -1,    63,   158,    -1,   119,   342,   345,
      -1,   141,   343,   142,    -1,   344,    -1,   343,   143,   344,
      -1,   122,   144,    33,    -1,   127,   144,   348,    -1,   131,
     144,    33,    -1,    -1,   145,   346,   146,   147,    -1,   347,
      -1,   346,   347,    -1,   219,    -1,   223,    -1,   289,    -1,
      33,    -1,    35,    -1,    -1,    65,    -1,    -1,    85,   351,
     352,    -1,   352,    -1,   155,    33,   141,   142,   394,   364,
     365,   147,   371,   370,   372,    -1,    -1,   113,   354,   355,
      -1,   355,    -1,    33,   141,   373,   142,   394,   365,   356,
     147,   293,   371,   370,    -1,    -1,    -1,   159,   357,   141,
     373,   142,   160,    -1,    -1,    -1,   159,   359,   388,   141,
     373,   142,   160,    -1,   388,    33,   141,   373,   142,   362,
     363,   394,   364,   365,   358,   147,   293,   371,   370,   372,
     369,    -1,   388,   108,   144,   141,   388,   142,   147,    -1,
     388,   108,   361,   141,   373,   142,   362,   363,   394,   364,
     365,   358,   147,   371,   370,   372,   369,    -1,   108,   388,
     141,   373,   142,   362,   363,   394,   364,   365,   358,   147,
     371,   370,   372,   369,    -1,   150,    -1,   149,    -1,   151,
      -1,   152,    -1,   161,    -1,   153,    -1,   154,    -1,   162,
      -1,   156,   156,    -1,   157,   157,    -1,   150,   144,    -1,
     149,   144,    -1,   151,   144,    -1,   152,   144,    -1,   161,
     144,    -1,   153,   144,    -1,   154,   144,    -1,   162,   144,
      -1,   156,   156,   144,    -1,   157,   157,   144,    -1,   155,
      -1,   141,   142,    -1,   159,   160,    -1,   156,    -1,   156,
     144,    -1,   144,   144,    -1,   148,   144,    -1,   157,    -1,
     157,   144,    -1,    -1,    91,    -1,    -1,   115,    -1,    -1,
     144,    96,    -1,    -1,   152,   366,   152,    -1,   367,    -1,
     366,   143,   367,    -1,    33,    -1,    33,   144,   368,    -1,
     255,    -1,    35,    -1,    96,    -1,    -1,    42,   298,    -1,
      -1,    43,   298,    -1,    -1,    44,   298,    -1,    -1,    36,
     298,    -1,   374,    -1,    -1,   375,    -1,   374,   143,   375,
      -1,   389,   309,    -1,    -1,    64,   377,   379,    -1,    -1,
      66,   378,   379,    -1,   379,    -1,    -1,    92,   380,   381,
      -1,   381,    -1,   382,    -1,   384,    -1,    -1,    85,   383,
     360,    -1,   360,    -1,   388,    33,   365,   385,   147,    -1,
      -1,   145,   386,   146,    -1,   387,    -1,   386,   387,    -1,
     219,    -1,   223,    -1,    17,   298,    -1,    18,   298,    -1,
      19,   298,    -1,    91,   392,   391,   390,    -1,   392,   391,
     390,    -1,   388,   303,   365,    -1,    -1,   153,    -1,    -1,
     391,   151,    91,    -1,   391,   151,    -1,   315,    -1,   315,
     156,   393,   157,    -1,    58,   315,    -1,    59,   315,    -1,
      88,    68,    -1,    68,    -1,    88,    -1,    88,    69,    -1,
      69,    -1,    70,    -1,    88,    70,    -1,    70,    70,    -1,
      88,    70,    70,    -1,    71,    -1,    72,    -1,    67,    -1,
      87,    73,    -1,    88,    73,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,
      80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,
      93,    -1,    94,    -1,    95,    -1,   116,    -1,   388,    -1,
     393,   143,   388,    -1,    -1,   110,    -1,   109,   141,   395,
     142,    -1,    -1,   315,    -1,   395,   143,   315,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   548,   548,   549,   552,   552,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   628,
     634,   639,   644,   645,   655,   662,   668,   673,   678,   679,
     689,   696,   705,   710,   715,   716,   726,   733,   744,   749,
     754,   755,   765,   772,   801,   806,   811,   812,   822,   829,
     876,   880,   987,   992,   993,  1004,  1007,  1010,  1024,  1040,
    1045,  1045,  1067,  1067,  1134,  1156,  1157,  1160,  1161,  1162,
    1166,  1170,  1179,  1188,  1197,  1206,  1207,  1210,  1225,  1225,
    1262,  1263,  1266,  1267,  1270,  1270,  1299,  1300,  1303,  1309,
    1315,  1320,  1325,  1326,  1336,  1343,  1343,  1369,  1370,  1373,
    1379,  1379,  1398,  1401,  1404,  1407,  1412,  1413,  1418,  1426,
    1442,  1450,  1456,  1461,  1462,  1475,  1483,  1491,  1499,  1509,
    1520,  1525,  1530,  1531,  1541,  1548,  1559,  1564,  1569,  1570,
    1580,  1587,  1599,  1604,  1609,  1610,  1620,  1627,  1645,  1650,
    1655,  1656,  1666,  1673,  1677,  1682,  1683,  1693,  1696,  1699,
    1713,  1726,  1726,  1736,  1741,  1742,  1759,  1771,  1789,  1801,
    1813,  1825,  1837,  1849,  1863,  1867,  1872,  1873,  1883,  1886,
    1889,  1892,  1906,  1907,  1923,  1932,  1938,  1943,  1944,  1955,
    1961,  1969,  1975,  1980,  1985,  1986,  1996,  2003,  2009,  2015,
    2021,  2026,  2031,  2036,  2041,  2046,  2051,  2056,  2061,  2067,
    2072,  2078,  2084,  2090,  2096,  2102,  2108,  2114,  2119,  2125,
    2130,  2131,  2141,  2148,  2232,  2236,  2242,  2247,  2248,  2259,
    2265,  2273,  2276,  2279,  2288,  2294,  2299,  2300,  2311,  2317,
    2328,  2331,  2332,  2342,  2342,  2367,  2370,  2373,  2376,  2381,
    2384,  2389,  2390,  2393,  2394,  2397,  2398,  2399,  2443,  2444,
    2447,  2448,  2451,  2454,  2459,  2460,  2478,  2481,  2484,  2487,
    2490,  2493,  2498,  2501,  2504,  2507,  2510,  2513,  2516,  2521,
    2536,  2539,  2544,  2550,  2553,  2554,  2562,  2567,  2570,  2575,
    2584,  2594,  2597,  2601,  2605,  2609,  2613,  2617,  2623,  2628,
    2634,  2652,  2673,  2711,  2714,  2711,  2752,  2758,  2752,  2801,
    2801,  2827,  2832,  2838,  2832,  2877,  2878,  2881,  2882,  2885,
    2937,  2940,  2943,  2946,  2951,  2954,  2959,  2960,  2961,  2964,
    2965,  2966,  2967,  2968,  2969,  2970,  2971,  2972,  2973,  2974,
    2975,  2986,  2990,  2994,  3005,  3016,  3027,  3043,  3044,  3045,
    3046,  3048,  3059,  3070,  3081,  3092,  3093,  3094,  3095,  3106,
    3117,  3128,  3135,  3142,  3149,  3158,  3171,  3176,  3177,  3189,
    3196,  3203,  3212,  3216,  3221,  3222,  3232,  3235,  3238,  3252,
    3253,  3256,  3259,  3265,  3265,  3266,  3269,  3337,  3337,  3338,
    3341,  3386,  3389,  3389,  3400,  3403,  3403,  3415,  3433,  3453,
    3497,  3575,  3576,  3577,  3578,  3579,  3580,  3581,  3582,  3583,
    3584,  3585,  3586,  3587,  3588,  3589,  3590,  3591,  3592,  3593,
    3594,  3595,  3596,  3597,  3598,  3599,  3600,  3601,  3602,  3603,
    3606,  3609,  3614,  3617,  3622,  3625,  3633,  3636,  3642,  3646,
    3658,  3662,  3668,  3672,  3676,  3682,  3685,  3690,  3693,  3698,
    3701,  3706,  3709,  3714,  3737,  3742,  3748,  3771,  3778,  3778,
    3779,  3779,  3780,  3784,  3784,  3785,  3789,  3790,  3794,  3794,
    3795,  3798,  3822,  3828,  3833,  3834,  3846,  3849,  3852,  3867,
    3882,  3899,  3904,  3918,  4026,  4029,  4037,  4040,  4043,  4048,
    4056,  4067,  4082,  4097,  4101,  4105,  4109,  4113,  4117,  4121,
    4125,  4129,  4133,  4137,  4141,  4145,  4149,  4153,  4157,  4161,
    4165,  4169,  4173,  4177,  4181,  4185,  4189,  4193,  4197,  4204,
    4208,  4212,  4216,  4222,  4228,  4244,  4247,  4252,  4260,  4266,
    4273
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_READBUFFERCODE",
  "TK_WRITEBUFFERCODE", "TK_SEGCOUNTCODE", "TK_CHARBUFFERCODE",
  "TK_AUTOPYNAME", "TK_DEFDOCSTRFMT", "TK_DEFDOCSTRSIG", "TK_DEFENCODING",
  "TK_PLUGIN", "TK_VIRTERRORHANDLER", "TK_EXPTYPEHINTCODE",
  "TK_TYPEHINTCODE", "TK_DOCSTRING", "TK_EXTRACT", "TK_ACCESSCODE",
  "TK_GETCODE", "TK_SETCODE", "TK_PREINITCODE", "TK_INITCODE",
  "TK_POSTINITCODE", "TK_FINALCODE", "TK_UNITCODE",
  "TK_UNITPOSTINCLUDECODE", "TK_MODCODE", "TK_TYPECODE", "TK_COPYING",
  "TK_MAPPEDTYPE", "TK_CODELINE", "TK_IF", "TK_END", "TK_NAME_VALUE",
  "TK_PATH_VALUE", "TK_STRING_VALUE", "TK_VIRTUALCATCHERCODE",
  "TK_TRAVERSECODE", "TK_CLEARCODE", "TK_GETBUFFERCODE",
  "TK_RELEASEBUFFERCODE", "TK_PICKLECODE", "TK_VIRTUALCALLCODE",
  "TK_METHODCODE", "TK_PREMETHODCODE", "TK_INSTANCECODE", "TK_FROMTYPE",
  "TK_TOTYPE", "TK_RELEASE", "TK_TOSUBCLASS", "TK_INCLUDE", "TK_IMPORT",
  "TK_EXPHEADERCODE", "TK_MODHEADERCODE", "TK_TYPEHEADERCODE", "TK_MODULE",
  "TK_COMPOMODULE", "TK_CLASS", "TK_STRUCT", "TK_UNION", "TK_PUBLIC",
  "TK_PROTECTED", "TK_PRIVATE", "TK_SIGNALS", "TK_SIGNAL_METHOD",
  "TK_SLOTS", "TK_SLOT_METHOD", "TK_BOOL", "TK_SHORT", "TK_INT", "TK_LONG",
  "TK_FLOAT", "TK_DOUBLE", "TK_CHAR", "TK_WCHAR_T", "TK_VOID",
  "TK_PYOBJECT", "TK_PYTUPLE", "TK_PYLIST", "TK_PYDICT", "TK_PYCALLABLE",
  "TK_PYSLICE", "TK_PYTYPE", "TK_PYBUFFER", "TK_PYENUM", "TK_VIRTUAL",
  "TK_ENUM", "TK_SIGNED", "TK_UNSIGNED", "TK_SCOPE", "TK_LOGICAL_OR",
  "TK_CONST", "TK_STATIC", "TK_PYHASHT", "TK_PYSSIZET", "TK_SIZET",
  "TK_NUMBER_VALUE", "TK_REAL_VALUE", "TK_TYPEDEF", "TK_NAMESPACE",
  "TK_TIMELINE", "TK_PLATFORMS", "TK_FEATURE", "TK_LICENSE",
  "TK_QCHAR_VALUE", "TK_TRUE_VALUE", "TK_FALSE_VALUE", "TK_NULL_VALUE",
  "TK_OPERATOR", "TK_THROW", "TK_NOEXCEPT", "TK_EXCEPTION", "TK_RAISECODE",
  "TK_EXPLICIT", "TK_TEMPLATE", "TK_FINAL", "TK_ELLIPSIS",
  "TK_DEFMETATYPE", "TK_DEFSUPERTYPE", "TK_PROPERTY", "TK_HIDE_NS",
  "TK_FORMAT", "TK_GET", "TK_ID", "TK_KWARGS", "TK_LANGUAGE",
  "TK_LICENSEE", "TK_NAME", "TK_OPTIONAL", "TK_ORDER", "TK_REMOVELEADING",
  "TK_SET", "TK_SIGNATURE", "TK_TIMESTAMP", "TK_TYPE", "TK_USEARGNAMES",
  "TK_USELIMITEDAPI", "TK_ALLRAISEPYEXC", "TK_CALLSUPERINIT",
  "TK_DEFERRORHANDLER", "TK_VERSION", "'('", "')'", "','", "'='", "'{'",
  "'}'", "';'", "'!'", "'-'", "'+'", "'*'", "'/'", "'&'", "'|'", "'~'",
  "'<'", "'>'", "':'", "'['", "']'", "'%'", "'^'", "$accept",
  "specification", "statement", "@1", "modstatement", "nsstatement",
  "defdocstringfmt", "defdocstringfmt_args", "defdocstringfmt_arg_list",
  "defdocstringfmt_arg", "defdocstringsig", "defdocstringsig_args",
  "defdocstringsig_arg_list", "defdocstringsig_arg", "defencoding",
  "defencoding_args", "defencoding_arg_list", "defencoding_arg", "plugin",
  "plugin_args", "plugin_arg_list", "plugin_arg", "virterrorhandler",
  "veh_args", "veh_arg_list", "veh_arg", "exception", "baseexception",
  "exception_body", "exception_body_directives",
  "exception_body_directive", "raisecode", "mappedtype", "@2",
  "mappedtypetmpl", "@3", "mtdefinition", "mtbody", "mtline", "mtfunction",
  "namespace", "@4", "optnsbody", "nsbody", "platforms", "@5",
  "platformlist", "platform", "feature", "feature_args",
  "feature_arg_list", "feature_arg", "timeline", "@6", "qualifierlist",
  "qualifiername", "ifstart", "@7", "oredqualifiers", "qualifiers",
  "ifend", "license", "license_args", "license_arg_list", "license_arg",
  "defmetatype", "defmetatype_args", "defmetatype_arg_list",
  "defmetatype_arg", "defsupertype", "defsupertype_args",
  "defsupertype_arg_list", "defsupertype_arg", "hiddenns", "hiddenns_args",
  "hiddenns_arg_list", "hiddenns_arg", "compmodule", "compmodule_args",
  "compmodule_arg_list", "compmodule_arg", "compmodule_body",
  "compmodule_body_directives", "compmodule_body_directive", "module",
  "module_args", "@8", "module_arg_list", "module_arg", "module_body",
  "module_body_directives", "module_body_directive", "dottedname",
  "include", "include_args", "include_arg_list", "include_arg", "import",
  "import_args", "import_arg_list", "import_arg", "copying", "exphdrcode",
  "modhdrcode", "typehdrcode", "travcode", "clearcode", "getbufcode",
  "releasebufcode", "instancecode", "picklecode", "finalcode", "modcode",
  "typecode", "preinitcode", "initcode", "postinitcode", "unitcode",
  "unitpostinccode", "exptypehintcode", "modtypehintcode",
  "classtypehintcode", "autopyname", "autopyname_args",
  "autopyname_arg_list", "autopyname_arg", "docstring", "docstring_args",
  "docstring_arg_list", "docstring_arg", "optdocstring", "extract",
  "extract_args", "extract_arg_list", "extract_arg", "codeblock",
  "codelines", "enum", "@9", "optenumkey", "optname", "optenumbody",
  "enumbody", "enumline", "optcomma", "optenumassign", "optassign", "expr",
  "binop", "optunop", "value", "optcast", "scopedname", "scopednamehead",
  "scopepart", "bool_value", "simplevalue", "exprlist", "typedef", "union",
  "@10", "@11", "struct", "@12", "@13", "classtmpl", "@14", "template",
  "class", "@15", "@16", "superclasses", "superlist", "superclass",
  "class_access", "optclassbody", "classbody", "classline", "property",
  "property_args", "property_arg_list", "property_arg", "property_body",
  "property_body_directives", "property_body_directive", "name_or_string",
  "optslot", "dtor", "@17", "dtor_decl", "ctor", "@18", "simplector",
  "optctorsig", "@19", "optsig", "@20", "function", "operatorname",
  "optconst", "optfinal", "optabstract", "optflags", "flaglist", "flag",
  "flagvalue", "virtualcallcode", "methodcode", "premethodcode",
  "virtualcatchercode", "arglist", "rawarglist", "argvalue", "varmember",
  "@21", "@22", "simple_varmem", "@23", "varmem", "member", "@24",
  "variable", "variable_body", "variable_body_directives",
  "variable_body_directive", "cpptype", "argtype", "optref", "deref",
  "basetype", "cpptypelist", "optexceptions", "exceptionlist", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,    40,    41,    44,    61,   123,   125,    59,    33,    45,
      43,    42,    47,    38,   124,   126,    60,    62,    58,    91,
      93,    37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   164,   166,   165,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   169,
     170,   170,   171,   171,   172,   173,   174,   174,   175,   175,
     176,   177,   178,   178,   179,   179,   180,   181,   182,   182,
     183,   183,   184,   185,   186,   186,   187,   187,   188,   189,
     190,   190,   191,   192,   192,   193,   193,   193,   193,   194,
     196,   195,   198,   197,   199,   200,   200,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   202,   204,   203,
     205,   205,   206,   206,   208,   207,   209,   209,   210,   211,
     212,   212,   213,   213,   214,   216,   215,   217,   217,   218,
     220,   219,   221,   221,   221,   221,   222,   222,   223,   224,
     225,   225,   225,   226,   226,   227,   227,   227,   227,   228,
     229,   229,   230,   230,   231,   232,   233,   233,   234,   234,
     235,   236,   237,   237,   238,   238,   239,   240,   241,   241,
     242,   242,   243,   244,   244,   245,   245,   246,   246,   246,
     247,   249,   248,   248,   250,   250,   251,   251,   251,   251,
     251,   251,   251,   251,   252,   252,   253,   253,   254,   254,
     254,   254,   255,   255,   256,   257,   257,   258,   258,   259,
     259,   260,   261,   261,   262,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   287,   288,   289,   290,   290,   290,   291,   291,   292,
     292,   293,   293,   294,   295,   295,   296,   296,   297,   297,
     298,   299,   299,   301,   300,   302,   302,   302,   302,   303,
     303,   304,   304,   305,   305,   306,   306,   306,   307,   307,
     308,   308,   309,   309,   310,   310,   311,   311,   311,   311,
     311,   311,   312,   312,   312,   312,   312,   312,   312,   313,
     314,   314,   315,   315,   316,   316,   317,   318,   318,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   320,   320,
     320,   321,   321,   323,   324,   322,   326,   327,   325,   329,
     328,   330,   332,   333,   331,   334,   334,   335,   335,   336,
     337,   337,   337,   337,   338,   338,   339,   339,   339,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   341,   342,   343,   343,   344,
     344,   344,   345,   345,   346,   346,   347,   347,   347,   348,
     348,   349,   349,   351,   350,   350,   352,   354,   353,   353,
     355,   356,   357,   356,   358,   359,   358,   360,   360,   360,
     360,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     362,   362,   363,   363,   364,   364,   365,   365,   366,   366,
     367,   367,   368,   368,   368,   369,   369,   370,   370,   371,
     371,   372,   372,   373,   374,   374,   374,   375,   377,   376,
     378,   376,   376,   380,   379,   379,   381,   381,   383,   382,
     382,   384,   385,   385,   386,   386,   387,   387,   387,   387,
     387,   388,   388,   389,   390,   390,   391,   391,   391,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   393,   393,   394,   394,   394,   395,   395,
     395
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     1,     3,     3,     2,     1,     3,     1,     3,
       3,     2,     1,     3,     1,     3,     3,     2,     1,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     3,     5,
       0,     3,     4,     1,     2,     1,     1,     1,     1,     2,
       0,     5,     0,     6,     4,     1,     2,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,    14,     0,     5,
       0,     3,     1,     2,     0,     5,     1,     2,     1,     2,
       1,     3,     1,     3,     3,     0,     5,     1,     2,     1,
       0,     5,     1,     2,     3,     4,     1,     3,     1,     2,
       0,     1,     3,     1,     3,     3,     3,     3,     3,     2,
       1,     3,     1,     3,     3,     2,     1,     3,     1,     3,
       3,     2,     1,     3,     1,     3,     3,     3,     1,     3,
       1,     3,     3,     0,     4,     1,     2,     1,     1,     1,
       3,     0,     2,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     4,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     1,     3,     3,
       3,     2,     1,     3,     1,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       1,     3,     3,     3,     0,     1,     3,     1,     3,     3,
       3,     0,     1,     3,     1,     3,     1,     3,     3,     3,
       2,     1,     2,     0,     9,     0,     1,     1,     1,     0,
       1,     0,     1,     1,     2,     1,     1,     4,     0,     1,
       0,     2,     0,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     3,
       0,     3,     2,     1,     1,     3,     1,     1,     1,     1,
       4,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       3,     6,    12,     0,     0,     7,     0,     0,     8,     0,
       3,     4,     0,     0,     8,     0,     2,     1,     3,     2,
       0,     1,     1,     1,     0,     3,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     3,     3,     3,     2,     3,     3,     1,     3,     3,
       3,     3,     0,     4,     1,     2,     1,     1,     1,     1,
       1,     0,     1,     0,     3,     1,    11,     0,     3,     1,
      11,     0,     0,     6,     0,     0,     7,    17,     7,    17,
      16,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     1,     2,     2,     1,     2,     2,     2,     1,     2,
       0,     1,     0,     1,     0,     2,     0,     3,     1,     3,
       1,     3,     1,     1,     1,     0,     2,     0,     2,     0,
       2,     0,     2,     1,     0,     1,     3,     2,     0,     3,
       0,     3,     1,     0,     3,     1,     1,     1,     0,     3,
       1,     5,     0,     3,     1,     2,     1,     1,     2,     2,
       2,     4,     3,     3,     0,     1,     0,     3,     2,     1,
       4,     2,     2,     2,     1,     1,     2,     1,     1,     2,
       2,     3,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     4,     0,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   306,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   524,   514,   517,   518,   522,
     523,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   265,     0,   515,     0,     0,   539,   540,
     541,     0,     0,   125,   114,     0,   140,     0,     0,     0,
     542,     0,     0,     0,     5,    36,     9,    10,    11,     6,
      34,    43,    23,    35,    39,    27,    17,    30,    37,    38,
      22,    12,    13,    18,     7,    24,    20,    19,     8,    14,
      26,    48,    25,    28,    21,    29,    32,    33,    15,    31,
      16,    45,   509,   303,   304,    44,    40,    42,   329,    41,
      46,    47,     0,   506,    50,     0,    49,    56,     0,    55,
      62,     0,    61,    68,     0,    67,    74,     0,     0,   261,
     235,     0,   236,   254,     0,     0,   230,   231,   232,   233,
     234,   228,   217,     0,   456,   130,   205,     0,   204,   212,
       0,   211,   218,   219,   220,   202,   203,     0,   194,   181,
       0,   173,   168,   332,   326,   512,   520,   266,   267,   268,
     269,   525,   513,   516,   519,   526,   302,   506,     0,   108,
       0,     0,   120,     0,   119,   141,     0,   139,     0,    80,
       0,     0,   149,   150,     0,   155,   156,     0,   161,   162,
       0,     0,     0,     0,   456,     0,   504,     0,     0,    52,
       0,     0,    58,     0,     0,    64,     0,     0,    70,     0,
       0,    76,    73,   262,   260,     0,     0,     0,   256,   253,
     511,     0,    90,   269,     0,     0,     0,   207,     0,     0,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,     0,   180,   182,     0,     0,   170,     0,   167,   335,
     335,   270,   456,   521,   504,   456,     0,   110,     0,     0,
       0,     0,   122,     0,     0,     0,     0,     0,   143,   474,
       0,   456,   543,     0,     0,     0,   152,     0,     0,   158,
       0,     0,   164,     0,   305,   456,   330,   474,   492,     0,
       0,     0,   422,   421,   423,   424,   426,   427,   441,   444,
     448,     0,   425,   428,     0,   508,   505,   502,     0,    51,
       0,     0,    57,     0,     0,    63,     0,     0,    69,     0,
       0,    75,     0,     0,     0,   255,     0,   460,     0,   458,
       0,   132,     0,   136,     0,     0,     0,     0,   206,     0,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,   244,   198,   199,     0,   196,   200,
     201,     0,   169,     0,   177,   178,     0,   175,   179,   340,
     456,   456,   263,   501,     0,     0,     0,     0,   129,     0,
     127,   118,     0,   116,     0,   121,     0,     0,     0,     0,
       0,   142,     0,     0,   473,   475,   269,   282,     0,     0,
       0,   331,     0,   151,     0,     0,   157,     0,     0,   163,
       0,   510,    92,     0,     0,     0,   442,     0,   446,   447,
     432,   431,   433,   434,   436,   437,   445,   429,   449,   430,
     443,   435,   438,   474,   507,    54,    53,    60,    59,    66,
      65,    72,    71,    78,    77,   258,   259,   257,     0,     0,
     457,     0,    91,   133,     0,   131,   269,   209,   307,   308,
     210,   208,   216,   215,   186,   187,   188,   189,   190,   191,
     192,   193,   185,     0,   238,   245,     0,     0,     0,   197,
     172,   171,     0,   176,   341,   342,   343,   336,   337,     0,
     333,   327,     0,   251,     0,   112,     0,   329,   109,   126,
     128,   115,   117,   399,   400,   124,   123,   146,   147,   148,
     145,   144,   450,     0,   456,   300,   477,    81,     0,    79,
     544,   154,   153,   160,   159,   166,   165,     0,   450,     0,
       0,     0,   496,   497,     0,   494,   491,     0,   439,   440,
       0,   463,   464,   462,   461,   459,     0,     0,     0,     0,
       0,     0,     0,    95,   106,    97,    98,    99,   104,   100,
     105,   134,     0,   137,     0,     0,   240,     0,     0,     0,
     247,   243,   195,   174,   340,   339,   344,   344,   271,   252,
     321,     0,   111,   113,   451,   452,   476,   503,     0,   283,
     284,   292,     0,     0,    83,    87,    85,    86,    88,    93,
     452,   498,   499,   500,   493,   495,     0,   450,   229,   225,
     101,   102,   103,     0,     0,    96,   135,     0,   239,     0,
       0,     0,   246,     0,   338,   346,     0,     0,   280,   275,
     276,     0,   272,   273,     0,   453,   545,     0,   286,   287,
     288,   289,   290,   291,   300,   293,   295,   296,   297,   298,
     294,     0,    89,     0,    84,   545,   418,   452,     0,    94,
     242,   241,   249,   250,   248,     0,     0,     0,     0,     0,
       0,   306,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,   401,   401,     0,   478,   480,   488,   483,   407,
       0,     0,   356,   351,   349,   350,   362,   363,   364,   365,
     366,   371,   372,   373,   361,   374,   360,   358,   357,   352,
     353,   355,   354,     0,   347,   359,   376,   405,   375,   409,
     490,   377,   482,   485,   486,   487,   334,   328,   300,   456,
       0,   274,     0,     0,   546,   454,   301,   285,   316,   313,
     312,   317,   315,     0,   309,   314,   299,     0,    82,   454,
     545,   474,   367,   368,   369,   370,   237,   227,   474,   221,
     222,   223,   224,   226,   380,   379,   378,   512,   402,     0,
       0,     0,   384,     0,     0,     0,     0,     0,     0,     0,
     392,     0,   345,   348,   281,   278,   264,   456,   548,     0,
     456,   311,   300,   456,   454,     0,     0,   456,   381,   382,
     383,   488,   479,   481,   404,   489,     0,   484,     0,   408,
       0,     0,     0,     0,   387,     0,   385,     0,   279,   277,
       0,   549,     0,   455,   414,   319,     0,   414,   456,   450,
     545,   324,     0,     0,     0,     0,   386,     0,   396,   397,
     398,     0,   394,   545,   251,   547,     0,   415,     0,   310,
     300,     0,   414,   545,   456,   344,   389,   390,   391,   388,
       0,   395,   454,   322,   550,     0,   469,   320,   251,     0,
     456,   411,     0,   393,   456,     0,     0,   467,   469,   469,
     414,   412,     0,   325,     0,   474,   470,     0,   471,   467,
     467,     0,     0,   251,   469,     0,   468,     0,   465,   471,
     471,   251,   474,   469,   467,     0,   472,     0,   420,   465,
     465,   469,     0,   467,   471,   416,   466,   417,   419,   467,
       0,   410,   406,   107,   413
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    74,    75,    76,   126,   218,   219,
      77,   129,   221,   222,    78,   132,   224,   225,    79,   135,
     227,   228,    80,   138,   230,   231,    81,   291,   539,   613,
     614,   615,    82,   350,    83,   547,   472,   572,   573,   574,
      84,   277,   397,   516,    85,   191,   402,   403,    86,   194,
     281,   282,    87,   190,   399,   400,    88,   243,   353,   354,
      89,    90,   197,   287,   288,    91,   202,   295,   296,    92,
     205,   298,   299,    93,   208,   301,   302,    94,   171,   265,
     266,   268,   386,   387,    95,   168,   263,   259,   260,   262,
     377,   378,   169,    96,   158,   246,   247,    97,   161,   249,
     250,    98,    99,   100,   101,   717,   718,   719,   720,   578,
     722,   723,   102,   579,   103,   104,   105,   106,   107,   108,
     109,   725,   379,   494,   585,   586,   599,   497,   589,   590,
     600,   110,   145,   237,   238,   140,   141,   111,   512,   180,
     272,   651,   652,   653,   839,   749,   536,   609,   664,   671,
     610,   611,   112,   113,   114,   480,   766,   846,   115,   729,
     817,   875,   116,   270,   597,   117,   213,   517,   119,   269,
     596,   390,   507,   508,   509,   646,   733,   734,   735,   800,
     833,   834,   836,   861,   862,   525,   789,   736,   795,   737,
     738,   798,   739,   902,   912,   868,   885,   740,   324,   605,
     656,   810,   242,   348,   349,   564,   928,   908,   897,   918,
     413,   414,   415,   741,   793,   794,   742,   797,   743,   744,
     796,   745,   435,   554,   555,   122,   417,   327,   216,   123,
     293,   755,   842
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -750
static const yytype_int16 yypact[] =
{
    -750,   123,  -750,  1050,  -750,  -750,    49,    73,    75,    52,
      57,    97,    97,    65,    97,    97,    97,    97,    97,    97,
      97,  1469,    12,  -750,  -750,    14,    39,    97,    97,    97,
      47,    54,    87,    87,    87,  -750,  -750,  -750,    78,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   295,    99,   273,   166,  1469,  -750,  -750,
    -750,  1417,   188,  -750,  -750,    67,    76,  1417,    87,   148,
    -750,    59,    62,     8,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,   154,   142,  -750,  -750,  -750,  -750,   214,  -750,
    -750,  -750,    42,  -750,  -750,   185,  -750,  -750,   193,  -750,
    -750,   195,  -750,  -750,   197,  -750,  -750,   220,    97,  -750,
    -750,   164,  -750,  -750,   180,    97,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,    87,   162,  -750,  -750,   199,  -750,  -750,
     223,  -750,  -750,  -750,  -750,  -750,  -750,   149,   231,  -750,
     238,   242,  -750,  -750,     7,  -750,  -750,  -750,  -750,  -750,
     356,  -750,  -750,  -750,   323,  -750,   142,  -750,    74,  -750,
     252,   264,  -750,   287,  -750,  -750,   138,  -750,   275,   280,
    1417,   301,  -750,  -750,   303,  -750,  -750,   316,  -750,  -750,
    1417,   166,  1469,   366,   116,   283,   139,   315,   -64,  -750,
     318,   187,  -750,   319,   190,  -750,   320,   202,  -750,   321,
     225,  -750,  -750,  -750,  -750,   322,   325,   227,  -750,  -750,
    -750,   419,  -750,    18,   327,   328,   230,  -750,   329,   235,
    -750,   331,   332,   333,   334,   335,   336,   338,   339,   237,
    -750,   234,  -750,  -750,   343,   239,  -750,   114,  -750,   302,
     302,  -750,   162,  -750,   139,   162,   317,   344,   434,   455,
     346,   241,  -750,   348,   349,   350,   351,   243,  -750,  1417,
      87,   162,  -750,   -29,   352,   249,  -750,   353,   253,  -750,
     355,   257,  -750,    93,  -750,   162,  -750,  1417,   357,   358,
      -1,   359,   360,   361,   362,   363,   364,   365,  -750,   119,
     -83,   341,   367,   368,   372,   424,  -750,  -750,   481,  -750,
     185,   482,  -750,   193,   483,  -750,   195,   486,  -750,   197,
     487,  -750,   220,   488,   427,  -750,   180,   380,    85,  -750,
     382,   376,   495,   440,   389,   383,   499,   296,  -750,   199,
     500,  -750,   223,   501,   505,   374,   296,   296,   296,   296,
     502,  -750,   149,   400,    77,  -750,  -750,    35,  -750,  -750,
    -750,   374,  -750,   238,  -750,  -750,    24,  -750,  -750,   299,
     162,   162,  -750,  -750,   395,   510,  1200,   397,  -750,    16,
    -750,  -750,    25,  -750,   267,  -750,   287,   511,   512,   513,
     514,  -750,   138,   403,   407,  -750,   356,   408,   409,   414,
    1417,  -750,   374,  -750,   301,   374,  -750,   303,    87,  -750,
     316,  -750,  -750,   411,   263,   413,  -750,  1417,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,   417,  -750,   418,
    -750,  -750,  -750,  1417,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,    83,   419,
    -750,   207,  -750,  -750,    19,  -750,   356,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   435,  -750,  -750,   157,    97,   420,  -750,
    -750,  -750,   421,  -750,  -750,  -750,  -750,   423,  -750,    87,
    -750,  -750,   425,   549,   429,  -750,   941,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,   478,  1417,   162,   431,  -750,  -750,    45,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,   382,   478,    97,
      97,    97,  -750,  -750,    51,  -750,  -750,   432,  -750,  -750,
     433,  -750,  -750,  -750,  -750,  -750,    97,    97,    97,    97,
      97,  1417,   137,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,   540,  -750,   436,   268,  -750,   437,   438,   270,
    -750,  -750,  -750,  -750,   299,  -750,   439,   439,   324,  -750,
    -750,   442,  -750,  -750,  -750,   461,  -750,  -750,    87,   186,
    -750,   168,    97,    40,  -750,  -750,  -750,  -750,  -750,  -750,
     461,  -750,  -750,  -750,  -750,  -750,   430,   478,  -750,  -750,
    -750,  -750,  -750,   545,   443,  -750,  -750,   544,  -750,   435,
     550,   551,  -750,   157,  -750,   871,   444,   445,   450,  -750,
    -750,   441,   324,  -750,  1417,  -750,   310,   447,  -750,  -750,
    -750,  -750,  -750,  -750,   431,  -750,  -750,  -750,  -750,  -750,
    -750,  1121,  -750,   448,  -750,   310,  -750,   461,   457,  -750,
    -750,  -750,  -750,  -750,  -750,    97,    97,    97,    97,    97,
      97,   458,    97,    97,    97,    97,    97,    97,    97,    97,
      87,   531,   531,   531,   446,  -750,  -750,   451,  -750,  -750,
     460,   569,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   746,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,   431,   162,
     456,  -750,   304,   466,  -750,   465,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   464,   -32,  -750,  -750,   470,  -750,   465,
     310,  1417,  -750,  -750,  -750,  -750,  -750,  -750,  1417,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,   161,  -750,   459,
     462,   468,  -750,  1259,  1259,   463,  1365,  1312,   580,   174,
     471,   474,  -750,  -750,  -750,   479,  -750,   162,    87,   527,
     162,  -750,   221,   162,   465,   490,   491,   162,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,    70,  -750,   458,  -750,
     484,   485,   492,   306,  -750,   114,  -750,   493,  -750,  -750,
     494,  -750,   308,  -750,   475,   186,   311,   475,   162,   478,
     310,  -750,   489,   604,   267,   606,  -750,   174,  -750,  -750,
    -750,    28,  -750,   310,   549,  -750,    87,  -750,   496,  -750,
     431,   497,   475,   310,   162,   439,  -750,  -750,  -750,  -750,
     498,  -750,   465,  -750,  -750,  1417,   596,   186,   549,   503,
     162,   504,   506,  -750,   162,   507,    97,   599,   596,   596,
     475,  -750,   508,  -750,   509,  1417,  -750,    97,   610,   599,
     599,   517,   516,   549,   596,   523,  -750,    97,   605,   610,
     610,   549,  1417,   596,   599,   519,  -750,    97,  -750,   605,
     605,   596,   524,   599,   610,  -750,  -750,  -750,  -750,   599,
     530,  -750,  -750,  -750,  -750
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -750,  -750,   648,  -750,  -750,  -351,  -750,  -750,  -750,   337,
    -750,  -750,  -750,   326,  -750,  -750,  -750,   369,  -750,  -750,
    -750,   312,  -750,  -750,  -750,   330,  -592,  -750,  -750,  -750,
      41,  -750,  -750,  -750,  -750,  -750,   105,  -750,    86,  -750,
    -544,  -750,  -750,  -750,  -750,  -750,  -750,   266,  -750,  -750,
    -750,   265,  -750,  -750,  -750,   271,  -247,  -750,  -750,  -750,
    -223,  -750,  -750,  -750,   279,  -750,  -750,  -750,   245,  -750,
    -750,  -750,   269,  -750,  -750,  -750,   262,  -750,  -750,  -750,
     314,  -750,  -750,   307,  -750,  -750,  -750,  -750,   340,  -750,
    -750,   342,    -7,  -750,  -750,  -750,   347,  -750,  -750,  -750,
     345,  -750,  -750,  -750,  -436,  -750,  -750,  -750,  -750,  -541,
    -750,  -750,  -750,  -532,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,    55,  -242,  -750,  -750,    56,
    -644,  -750,  -750,  -750,   354,   -12,  -750,  -435,  -750,  -750,
    -209,  -750,  -750,    43,  -750,  -750,  -750,  -749,  -750,  -750,
    -610,  -750,   -11,   642,   515,  -337,  -750,  -750,  -520,  -750,
    -750,  -750,  -514,  -750,  -750,  -511,  -750,   698,  -204,  -750,
    -750,   453,  -750,   108,  -750,  -564,  -750,   -30,  -750,  -750,
    -750,  -148,  -750,  -750,  -151,  -143,  -277,  -750,  -750,   -82,
    -750,  -750,   -84,  -750,  -750,  -725,  -750,    -2,  -750,  -521,
    -447,  -723,  -186,  -750,   246,  -750,  -474,  -677,  -672,  -674,
    -297,  -750,   183,  -750,  -750,  -750,  -336,  -750,   -80,  -750,
    -750,    10,  -750,  -750,   167,   -49,  -750,   454,   533,   -10,
    -184,  -638,  -750
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -512
static const yytype_int16 yytable[] =
{
     142,   120,   146,   147,   148,   149,   150,   151,   152,   306,
     433,   154,   188,   121,   375,   162,   163,   164,   198,   380,
     384,   173,   174,   175,   172,   388,   303,   620,   308,   487,
     488,   489,   490,   647,   355,   577,   580,   769,   376,   374,
    -511,    24,   373,   374,   385,   515,   813,   187,   156,   398,
     374,   351,   581,   712,   757,    22,    23,   199,   401,    22,
      23,   448,   209,   845,   203,   206,    22,    23,   549,   550,
     551,    22,    23,   159,   449,   214,    22,    23,   329,   330,
     165,   166,    22,    23,   124,   133,   392,   165,   166,   394,
     136,   848,   165,   166,    29,   165,   166,    56,   143,    29,
     192,   713,   618,   852,   721,   419,   677,   275,   127,  -509,
     130,   195,   495,   724,   420,  -511,   165,   166,   561,   432,
      24,   887,   871,     4,   210,   728,   232,   139,   421,   374,
     375,   730,   814,   239,   731,   380,   577,   580,   804,   384,
     437,   712,   240,   438,   388,    22,    23,   889,   176,   207,
     215,   292,   612,   155,   376,   157,   560,   612,  -511,   894,
    -511,   292,   519,   385,   566,   603,   352,   582,    22,    23,
     502,   521,   181,   675,   880,   911,    56,   618,   215,   562,
     160,   498,   567,   568,   569,   570,   673,   552,   167,   713,
     125,    29,   721,   134,   233,   170,   234,   624,   137,    24,
     201,   724,   305,   204,   510,   511,   144,   534,   193,   716,
     727,   553,   874,   728,   128,   276,   131,   196,   496,   730,
     883,   189,   731,    53,   575,   882,   909,   910,   469,   571,
     770,   211,   919,   920,   566,   890,   420,   470,    22,    23,
     416,   373,   924,   212,   898,   929,   930,   934,   576,   374,
     431,   933,   567,   568,   569,   570,   941,   307,   416,   939,
     942,    29,   943,   446,   283,    22,    23,   583,   241,   923,
     284,   285,   286,   251,   252,   447,   253,   931,   587,   418,
     549,   550,   551,   634,   254,   255,   256,   257,   258,   588,
     325,   616,   326,    53,    22,    23,   830,   716,   727,   571,
     523,   831,   524,   235,   200,   832,  -323,   552,  -323,   236,
     210,   892,   217,  -323,   241,   617,   665,   666,   667,   668,
     220,   669,   223,   670,   226,   575,   244,   245,   873,   332,
     333,   553,   335,   336,   765,   658,   659,   660,   661,   662,
     663,   182,   183,   184,   338,   339,   185,   229,   607,   576,
     248,   649,   177,   178,   179,    22,    23,   648,   486,   504,
     505,   506,   608,  -318,  -318,   264,   616,   341,   342,   345,
     346,   540,   358,   359,   500,   650,   261,   361,   362,   371,
     372,   382,   383,   405,   406,   411,   412,   267,   557,   271,
     617,   423,   424,   273,   120,   426,   427,   278,   714,   429,
     430,   478,   479,   726,   416,   649,   121,   165,   166,   279,
     638,   639,   642,   643,   280,   541,   289,   545,   543,   753,
     754,   290,   715,    32,   309,   790,   791,   310,   294,   650,
     297,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   732,   321,   300,   322,   323,   807,   420,   856,   857,
     865,   866,   347,   869,   870,   937,   938,   822,   823,   328,
     389,   563,   331,   334,   337,   340,   343,   398,   395,   344,
     752,   356,   357,   360,   815,   363,   364,   365,   366,   367,
     368,   816,   369,   370,   416,   591,   714,   381,   401,   396,
     404,   726,   407,   408,   409,   410,   422,   425,   595,   428,
     436,   450,   434,   439,   440,   441,   442,   443,   444,   445,
     715,   451,   452,   453,   120,   454,   455,   457,   459,   461,
     463,   465,   633,   466,   468,  -270,   121,   471,   473,   732,
     474,   475,   476,   477,   482,   491,   484,   621,   622,   623,
     485,   493,   513,   514,   518,   532,   527,   528,   529,   530,
     533,   537,   535,   548,   628,   629,   630,   631,   632,   538,
     556,   558,   559,   805,   374,   584,   594,   592,   593,   604,
     598,   601,   608,   636,   626,   627,   655,   676,   678,   680,
     637,   640,   641,   654,   645,   682,   683,   750,   858,   756,
     679,   746,   747,   860,   748,   768,   788,   657,   771,   778,
     672,   799,   801,   806,   792,   292,  -403,   808,   915,   809,
     811,   812,   859,   828,   858,   837,   835,   818,   711,   860,
     819,   840,   838,   843,   844,   932,   820,   847,   853,   854,
     307,   851,   849,   850,   867,   863,   855,   876,   859,   878,
     896,   864,   907,   886,   888,   893,   917,   927,   905,     5,
     899,   462,   619,   903,   674,   913,   914,   922,   635,   458,
     764,   767,   872,   901,   921,   925,   940,   456,   522,   542,
     520,   526,   464,   772,   773,   774,   775,   776,   777,   935,
     779,   780,   781,   782,   783,   784,   785,   786,   891,   787,
     944,   531,   546,   503,   681,   751,   544,   501,   186,   684,
     467,   118,   644,   803,   900,   460,   481,   483,   904,   879,
     881,   877,   492,   824,   829,   565,   606,   827,     0,   499,
     274,   625,   416,   391,     0,     0,   304,     0,   393,   416,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   826,     0,   685,
     686,   687,   688,     0,     0,     0,     0,     0,     0,     0,
     689,   374,     0,     0,     0,     0,     0,     0,     0,   690,
       0,     0,     0,   566,     0,     0,     0,    22,    23,   691,
       0,     0,     0,   692,   693,   694,   695,   696,     0,     0,
       0,   567,   697,   698,   825,   699,     0,   841,     0,     0,
      29,     0,     0,    32,    33,   700,   701,   702,   703,   704,
     705,     0,   706,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   707,    53,    54,    55,    56,   895,    57,   708,    58,
      59,    60,     0,     0,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    67,   884,   416,    68,     0,   709,
      69,     0,    70,     0,     0,   710,     0,     0,     0,     0,
       0,     0,     0,   416,   685,   686,   687,   688,     0,     0,
       0,     0,     0,     0,   906,   689,   374,     0,     0,     0,
       0,     0,   802,     0,   690,   916,     0,     0,   566,     0,
       0,   711,    22,    23,   691,   926,     0,     0,   692,   693,
     694,   695,   696,     0,     0,   936,   567,   697,   698,     0,
     699,     0,     0,     0,     0,    29,     0,     0,    32,    33,
     700,   701,   702,   703,   704,   705,     0,   706,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,   707,    53,    54,    55,
      56,     0,    57,   708,    58,    59,    60,     0,     0,    61,
      62,     0,    22,    23,    24,     0,     0,     0,     0,    67,
       0,     0,    68,     0,   709,    69,     0,    70,     0,     0,
     710,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,   711,    53,    54,    55,
      56,     0,    57,     0,    58,    59,    60,     0,     0,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,     0,    68,     0,     0,    69,     0,    70,     6,     7,
       8,     9,    10,    11,    12,     0,    13,     0,     0,     0,
      14,    15,    16,     0,    17,    18,    19,     0,    20,    21,
       0,    22,    23,    24,     0,     0,     0,   602,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,    53,    54,    55,    56,
       0,    57,     0,    58,    59,    60,     0,     0,    61,    62,
      63,    64,    65,    66,    24,     0,   758,     0,    67,     0,
       0,    68,     0,     0,    69,     0,    70,    71,    72,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,   153,
      34,     0,     0,     0,     0,     0,     0,     0,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,    54,    55,
      56,     0,     0,     0,    58,    59,    60,   759,   760,     0,
       0,     0,     0,     0,     0,   761,   478,   479,   762,     0,
       0,    22,    23,    24,     0,     0,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
       0,     0,     0,     0,     0,     0,   763,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,    53,    54,    55,    56,
       0,    57,    24,    58,    59,    60,     0,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
       0,    68,     0,     0,    69,     0,    70,   153,    34,     0,
       0,     0,     0,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,   821,    24,    54,    55,    56,     0,
      57,   708,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
     153,    34,     0,     0,     0,    70,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,   821,    24,    54,
      55,    56,     0,    57,     0,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,     0,   153,    34,     0,     0,     0,    70,     0,
       0,     0,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      24,     0,    54,    55,    56,     0,    57,     0,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,   153,    34,     0,     0,     0,
       0,    70,     0,     0,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    24,     0,    54,    55,    56,     0,    57,     0,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,    34,     0,
       0,     0,     0,    70,     0,     0,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,    54,    55,    56,     0,
       0,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
      12,     3,    14,    15,    16,    17,    18,    19,    20,   213,
     307,    21,    61,     3,   261,    27,    28,    29,    67,   261,
     267,    32,    33,    34,    31,   267,   210,   548,   214,   366,
     367,   368,   369,   597,   243,   471,   471,   675,   261,    15,
      33,    33,     7,    15,   267,   396,   769,    57,    34,    33,
      15,    33,    33,   645,   664,    31,    32,    68,    33,    31,
      32,   144,    73,   812,    71,    72,    31,    32,    17,    18,
      19,    31,    32,    34,   157,    33,    31,    32,   142,   143,
      33,    34,    31,    32,    35,    33,   272,    33,    34,   275,
      33,   814,    33,    34,    54,    33,    34,    89,    33,    54,
      33,   645,   538,    33,   645,   291,   627,    33,    35,   141,
      35,    35,    35,   645,   143,   108,    33,    34,    35,   305,
      33,   870,   847,     0,   156,   645,   138,    30,   157,    15,
     377,   645,   770,   145,   645,   377,   572,   572,   748,   386,
     141,   733,   153,   144,   386,    31,    32,   872,    70,   141,
     108,   200,   112,   141,   377,   141,   453,   112,   151,   882,
     153,   210,   146,   386,    27,   516,   148,   148,    31,    32,
     146,   146,    73,   620,   146,   900,    89,   613,   108,    96,
     141,   146,    45,    46,    47,    48,   146,   434,   141,   733,
     141,    54,   733,   141,    30,   141,    32,   146,   141,    33,
     141,   733,   212,   141,   390,   391,   141,   416,   141,   645,
     645,   434,   850,   733,   141,   141,   141,   141,   141,   733,
     864,    33,   733,    86,   471,   863,   898,   899,   143,    92,
     677,    89,   909,   910,    27,   873,   143,   152,    31,    32,
     289,     7,   914,    29,   888,   919,   920,   924,   471,    15,
     157,   923,    45,    46,    47,    48,   933,   141,   307,   931,
     934,    54,   939,   144,   126,    31,    32,   476,   152,   913,
     132,   133,   134,   124,   125,   156,   127,   921,   121,   290,
      17,    18,    19,   146,   135,   136,   137,   138,   139,   132,
     151,   538,   153,    86,    31,    32,   122,   733,   733,    92,
      33,   127,    35,   123,   156,   131,   145,   554,   147,   129,
     156,   875,   127,   152,   152,   538,   148,   149,   150,   151,
     127,   153,   127,   155,   127,   572,   127,   128,   849,   142,
     143,   554,   142,   143,   671,   149,   150,   151,   152,   153,
     154,    68,    69,    70,   142,   143,    73,   127,   534,   572,
     127,   598,    57,    58,    59,    31,    32,    33,   365,    60,
      61,    62,   141,   142,   143,   127,   613,   142,   143,   142,
     143,   420,   142,   143,   381,   598,   145,   142,   143,   142,
     143,   142,   143,   142,   143,   142,   143,   145,   437,    33,
     613,   142,   143,    70,   396,   142,   143,   145,   645,   142,
     143,   105,   106,   645,   453,   652,   396,    33,    34,   145,
     142,   143,   142,   143,   127,   422,   141,   428,   425,   109,
     110,   141,   645,    57,   141,   702,   703,   144,   127,   652,
     127,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   645,   159,   127,   161,   162,   142,   143,   142,   143,
     142,   143,    33,   142,   143,   929,   930,   793,   794,   144,
     158,   468,   144,   144,   144,   144,   144,    33,   151,   144,
     654,   144,   144,   144,   771,   144,   144,   144,   144,   144,
     144,   778,   144,   144,   533,   497,   733,   144,    33,   145,
     144,   733,   144,   144,   144,   144,   144,   144,   509,   144,
     142,   160,   145,   144,   144,   144,   144,   144,   144,   144,
     733,   144,   144,   141,   516,    91,    35,    35,    35,    33,
      33,    33,   571,    96,   144,   149,   516,   145,    33,   733,
      90,   142,   149,    34,    34,    33,    35,   549,   550,   551,
      35,   141,   147,    33,   147,   142,    35,    35,    35,    35,
     143,   142,   144,   142,   566,   567,   568,   569,   570,   145,
     147,   144,   144,   749,    15,   130,   143,   147,   147,    91,
     145,   142,   141,    33,   142,   142,   115,   147,    33,    35,
     144,   144,   144,   141,   145,    35,    35,   146,   835,   142,
     147,   147,   147,   835,   144,   147,    65,   608,   141,   141,
     612,   141,    33,   147,   158,   654,   155,   141,   905,   144,
     146,   141,   835,    33,   861,   141,   145,   158,   155,   861,
     158,   807,   143,    96,   810,   922,   158,   813,   144,   144,
     141,   817,   142,   142,   159,   142,   144,    33,   861,    33,
      44,   147,    43,   147,   147,   147,    36,    42,   141,     1,
     147,   339,   547,   147,   613,   147,   147,   141,   572,   333,
     671,   671,   848,   159,   147,   142,   142,   330,   402,   424,
     399,   406,   342,   685,   686,   687,   688,   689,   690,   160,
     692,   693,   694,   695,   696,   697,   698,   699,   874,   700,
     160,   412,   430,   386,   639,   652,   427,   383,    56,   643,
     346,     3,   594,   733,   890,   336,   359,   362,   894,   857,
     861,   854,   372,   795,   798,   469,   533,   797,    -1,   377,
     187,   554,   771,   270,    -1,    -1,   211,    -1,   274,   778,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   796,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,   796,    49,    -1,   808,    -1,    -1,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,   885,    91,    92,    93,
      94,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,   866,   905,   111,    -1,   113,
     114,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   922,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,   896,    14,    15,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    23,   907,    -1,    -1,    27,    -1,
      -1,   155,    31,    32,    33,   917,    -1,    -1,    37,    38,
      39,    40,    41,    -1,    -1,   927,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    92,    93,    94,    95,    -1,    -1,    98,
      99,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,   108,
      -1,    -1,   111,    -1,   113,   114,    -1,   116,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   155,    86,    87,    88,
      89,    -1,    91,    -1,    93,    94,    95,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,    -1,   111,    -1,    -1,   114,    -1,   116,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    87,    88,    89,
      -1,    91,    -1,    93,    94,    95,    -1,    -1,    98,    99,
     100,   101,   102,   103,    33,    -1,    35,    -1,   108,    -1,
      -1,   111,    -1,    -1,   114,    -1,   116,   117,   118,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    87,    88,
      89,    -1,    -1,    -1,    93,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,   145,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    87,    88,    89,
      -1,    91,    33,    93,    94,    95,    -1,    -1,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,   114,    -1,   116,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    33,    87,    88,    89,    -1,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,
      58,    59,    -1,    -1,    -1,   116,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    33,    87,
      88,    89,    -1,    91,    -1,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,    58,    59,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      33,    -1,    87,    88,    89,    -1,    91,    -1,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    58,    59,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    33,    -1,    87,    88,    89,    -1,    91,    -1,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    87,    88,    89,    -1,
      -1,    -1,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   164,   165,   166,     0,   165,     8,     9,    10,    11,
      12,    13,    14,    16,    20,    21,    22,    24,    25,    26,
      28,    29,    31,    32,    33,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    86,    87,    88,    89,    91,    93,    94,
      95,    98,    99,   100,   101,   102,   103,   108,   111,   114,
     116,   117,   118,   120,   167,   168,   169,   173,   177,   181,
     185,   189,   195,   197,   203,   207,   211,   215,   219,   223,
     224,   228,   232,   236,   240,   247,   256,   260,   264,   265,
     266,   267,   275,   277,   278,   279,   280,   281,   282,   283,
     294,   300,   315,   316,   317,   321,   325,   328,   330,   331,
     360,   384,   388,   392,    35,   141,   170,    35,   141,   174,
      35,   141,   178,    33,   141,   182,    33,   141,   186,    30,
     298,   299,   298,    33,   141,   295,   298,   298,   298,   298,
     298,   298,   298,    58,   392,   141,    34,   141,   257,    34,
     141,   261,   298,   298,   298,    33,    34,   141,   248,   255,
     141,   241,   255,   315,   315,   315,    70,    57,    58,    59,
     302,    73,    68,    69,    70,    73,   316,   392,   388,    33,
     216,   208,    33,   141,   212,    35,   141,   225,   388,   315,
     156,   141,   229,   255,   141,   233,   255,   141,   237,   315,
     156,    89,    29,   329,    33,   108,   391,   127,   171,   172,
     127,   175,   176,   127,   179,   180,   127,   183,   184,   127,
     187,   188,   298,    30,    32,   123,   129,   296,   297,   298,
     315,   152,   365,   220,   127,   128,   258,   259,   127,   262,
     263,   124,   125,   127,   135,   136,   137,   138,   139,   250,
     251,   145,   252,   249,   127,   242,   243,   145,   244,   332,
     326,    33,   303,    70,   391,    33,   141,   204,   145,   145,
     127,   213,   214,   126,   132,   133,   134,   226,   227,   141,
     141,   190,   388,   393,   127,   230,   231,   127,   234,   235,
     127,   238,   239,   393,   317,   392,   331,   141,   365,   141,
     144,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   159,   161,   162,   361,   151,   153,   390,   144,   142,
     143,   144,   142,   143,   144,   142,   143,   144,   142,   143,
     144,   142,   143,   144,   144,   142,   143,    33,   366,   367,
     196,    33,   148,   221,   222,   303,   144,   144,   142,   143,
     144,   142,   143,   144,   144,   144,   144,   144,   144,   144,
     144,   142,   143,     7,    15,   219,   223,   253,   254,   285,
     289,   144,   142,   143,   219,   223,   245,   246,   289,   158,
     334,   334,   365,   390,   365,   151,   145,   205,    33,   217,
     218,    33,   209,   210,   144,   142,   143,   144,   144,   144,
     144,   142,   143,   373,   374,   375,   388,   389,   315,   365,
     143,   157,   144,   142,   143,   144,   142,   143,   144,   142,
     143,   157,   365,   373,   145,   385,   142,   141,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   156,   144,   157,
     160,   144,   144,   141,    91,    35,   172,    35,   176,    35,
     180,    33,   184,    33,   188,    33,    96,   297,   144,   143,
     152,   145,   199,    33,    90,   142,   149,    34,   105,   106,
     318,   259,    34,   263,    35,    35,   255,   318,   318,   318,
     318,    33,   251,   141,   286,    35,   141,   290,   146,   254,
     255,   243,   146,   246,    60,    61,    62,   335,   336,   337,
     365,   365,   301,   147,    33,   168,   206,   330,   147,   146,
     218,   146,   210,    33,    35,   348,   214,    35,    35,    35,
      35,   227,   142,   143,   303,   144,   309,   142,   145,   191,
     388,   255,   231,   255,   235,   315,   239,   198,   142,    17,
      18,    19,   219,   223,   386,   387,   147,   388,   144,   144,
     373,    35,    96,   255,   368,   367,    27,    45,    46,    47,
      48,    92,   200,   201,   202,   219,   223,   267,   272,   276,
     300,    33,   148,   303,   130,   287,   288,   121,   132,   291,
     292,   298,   147,   147,   143,   315,   333,   327,   145,   289,
     293,   142,   146,   168,    91,   362,   375,   365,   141,   310,
     313,   314,   112,   192,   193,   194,   219,   223,   267,   199,
     362,   298,   298,   298,   146,   387,   142,   142,   298,   298,
     298,   298,   298,   388,   146,   201,    33,   144,   142,   143,
     144,   144,   142,   143,   336,   145,   338,   338,    33,   219,
     223,   304,   305,   306,   141,   115,   363,   315,   149,   150,
     151,   152,   153,   154,   311,   148,   149,   150,   151,   153,
     155,   312,   298,   146,   193,   363,   147,   362,    33,   147,
      35,   288,    35,    35,   292,     3,     4,     5,     6,    14,
      23,    33,    37,    38,    39,    40,    41,    46,    47,    49,
      59,    60,    61,    62,    63,    64,    66,    85,    92,   113,
     119,   155,   189,   203,   219,   223,   267,   268,   269,   270,
     271,   272,   273,   274,   276,   284,   289,   300,   321,   322,
     325,   328,   331,   339,   340,   341,   350,   352,   353,   355,
     360,   376,   379,   381,   382,   384,   147,   147,   144,   308,
     146,   306,   393,   109,   110,   394,   142,   313,    35,    96,
      97,   104,   107,   145,   315,   318,   319,   392,   147,   394,
     363,   141,   298,   298,   298,   298,   298,   298,   141,   298,
     298,   298,   298,   298,   298,   298,   298,   315,    65,   349,
     349,   349,   158,   377,   378,   351,   383,   380,   354,   141,
     342,    33,   146,   340,   313,   365,   147,   142,   141,   144,
     364,   146,   141,   364,   394,   373,   373,   323,   158,   158,
     158,    85,   379,   379,   352,   360,   388,   381,    33,   355,
     122,   127,   131,   343,   344,   145,   345,   141,   143,   307,
     365,   315,   395,    96,   365,   310,   320,   365,   364,   142,
     142,   365,    33,   144,   144,   144,   142,   143,   219,   223,
     289,   346,   347,   142,   147,   142,   143,   159,   358,   142,
     143,   358,   365,   362,   394,   324,    33,   348,    33,   344,
     146,   347,   394,   293,   315,   359,   147,   310,   147,   358,
     394,   365,   338,   147,   364,   388,    44,   371,   293,   147,
     365,   159,   356,   147,   365,   141,   298,    43,   370,   371,
     371,   358,   357,   147,   147,   373,   298,    36,   372,   370,
     370,   147,   141,   293,   371,   142,   298,    42,   369,   372,
     372,   293,   373,   371,   370,   160,   298,   369,   369,   371,
     142,   370,   372,   370,   160
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 552 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /*
             * We don't do these in parserEOF() because the parser is reading
             * ahead and that would be too early.
             */

            if (previousFile != NULL)
            {
                handleEOF();

                if (currentContext.prevmod != NULL)
                    handleEOM();

                free(previousFile);
                previousFile = NULL;
            }
    }
    break;

  case 48:
#line 615 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope == NULL)
                    yyerror("%TypeHeaderCode can only be used in a namespace, class or mapped type");

                appendCodeBlock(&scope->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 49:
#line 628 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                currentModule->defdocstringfmt = convertFormat((yyvsp[(2) - (2)].defdocstringfmt).name);
        }
    break;

  case 50:
#line 634 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defdocstringfmt).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 51:
#line 639 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defdocstringfmt) = (yyvsp[(2) - (3)].defdocstringfmt);
        }
    break;

  case 53:
#line 645 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defdocstringfmt) = (yyvsp[(1) - (3)].defdocstringfmt);

            switch ((yyvsp[(3) - (3)].defdocstringfmt).token)
            {
            case TK_NAME: (yyval.defdocstringfmt).name = (yyvsp[(3) - (3)].defdocstringfmt).name; break;
            }
        }
    break;

  case 54:
#line 655 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defdocstringfmt).token = TK_NAME;

            (yyval.defdocstringfmt).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 55:
#line 662 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                currentModule->defdocstringsig = convertSignature((yyvsp[(2) - (2)].defdocstringsig).name);
        }
    break;

  case 56:
#line 668 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defdocstringsig).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 57:
#line 673 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defdocstringsig) = (yyvsp[(2) - (3)].defdocstringsig);
        }
    break;

  case 59:
#line 679 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defdocstringsig) = (yyvsp[(1) - (3)].defdocstringsig);

            switch ((yyvsp[(3) - (3)].defdocstringsig).token)
            {
            case TK_NAME: (yyval.defdocstringsig).name = (yyvsp[(3) - (3)].defdocstringsig).name; break;
            }
        }
    break;

  case 60:
#line 689 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defdocstringsig).token = TK_NAME;

            (yyval.defdocstringsig).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 61:
#line 696 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if ((currentModule->encoding = convertEncoding((yyvsp[(2) - (2)].defencoding).name)) == no_type)
                    yyerror("The %DefaultEncoding name must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
            }
        }
    break;

  case 62:
#line 705 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defencoding).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 63:
#line 710 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defencoding) = (yyvsp[(2) - (3)].defencoding);
        }
    break;

  case 65:
#line 716 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defencoding) = (yyvsp[(1) - (3)].defencoding);

            switch ((yyvsp[(3) - (3)].defencoding).token)
            {
            case TK_NAME: (yyval.defencoding).name = (yyvsp[(3) - (3)].defencoding).name; break;
            }
        }
    break;

  case 66:
#line 726 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defencoding).token = TK_NAME;

            (yyval.defencoding).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 67:
#line 733 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /*
             * Note that %Plugin is PyQt-specific.  It should be removed in SIP
             * v7.
             */

            if (notSkipping())
                appendString(&currentSpec->plugins, (yyvsp[(2) - (2)].plugin).name);
        }
    break;

  case 68:
#line 744 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.plugin).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 69:
#line 749 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.plugin) = (yyvsp[(2) - (3)].plugin);
        }
    break;

  case 71:
#line 755 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.plugin) = (yyvsp[(1) - (3)].plugin);

            switch ((yyvsp[(3) - (3)].plugin).token)
            {
            case TK_NAME: (yyval.plugin).name = (yyvsp[(3) - (3)].plugin).name; break;
            }
        }
    break;

  case 72:
#line 765 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.plugin).token = TK_NAME;

            (yyval.plugin).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 73:
#line 772 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].veh).name == NULL)
                yyerror("%VirtualErrorHandler must have a 'name' argument");

            if (notSkipping())
            {
                virtErrorHandler *veh, **tailp;

                /* Check there isn't already a handler with the same name. */
                for (tailp = &currentSpec->errorhandlers; (veh = *tailp) != NULL; tailp = &veh->next)
                    if (strcmp(veh->name, (yyvsp[(2) - (3)].veh).name) == 0)
                        break;

                if (veh != NULL)
                    yyerror("A virtual error handler with that name has already been defined");

                veh = sipMalloc(sizeof (virtErrorHandler));

                veh->name = (yyvsp[(2) - (3)].veh).name;
                appendCodeBlock(&veh->code, (yyvsp[(3) - (3)].codeb));
                veh->mod = currentModule;
                veh->index = -1;
                veh->next = NULL;

                *tailp = veh;
            }
        }
    break;

  case 74:
#line 801 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.veh).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 75:
#line 806 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.veh) = (yyvsp[(2) - (3)].veh);
        }
    break;

  case 77:
#line 812 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.veh) = (yyvsp[(1) - (3)].veh);

            switch ((yyvsp[(3) - (3)].veh).token)
            {
            case TK_NAME: (yyval.veh).name = (yyvsp[(3) - (3)].veh).name; break;
            }
        }
    break;

  case 78:
#line 822 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.veh).token = TK_NAME;

            (yyval.veh).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 79:
#line 829 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "Default",
                    "PyName",
                    NULL
                };

                exceptionDef *xd;
                const char *pyname;

                checkAnnos(&(yyvsp[(4) - (5)].optflags), annos);

                if (currentSpec->genc)
                    yyerror("%Exception not allowed in a C module");

                if ((yyvsp[(5) - (5)].exception).raise_code == NULL)
                    yyerror("%Exception must have a %RaiseCode sub-directive");

                pyname = getPythonName(currentModule, &(yyvsp[(4) - (5)].optflags), scopedNameTail((yyvsp[(2) - (5)].scpvalp)));

                checkAttributes(currentSpec, currentModule, NULL, NULL,
                        pyname, FALSE);

                xd = findException(currentSpec, (yyvsp[(2) - (5)].scpvalp), TRUE);

                if (xd->cd != NULL)
                    yyerror("%Exception name has already been seen as a class name - it must be defined before being used");

                if (xd->iff->module != NULL)
                    yyerror("The %Exception has already been defined");

                /* Complete the definition. */
                xd->iff->module = currentModule;
                appendCodeBlock(&xd->iff->hdrcode, (yyvsp[(5) - (5)].exception).type_header_code);
                xd->pyname = pyname;
                xd->bibase = (yyvsp[(3) - (5)].exceptionbase).bibase;
                xd->base = (yyvsp[(3) - (5)].exceptionbase).base;
                appendCodeBlock(&xd->raisecode, (yyvsp[(5) - (5)].exception).raise_code);

                if (getOptFlag(&(yyvsp[(4) - (5)].optflags), "Default", bool_flag) != NULL)
                    currentModule->defexception = xd;
            }
        }
    break;

  case 80:
#line 876 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;
        }
    break;

  case 81:
#line 880 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            exceptionDef *xd;

            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;

            /* See if it is a defined exception. */
            for (xd = currentSpec->exceptions; xd != NULL; xd = xd->next)
                if (compareScopedNames(xd->iff->fqcname, (yyvsp[(2) - (3)].scpvalp)) == 0)
                {
                    (yyval.exceptionbase).base = xd;
                    break;
                }

            if (xd == NULL && (yyvsp[(2) - (3)].scpvalp)->next == NULL && strncmp((yyvsp[(2) - (3)].scpvalp)->name, "SIP_", 4) == 0)
            {
                /* See if it is a builtin exception. */

                static char *builtins[] = {
                    "BaseException",
                    "Exception",
                    "StopIteration",
                    "GeneratorExit",
                    "ArithmeticError",
                    "LookupError",
                    "StandardError",                /* Python v2. */

                    "AssertionError",
                    "AttributeError",
                    "BufferError",
                    "EOFError",
                    "FloatingPointError",
                    "OSError",
                    "ImportError",
                    "IndexError",
                    "KeyError",
                    "KeyboardInterrupt",
                    "MemoryError",
                    "NameError",
                    "OverflowError",
                    "RuntimeError",
                    "NotImplementedError",
                    "SyntaxError",
                    "IndentationError",
                    "TabError",
                    "ReferenceError",
                    "SystemError",
                    "SystemExit",
                    "TypeError",
                    "UnboundLocalError",
                    "UnicodeError",
                    "UnicodeEncodeError",
                    "UnicodeDecodeError",
                    "UnicodeTranslateError",
                    "ValueError",
                    "ZeroDivisionError",
                    "EnvironmentError",             /* Python v2. */
                    "IOError",                      /* Python v2. */
                    "WindowsError",                 /* Python v2. */
                    "VMSError",                     /* Python v2. */

                    "BlockingIOError",
                    "BrokenPipeError",
                    "ChildProcessError",
                    "ConnectionError",
                    "ConnectionAbortedError",
                    "ConnectionRefusedError",
                    "ConnectionResetError",
                    "FileExistsError",
                    "FileNotFoundError",
                    "InterruptedError",
                    "IsADirectoryError",
                    "NotADirectoryError",
                    "PermissionError",
                    "ProcessLookupError",
                    "TimeoutError",

                    "Warning",
                    "UserWarning",
                    "DeprecationWarning",
                    "PendingDeprecationWarning",
                    "SyntaxWarning",
                    "RuntimeWarning",
                    "FutureWarning",
                    "ImportWarning",
                    "UnicodeWarning",
                    "BytesWarning",
                    "ResourceWarning",

                    NULL
                };

                char **cp;

                for (cp = builtins; *cp != NULL; ++cp)
                    if (strcmp((yyvsp[(2) - (3)].scpvalp)->name + 4, *cp) == 0)
                    {
                        (yyval.exceptionbase).bibase = *cp;
                        break;
                    }
            }

            if ((yyval.exceptionbase).bibase == NULL && (yyval.exceptionbase).base == NULL)
                yyerror("Unknown exception base type");
        }
    break;

  case 82:
#line 987 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.exception) = (yyvsp[(2) - (4)].exception);
        }
    break;

  case 84:
#line 993 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.exception) = (yyvsp[(1) - (2)].exception);

            switch ((yyvsp[(2) - (2)].exception).token)
            {
            case TK_RAISECODE: (yyval.exception).raise_code = (yyvsp[(2) - (2)].exception).raise_code; break;
            case TK_TYPEHEADERCODE: (yyval.exception).type_header_code = (yyvsp[(2) - (2)].exception).type_header_code; break;
            }
        }
    break;

  case 85:
#line 1004 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.exception).token = TK_IF;
        }
    break;

  case 86:
#line 1007 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.exception).token = TK_END;
        }
    break;

  case 87:
#line 1010 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.exception).token = TK_RAISECODE;
                (yyval.exception).raise_code = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.exception).token = 0;
                (yyval.exception).raise_code = NULL;
            }

            (yyval.exception).type_header_code = NULL;
        }
    break;

  case 88:
#line 1024 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.exception).token = TK_TYPEHEADERCODE;
                (yyval.exception).type_header_code = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.exception).token = 0;
                (yyval.exception).type_header_code = NULL;
            }

            (yyval.exception).raise_code = NULL;
        }
    break;

  case 89:
#line 1040 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 90:
#line 1045 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "AllowNone",
                    "NoRelease",
                    "PyName",
                    "PyQtFlags",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

                currentMappedType = newMappedType(currentSpec, &(yyvsp[(2) - (3)].memArg), &(yyvsp[(3) - (3)].optflags));
            }
        }
    break;

  case 92:
#line 1067 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "AllowNone",
                    "NoRelease",
                    "PyQtFlags",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    NULL
                };

                int a;
                mappedTypeTmplDef *mtt;
                ifaceFileDef *iff;

                checkAnnos(&(yyvsp[(4) - (4)].optflags), annos);

                if (currentSpec->genc)
                    yyerror("%MappedType templates not allowed in a C module");

                /*
                 * Check the template arguments are basic types or simple
                 * names.
                 */
                for (a = 0; a < (yyvsp[(1) - (4)].signature).nrArgs; ++a)
                {
                    argDef *ad = &(yyvsp[(1) - (4)].signature).args[a];

                    if (ad->atype == defined_type && ad->u.snd->next != NULL)
                        yyerror("%MappedType template arguments must be simple names");
                }

                if ((yyvsp[(3) - (4)].memArg).atype != template_type)
                    yyerror("%MappedType template must map a template type");

                (yyvsp[(3) - (4)].memArg).u.td->fqname  = fullyQualifiedName((yyvsp[(3) - (4)].memArg).u.td->fqname);

                /* Check a template hasn't already been provided. */
                for (mtt = currentSpec->mappedtypetemplates; mtt != NULL; mtt = mtt->next)
                    if (compareScopedNames(mtt->mt->type.u.td->fqname, (yyvsp[(3) - (4)].memArg).u.td->fqname ) == 0 && sameTemplateSignature(&mtt->mt->type.u.td->types, &(yyvsp[(3) - (4)].memArg).u.td->types, TRUE))
                        yyerror("%MappedType template for this type has already been defined");

                (yyvsp[(3) - (4)].memArg).nrderefs = 0;
                (yyvsp[(3) - (4)].memArg).argflags = 0;

                mtt = sipMalloc(sizeof (mappedTypeTmplDef));

                mtt->sig = (yyvsp[(1) - (4)].signature);
                mtt->mt = allocMappedType(currentSpec, &(yyvsp[(3) - (4)].memArg));
                mappedTypeAnnos(currentSpec, mtt->mt, &(yyvsp[(4) - (4)].optflags));
                mtt->next = currentSpec->mappedtypetemplates;

                currentSpec->mappedtypetemplates = mtt;

                currentMappedType = mtt->mt;

                /* Create a dummy interface file. */
                iff = sipMalloc(sizeof (ifaceFileDef));
                iff->hdrcode = NULL;
                mtt->mt->iff = iff;
            }
        }
    break;

  case 94:
#line 1134 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (abiVersion >= ABI_13_0)
                {
                    if (checkUserState(currentMappedType->convtocode, currentMappedType->releasecode))
                        setNeedsUserState(currentMappedType);
                }
                else
                {
                    if (currentMappedType->convtocode == NULL)
                        yyerror("%MappedType must have a %ConvertToTypeCode directive");

                    if (currentMappedType->convfromcode == NULL)
                        yyerror("%MappedType must have a %ConvertFromTypeCode directive");
                }

                currentMappedType = NULL;
            }
        }
    break;

  case 99:
#line 1162 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 100:
#line 1166 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->typecode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 101:
#line 1170 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode != NULL)
                    yyerror("%MappedType has more than one %ConvertFromTypeCode directive");

                appendCodeBlock(&currentMappedType->convfromcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 102:
#line 1179 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convtocode != NULL)
                    yyerror("%MappedType has more than one %ConvertToTypeCode directive");

                appendCodeBlock(&currentMappedType->convtocode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 103:
#line 1188 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->releasecode != NULL)
                    yyerror("%MappedType has more than one %ReleaseCode directive");

                appendCodeBlock(&currentMappedType->releasecode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 104:
#line 1197 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->instancecode != NULL)
                    yyerror("%MappedType has more than one %InstanceCode directive");

                appendCodeBlock(&currentMappedType->instancecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 107:
#line 1210 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(2) - (14)].memArg), &(yyvsp[(9) - (14)].optflags));

                (yyvsp[(5) - (14)].signature).result = (yyvsp[(2) - (14)].memArg);

                newFunction(currentSpec, currentModule, NULL, NULL,
                        currentMappedType, 0, TRUE, FALSE, FALSE, FALSE, (yyvsp[(3) - (14)].text),
                        &(yyvsp[(5) - (14)].signature), (yyvsp[(7) - (14)].number), FALSE, &(yyvsp[(9) - (14)].optflags), (yyvsp[(14) - (14)].codeb), NULL, NULL, (yyvsp[(8) - (14)].throwlist), (yyvsp[(10) - (14)].optsignature), (yyvsp[(12) - (14)].docstr),
                        FALSE, (yyvsp[(13) - (14)].codeb));
            }
        }
    break;

  case 108:
#line 1225 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("namespace definition not allowed in a C module");

            if (notSkipping())
            {
                classDef *ns, *c_scope;
                ifaceFileDef *scope;

                if ((c_scope = currentScope()) != NULL)
                    scope = c_scope->iff;
                else
                    scope = NULL;

                ns = newClass(currentSpec, namespace_iface,
                        text2scopedName(scope, (yyvsp[(2) - (2)].text)), NULL, NULL, NULL, NULL);

                pushScope(ns);

                sectionFlags = 0;
            }
        }
    break;

  case 109:
#line 1246 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (inMainModule())
                {
                    classDef *ns = currentScope();

                    setIsUsedName(ns->iff->name);
                    setIsUsedName(ns->pyname);
                }

                popScope();
            }
        }
    break;

  case 114:
#line 1270 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == platform_qualifier)
                        yyerror("%Platforms has already been defined for this module");
            }
        }
    break;

  case 115:
#line 1280 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;
                int nrneeded;

                /* Check that exactly one platform in the set was requested. */
                nrneeded = 0;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == platform_qualifier && selectedQualifier(neededQualifiers, qd))
                        ++nrneeded;

                if (nrneeded > 1)
                    yyerror("No more than one of these %Platforms must be specified with the -t flag");
            }
        }
    break;

  case 118:
#line 1303 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            newQualifier(currentModule, -1, 0, notSkipping(), (yyvsp[(1) - (1)].text),
                    platform_qualifier);
        }
    break;

  case 119:
#line 1309 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            newQualifier(currentModule, -1, 0, notSkipping(), (yyvsp[(2) - (2)].feature).name,
                    feature_qualifier);
        }
    break;

  case 120:
#line 1315 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.feature).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 121:
#line 1320 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.feature) = (yyvsp[(2) - (3)].feature);
        }
    break;

  case 123:
#line 1326 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.feature) = (yyvsp[(1) - (3)].feature);

            switch ((yyvsp[(3) - (3)].feature).token)
            {
            case TK_NAME: (yyval.feature).name = (yyvsp[(3) - (3)].feature).name; break;
            }
        }
    break;

  case 124:
#line 1336 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.feature).token = TK_NAME;

            (yyval.feature).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 125:
#line 1343 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            currentTimelineOrder = 0;
        }
    break;

  case 126:
#line 1346 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;
                int nrneeded;

                /*
                 * Check that exactly one time slot in the set was requested.
                 */
                nrneeded = 0;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == time_qualifier && selectedQualifier(neededQualifiers, qd))
                        ++nrneeded;

                if (nrneeded > 1)
                    yyerror("At most one of this %Timeline must be specified with the -t flag");

                currentModule->nrtimelines++;
            }
        }
    break;

  case 129:
#line 1373 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            newQualifier(currentModule, currentModule->nrtimelines,
                    currentTimelineOrder++, TRUE, (yyvsp[(1) - (1)].text), time_qualifier);
        }
    break;

  case 130:
#line 1379 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            currentPlatforms = NULL;
        }
    break;

  case 131:
#line 1381 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (stackPtr >= MAX_NESTED_IF)
                yyerror("Internal error: increase the value of MAX_NESTED_IF");

            /* Nested %Ifs are implicit logical ands. */

            if (stackPtr > 0)
                (yyvsp[(4) - (5)].boolean) = ((yyvsp[(4) - (5)].boolean) && skipStack[stackPtr - 1]);

            skipStack[stackPtr] = (yyvsp[(4) - (5)].boolean);

            platformStack[stackPtr] = currentPlatforms;

            ++stackPtr;
        }
    break;

  case 132:
#line 1398 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(1) - (1)].text), FALSE);
        }
    break;

  case 133:
#line 1401 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(2) - (2)].text), TRUE);
        }
    break;

  case 134:
#line 1404 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(3) - (3)].text), FALSE) || (yyvsp[(1) - (3)].boolean));
        }
    break;

  case 135:
#line 1407 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(4) - (4)].text), TRUE) || (yyvsp[(1) - (4)].boolean));
        }
    break;

  case 137:
#line 1413 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = timePeriod((yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        }
    break;

  case 138:
#line 1418 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (stackPtr-- <= 0)
                yyerror("Too many %End directives");

            currentPlatforms = (stackPtr == 0 ? NULL : platformStack[stackPtr - 1]);
        }
    break;

  case 139:
#line 1426 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (2)].license).type == NULL)
                yyerror("%License must have a 'type' argument");

            if (notSkipping())
            {
                currentModule->license = sipMalloc(sizeof (licenseDef));

                currentModule->license->type = (yyvsp[(2) - (2)].license).type;
                currentModule->license->licensee = (yyvsp[(2) - (2)].license).licensee;
                currentModule->license->sig = (yyvsp[(2) - (2)].license).signature;
                currentModule->license->timestamp = (yyvsp[(2) - (2)].license).timestamp;
            }
        }
    break;

  case 140:
#line 1442 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 141:
#line 1450 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.license).type = (yyvsp[(1) - (1)].text);
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 142:
#line 1456 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.license) = (yyvsp[(2) - (3)].license);
        }
    break;

  case 144:
#line 1462 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.license) = (yyvsp[(1) - (3)].license);

            switch ((yyvsp[(3) - (3)].license).token)
            {
            case TK_TYPE: (yyval.license).type = (yyvsp[(3) - (3)].license).type; break;
            case TK_LICENSEE: (yyval.license).licensee = (yyvsp[(3) - (3)].license).licensee; break;
            case TK_SIGNATURE: (yyval.license).signature = (yyvsp[(3) - (3)].license).signature; break;
            case TK_TIMESTAMP: (yyval.license).timestamp = (yyvsp[(3) - (3)].license).timestamp; break;
            }
        }
    break;

  case 145:
#line 1475 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.license).token = TK_NAME;

            (yyval.license).type = (yyvsp[(3) - (3)].text);
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 146:
#line 1483 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.license).token = TK_LICENSEE;

            (yyval.license).type = NULL;
            (yyval.license).licensee = (yyvsp[(3) - (3)].text);
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 147:
#line 1491 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.license).token = TK_SIGNATURE;

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = (yyvsp[(3) - (3)].text);
            (yyval.license).timestamp = NULL;
        }
    break;

  case 148:
#line 1499 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.license).token = TK_TIMESTAMP;

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = (yyvsp[(3) - (3)].text);
        }
    break;

  case 149:
#line 1509 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defmetatype != NULL)
                    yyerror("%DefaultMetatype has already been defined for this module");

                currentModule->defmetatype = cacheName(currentSpec, (yyvsp[(2) - (2)].defmetatype).name);
            }
        }
    break;

  case 150:
#line 1520 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defmetatype).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 151:
#line 1525 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defmetatype) = (yyvsp[(2) - (3)].defmetatype);
        }
    break;

  case 153:
#line 1531 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defmetatype) = (yyvsp[(1) - (3)].defmetatype);

            switch ((yyvsp[(3) - (3)].defmetatype).token)
            {
            case TK_NAME: (yyval.defmetatype).name = (yyvsp[(3) - (3)].defmetatype).name; break;
            }
        }
    break;

  case 154:
#line 1541 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defmetatype).token = TK_NAME;

            (yyval.defmetatype).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 155:
#line 1548 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defsupertype != NULL)
                    yyerror("%DefaultSupertype has already been defined for this module");

                currentModule->defsupertype = cacheName(currentSpec, (yyvsp[(2) - (2)].defsupertype).name);
            }
        }
    break;

  case 156:
#line 1559 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defsupertype).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 157:
#line 1564 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defsupertype) = (yyvsp[(2) - (3)].defsupertype);
        }
    break;

  case 159:
#line 1570 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defsupertype) = (yyvsp[(1) - (3)].defsupertype);

            switch ((yyvsp[(3) - (3)].defsupertype).token)
            {
            case TK_NAME: (yyval.defsupertype).name = (yyvsp[(3) - (3)].defsupertype).name; break;
            }
        }
    break;

  case 160:
#line 1580 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.defsupertype).token = TK_NAME;

            (yyval.defsupertype).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 161:
#line 1587 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *ns;

                ns = newClass(currentSpec, namespace_iface,
                        fullyQualifiedName((yyvsp[(2) - (2)].hiddenns).name), NULL, NULL, NULL, NULL);
                setHiddenNamespace(ns);
            }
        }
    break;

  case 162:
#line 1599 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.hiddenns).name = (yyvsp[(1) - (1)].scpvalp);
        }
    break;

  case 163:
#line 1604 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.hiddenns) = (yyvsp[(2) - (3)].hiddenns);
        }
    break;

  case 165:
#line 1610 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.hiddenns) = (yyvsp[(1) - (3)].hiddenns);

            switch ((yyvsp[(3) - (3)].hiddenns).token)
            {
            case TK_NAME: (yyval.hiddenns).name = (yyvsp[(3) - (3)].hiddenns).name; break;
            }
        }
    break;

  case 166:
#line 1620 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.hiddenns).token = TK_NAME;

            (yyval.hiddenns).name = (yyvsp[(3) - (3)].scpvalp);
        }
    break;

  case 167:
#line 1627 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                /* Make sure this is the first mention of a module. */
                if (currentSpec->module != currentModule)
                    yyerror("A %CompositeModule cannot be %Imported");

                if (currentModule->fullname != NULL)
                    yyerror("%CompositeModule must appear before any %Module directive");

                setModuleName(currentSpec, currentModule, (yyvsp[(2) - (3)].compmodule).name);
                currentModule->docstring = (yyvsp[(3) - (3)].compmodule).docstring;

                setIsComposite(currentModule);
            }
        }
    break;

  case 168:
#line 1645 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.compmodule).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 169:
#line 1650 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(2) - (3)].compmodule);
        }
    break;

  case 171:
#line 1656 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(1) - (3)].compmodule);

            switch ((yyvsp[(3) - (3)].compmodule).token)
            {
            case TK_NAME: (yyval.compmodule).name = (yyvsp[(3) - (3)].compmodule).name; break;
            }
        }
    break;

  case 172:
#line 1666 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.compmodule).token = TK_NAME;

            (yyval.compmodule).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 173:
#line 1673 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.compmodule).token = 0;
            (yyval.compmodule).docstring = NULL;
        }
    break;

  case 174:
#line 1677 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(2) - (4)].compmodule);
        }
    break;

  case 176:
#line 1683 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(1) - (2)].compmodule);

            switch ((yyvsp[(2) - (2)].compmodule).token)
            {
            case TK_DOCSTRING: (yyval.compmodule).docstring = (yyvsp[(2) - (2)].compmodule).docstring; break;
            }
        }
    break;

  case 177:
#line 1693 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.compmodule).token = TK_IF;
        }
    break;

  case 178:
#line 1696 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.compmodule).token = TK_END;
        }
    break;

  case 179:
#line 1699 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.compmodule).token = TK_DOCSTRING;
                (yyval.compmodule).docstring = (yyvsp[(1) - (1)].docstr);
            }
            else
            {
                (yyval.compmodule).token = 0;
                (yyval.compmodule).docstring = NULL;
            }
        }
    break;

  case 180:
#line 1713 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].module).name == NULL)
                yyerror("%Module must have a 'name' argument");

            if (notSkipping())
                currentModule = configureModule(currentSpec, currentModule,
                        currentContext.filename, (yyvsp[(2) - (3)].module).name, (yyvsp[(2) - (3)].module).c_module,
                        (yyvsp[(2) - (3)].module).kwargs, (yyvsp[(2) - (3)].module).use_arg_names, (yyvsp[(2) - (3)].module).use_limited_api,
                        (yyvsp[(2) - (3)].module).call_super_init, (yyvsp[(2) - (3)].module).all_raise_py_exc,
                        (yyvsp[(2) - (3)].module).def_error_handler, (yyvsp[(3) - (3)].module).docstring);
        }
    break;

  case 181:
#line 1726 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {resetLexerState();}
    break;

  case 182:
#line 1726 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = (yyvsp[(1) - (2)].text);
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 183:
#line 1736 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module) = (yyvsp[(2) - (3)].module);
        }
    break;

  case 185:
#line 1742 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module) = (yyvsp[(1) - (3)].module);

            switch ((yyvsp[(3) - (3)].module).token)
            {
            case TK_KWARGS: (yyval.module).kwargs = (yyvsp[(3) - (3)].module).kwargs; break;
            case TK_LANGUAGE: (yyval.module).c_module = (yyvsp[(3) - (3)].module).c_module; break;
            case TK_NAME: (yyval.module).name = (yyvsp[(3) - (3)].module).name; break;
            case TK_USEARGNAMES: (yyval.module).use_arg_names = (yyvsp[(3) - (3)].module).use_arg_names; break;
            case TK_USELIMITEDAPI: (yyval.module).use_limited_api = (yyvsp[(3) - (3)].module).use_limited_api; break;
            case TK_ALLRAISEPYEXC: (yyval.module).all_raise_py_exc = (yyvsp[(3) - (3)].module).all_raise_py_exc; break;
            case TK_CALLSUPERINIT: (yyval.module).call_super_init = (yyvsp[(3) - (3)].module).call_super_init; break;
            case TK_DEFERRORHANDLER: (yyval.module).def_error_handler = (yyvsp[(3) - (3)].module).def_error_handler; break;
            }
        }
    break;

  case 186:
#line 1759 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_KWARGS;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = convertKwArgs((yyvsp[(3) - (3)].text));
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 187:
#line 1771 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_LANGUAGE;

            if (strcmp((yyvsp[(3) - (3)].text), "C++") == 0)
                (yyval.module).c_module = FALSE;
            else if (strcmp((yyvsp[(3) - (3)].text), "C") == 0)
                (yyval.module).c_module = TRUE;
            else
                yyerror("%Module 'language' argument must be either \"C++\" or \"C\"");

            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 188:
#line 1789 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_NAME;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = (yyvsp[(3) - (3)].text);
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 189:
#line 1801 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_USEARGNAMES;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = (yyvsp[(3) - (3)].boolean);
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 190:
#line 1813 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_USELIMITEDAPI;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = (yyvsp[(3) - (3)].boolean);
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 191:
#line 1825 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_ALLRAISEPYEXC;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = (yyvsp[(3) - (3)].boolean);
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 192:
#line 1837 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_CALLSUPERINIT;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = (yyvsp[(3) - (3)].boolean);
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 193:
#line 1849 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_DEFERRORHANDLER;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = (yyvsp[(3) - (3)].text);
        }
    break;

  case 194:
#line 1863 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = 0;
            (yyval.module).docstring = NULL;
        }
    break;

  case 195:
#line 1867 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module) = (yyvsp[(2) - (4)].module);
        }
    break;

  case 197:
#line 1873 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module) = (yyvsp[(1) - (2)].module);

            switch ((yyvsp[(2) - (2)].module).token)
            {
            case TK_DOCSTRING: (yyval.module).docstring = (yyvsp[(2) - (2)].module).docstring; break;
            }
        }
    break;

  case 198:
#line 1883 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_IF;
        }
    break;

  case 199:
#line 1886 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_END;
        }
    break;

  case 200:
#line 1889 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.module).token = TK_AUTOPYNAME;
        }
    break;

  case 201:
#line 1892 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.module).token = TK_DOCSTRING;
                (yyval.module).docstring = (yyvsp[(1) - (1)].docstr);
            }
            else
            {
                (yyval.module).token = 0;
                (yyval.module).docstring = NULL;
            }
        }
    break;

  case 203:
#line 1907 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /*
             * The grammar design is a bit broken and this is the easiest way
             * to allow periods in names.
             */

            char *cp;

            for (cp = (yyvsp[(1) - (1)].text); *cp != '\0'; ++cp)
                if (*cp != '.' && *cp != '_' && !isalnum(*cp))
                    yyerror("Invalid character in name");

            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 204:
#line 1923 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (2)].include).name == NULL)
                yyerror("%Include must have a 'name' argument");

            if (notSkipping())
                parseFile(NULL, (yyvsp[(2) - (2)].include).name, NULL, (yyvsp[(2) - (2)].include).optional);
        }
    break;

  case 205:
#line 1932 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.include).name = (yyvsp[(1) - (1)].text);
            (yyval.include).optional = FALSE;
        }
    break;

  case 206:
#line 1938 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.include) = (yyvsp[(2) - (3)].include);
        }
    break;

  case 208:
#line 1944 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.include) = (yyvsp[(1) - (3)].include);

            switch ((yyvsp[(3) - (3)].include).token)
            {
            case TK_NAME: (yyval.include).name = (yyvsp[(3) - (3)].include).name; break;
            case TK_OPTIONAL: (yyval.include).optional = (yyvsp[(3) - (3)].include).optional; break;
            }
        }
    break;

  case 209:
#line 1955 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.include).token = TK_NAME;

            (yyval.include).name = (yyvsp[(3) - (3)].text);
            (yyval.include).optional = FALSE;
        }
    break;

  case 210:
#line 1961 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.include).token = TK_OPTIONAL;

            (yyval.include).name = NULL;
            (yyval.include).optional = (yyvsp[(3) - (3)].boolean);
        }
    break;

  case 211:
#line 1969 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                newImport((yyvsp[(2) - (2)].import).name);
        }
    break;

  case 212:
#line 1975 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.import).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 213:
#line 1980 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.import) = (yyvsp[(2) - (3)].import);
        }
    break;

  case 215:
#line 1986 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.import) = (yyvsp[(1) - (3)].import);

            switch ((yyvsp[(3) - (3)].import).token)
            {
            case TK_NAME: (yyval.import).name = (yyvsp[(3) - (3)].import).name; break;
            }
        }
    break;

  case 216:
#line 1996 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.import).token = TK_NAME;

            (yyval.import).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 217:
#line 2003 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->copying, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 218:
#line 2009 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->exphdrcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 219:
#line 2015 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->hdrcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 220:
#line 2021 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 221:
#line 2026 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 222:
#line 2031 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 223:
#line 2036 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 224:
#line 2041 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 225:
#line 2046 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 226:
#line 2051 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 227:
#line 2056 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 228:
#line 2061 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->cppcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 229:
#line 2067 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 230:
#line 2072 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->preinitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 231:
#line 2078 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->initcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 232:
#line 2084 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->postinitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 233:
#line 2090 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 234:
#line 2096 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitpostinccode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 235:
#line 2102 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping() && !inMainModule())
                appendCodeBlock(&currentSpec->exptypehintcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 236:
#line 2108 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->typehintcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 237:
#line 2114 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 238:
#line 2119 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                addAutoPyName(currentModule, (yyvsp[(2) - (2)].autopyname).remove_leading);
        }
    break;

  case 239:
#line 2125 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.autopyname) = (yyvsp[(2) - (3)].autopyname);
        }
    break;

  case 241:
#line 2131 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.autopyname) = (yyvsp[(1) - (3)].autopyname);

            switch ((yyvsp[(3) - (3)].autopyname).token)
            {
            case TK_REMOVELEADING: (yyval.autopyname).remove_leading = (yyvsp[(3) - (3)].autopyname).remove_leading; break;
            }
        }
    break;

  case 242:
#line 2141 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.autopyname).token = TK_REMOVELEADING;

            (yyval.autopyname).remove_leading = (yyvsp[(3) - (3)].text);
        }
    break;

  case 243:
#line 2148 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.docstr) = sipMalloc(sizeof(docstringDef));

            (yyval.docstr)->signature = (yyvsp[(2) - (3)].docstring).signature;
            (yyval.docstr)->text = (yyvsp[(3) - (3)].codeb)->frag;
            free((yyvsp[(3) - (3)].codeb));

            /* Format the docstring. */
            if ((yyvsp[(2) - (3)].docstring).format == deindented)
            {
                const char *cp;
                char *dp;
                int min_indent, indent, skipping;

                /* Find the common indent. */
                min_indent = -1;
                indent = 0;
                skipping = FALSE;

                for (cp = (yyval.docstr)->text; *cp != '\0'; ++cp)
                {
                    if (skipping)
                    {
                        /*
                         * We have handled the indent and are just looking for
                         * the end of the line.
                         */
                        if (*cp == '\n')
                            skipping = FALSE;
                    }
                    else
                    {
                        if (*cp == ' ')
                        {
                            ++indent;
                        }
                        else if (*cp != '\n')
                        {
                            if (min_indent < 0 || min_indent > indent)
                                min_indent = indent;

                            /* Ignore the remaining characters of the line. */
                            skipping = TRUE;
                        }
                    }
                }

                /* In case the last line doesn't have a trailing newline. */
                if (min_indent < 0 || min_indent > indent)
                    min_indent = indent;

                /*
                 * Go through the text again removing the common indentation.
                 */
                cp = dp = (yyval.docstr)->text;

                while (*cp != '\0')
                {
                    const char *start = cp;
                    int non_blank = FALSE;

                    /* Find the end of the line. */
                    while (*cp != '\n' && *cp != '\0')
                        if (*cp++ != ' ')
                            non_blank = TRUE;

                    /* Find where we are copying from. */
                    if (non_blank)
                    {
                        start += min_indent;

                        while (*start != '\n' && *start != '\0')
                            *dp++ = *start++;
                    }

                    if (*cp == '\n')
                        *dp++ = *cp++;
                }

                *dp = '\0';
            }
        }
    break;

  case 244:
#line 2232 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.docstring).format = currentModule->defdocstringfmt;
            (yyval.docstring).signature = currentModule->defdocstringsig;
        }
    break;

  case 245:
#line 2236 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.docstring).format = convertFormat((yyvsp[(1) - (1)].text));
            (yyval.docstring).signature = currentModule->defdocstringsig;
        }
    break;

  case 246:
#line 2242 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.docstring) = (yyvsp[(2) - (3)].docstring);
        }
    break;

  case 248:
#line 2248 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.docstring) = (yyvsp[(1) - (3)].docstring);

            switch ((yyvsp[(3) - (3)].docstring).token)
            {
            case TK_FORMAT: (yyval.docstring).format = (yyvsp[(3) - (3)].docstring).format; break;
            case TK_SIGNATURE: (yyval.docstring).signature = (yyvsp[(3) - (3)].docstring).signature; break;
            }
        }
    break;

  case 249:
#line 2259 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.docstring).token = TK_FORMAT;

            (yyval.docstring).format = convertFormat((yyvsp[(3) - (3)].text));
            (yyval.docstring).signature = currentModule->defdocstringsig;
        }
    break;

  case 250:
#line 2265 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.docstring).token = TK_SIGNATURE;

            (yyval.docstring).format = currentModule->defdocstringfmt;
            (yyval.docstring).signature = convertSignature((yyvsp[(3) - (3)].text));
        }
    break;

  case 251:
#line 2273 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.docstr) = NULL;
        }
    break;

  case 253:
#line 2279 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].extract).id == NULL)
                yyerror("%Extract must have an 'id' argument");

            if (notSkipping())
                addExtractPart(currentSpec, (yyvsp[(2) - (3)].extract).id, (yyvsp[(2) - (3)].extract).order, (yyvsp[(3) - (3)].codeb));
        }
    break;

  case 254:
#line 2288 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.extract).id = (yyvsp[(1) - (1)].text);
            (yyval.extract).order = -1;
        }
    break;

  case 255:
#line 2294 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.extract) = (yyvsp[(2) - (3)].extract);
        }
    break;

  case 257:
#line 2300 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.extract) = (yyvsp[(1) - (3)].extract);

            switch ((yyvsp[(3) - (3)].extract).token)
            {
            case TK_ID: (yyval.extract).id = (yyvsp[(3) - (3)].extract).id; break;
            case TK_ORDER: (yyval.extract).order = (yyvsp[(3) - (3)].extract).order; break;
            }
        }
    break;

  case 258:
#line 2311 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.extract).token = TK_ID;

            (yyval.extract).id = (yyvsp[(3) - (3)].text);
            (yyval.extract).order = -1;
        }
    break;

  case 259:
#line 2317 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.extract).token = TK_ORDER;

            if ((yyvsp[(3) - (3)].number) < 0)
                yyerror("The 'order' of an %Extract directive must not be negative");

            (yyval.extract).id = NULL;
            (yyval.extract).order = (yyvsp[(3) - (3)].number);
        }
    break;

  case 262:
#line 2332 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(1) - (2)].codeb);

            append(&(yyval.codeb)->frag, (yyvsp[(2) - (2)].codeb)->frag);

            free((yyvsp[(2) - (2)].codeb)->frag);
            free((yyvsp[(2) - (2)].codeb));
        }
    break;

  case 263:
#line 2342 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "BaseType",
                    "NoScope",
                    "NoTypeHint",
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(4) - (4)].optflags), annos);

                if (sectionFlags != 0 && (sectionFlags & ~(SECT_IS_PUBLIC | SECT_IS_PROT)) != 0)
                    yyerror("Class enums must be in the public or protected sections");

                if (currentSpec->genc && (yyvsp[(2) - (4)].boolean))
                    yyerror("Scoped enums not allowed in a C module");

                currentEnum = newEnum(currentSpec, currentModule,
                        currentMappedType, (yyvsp[(3) - (4)].text), &(yyvsp[(4) - (4)].optflags), sectionFlags, (yyvsp[(2) - (4)].boolean));
            }
        }
    break;

  case 265:
#line 2367 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 266:
#line 2370 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 267:
#line 2373 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 268:
#line 2376 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 269:
#line 2381 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.text) = NULL;
        }
    break;

  case 270:
#line 2384 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 277:
#line 2399 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "NoTypeHint",
                    "PyName",
                    NULL
                };

                enumMemberDef *emd, **tail;

                checkAnnos(&(yyvsp[(3) - (4)].optflags), annos);

                /* Note that we don't use the assigned value. */
                emd = sipMalloc(sizeof (enumMemberDef));

                emd->pyname = cacheName(currentSpec,
                        getPythonName(currentModule, &(yyvsp[(3) - (4)].optflags), (yyvsp[(1) - (4)].text)));
                emd->cname = (yyvsp[(1) - (4)].text);
                emd->no_typehint = getNoTypeHint(&(yyvsp[(3) - (4)].optflags));
                emd->ed = currentEnum;
                emd->platforms = currentPlatforms;
                emd->next = NULL;

                /*
                 * Note that we don't check that members of scoped enums are
                 * unique.
                 */
                if (!isScopedEnum(currentEnum))
                    checkAttributes(currentSpec, currentModule, emd->ed->ecd,
                            emd->ed->emtd, emd->pyname->text, FALSE);

                /* Append to preserve the order. */
                for (tail = &currentEnum->members; *tail != NULL; tail = &(*tail)->next)
                    ;

                *tail = emd;

                if (inMainModule())
                    setIsUsedName(emd->pyname);
            }
        }
    break;

  case 282:
#line 2451 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.valp) = NULL;
        }
    break;

  case 283:
#line 2454 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.valp) = (yyvsp[(2) - (2)].valp);
        }
    break;

  case 285:
#line 2460 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            valueDef *vd;
 
            if ((yyvsp[(1) - (3)].valp) -> vtype == string_value || (yyvsp[(3) - (3)].valp) -> vtype == string_value)
                yyerror("Invalid binary operator for string");
 
            /* Find the last value in the existing expression. */
 
            for (vd = (yyvsp[(1) - (3)].valp); vd -> next != NULL; vd = vd -> next)
                ;
 
            vd -> vbinop = (yyvsp[(2) - (3)].qchar);
            vd -> next = (yyvsp[(3) - (3)].valp);

            (yyval.valp) = (yyvsp[(1) - (3)].valp);
        }
    break;

  case 286:
#line 2478 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '-';
        }
    break;

  case 287:
#line 2481 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '+';
        }
    break;

  case 288:
#line 2484 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '*';
        }
    break;

  case 289:
#line 2487 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '/';
        }
    break;

  case 290:
#line 2490 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '&';
        }
    break;

  case 291:
#line 2493 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '|';
        }
    break;

  case 292:
#line 2498 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '\0';
        }
    break;

  case 293:
#line 2501 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '!';
        }
    break;

  case 294:
#line 2504 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '~';
        }
    break;

  case 295:
#line 2507 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '-';
        }
    break;

  case 296:
#line 2510 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '+';
        }
    break;

  case 297:
#line 2513 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '*';
        }
    break;

  case 298:
#line 2516 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.qchar) = '&';
        }
    break;

  case 299:
#line 2521 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].qchar) != '\0' && (yyvsp[(3) - (3)].value).vtype == string_value)
                yyerror("Invalid unary operator for string");
 
            /* Convert the value to a simple expression on the heap. */
            (yyval.valp) = sipMalloc(sizeof (valueDef));
 
            *(yyval.valp) = (yyvsp[(3) - (3)].value);
            (yyval.valp)->vunop = (yyvsp[(2) - (3)].qchar);
            (yyval.valp)->vbinop = '\0';
            (yyval.valp)->cast = (yyvsp[(1) - (3)].scpvalp);
            (yyval.valp)->next = NULL;
        }
    break;

  case 300:
#line 2536 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.scpvalp) = NULL;
        }
    break;

  case 301:
#line 2539 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.scpvalp) = (yyvsp[(2) - (3)].scpvalp);
        }
    break;

  case 302:
#line 2544 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Scoped names are not allowed in a C module");

            (yyval.scpvalp) = scopeScopedName(NULL, (yyvsp[(2) - (2)].scpvalp));
        }
    break;

  case 305:
#line 2554 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Scoped names are not allowed in a C module");

            appendScopedName(&(yyvsp[(1) - (3)].scpvalp), (yyvsp[(3) - (3)].scpvalp));
        }
    break;

  case 306:
#line 2562 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.scpvalp) = text2scopePart((yyvsp[(1) - (1)].text));
        }
    break;

  case 307:
#line 2567 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 308:
#line 2570 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 309:
#line 2575 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /*
             * We let the C++ compiler decide if the value is a valid one - no
             * point in building a full C++ parser here.
             */

            (yyval.value).vtype = scoped_value;
            (yyval.value).u.vscp = (yyvsp[(1) - (1)].scpvalp);
        }
    break;

  case 310:
#line 2584 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            fcallDef *fcd;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = (yyvsp[(3) - (4)].fcall);
            fcd -> type = (yyvsp[(1) - (4)].memArg);

            (yyval.value).vtype = fcall_value;
            (yyval.value).u.fcd = fcd;
        }
    break;

  case 311:
#line 2594 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.value).vtype = empty_value;
        }
    break;

  case 312:
#line 2597 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.value).vtype = real_value;
            (yyval.value).u.vreal = (yyvsp[(1) - (1)].real);
        }
    break;

  case 313:
#line 2601 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].number);
        }
    break;

  case 314:
#line 2605 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].boolean);
        }
    break;

  case 315:
#line 2609 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = 0;
        }
    break;

  case 316:
#line 2613 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.value).vtype = string_value;
            (yyval.value).u.vstr = (yyvsp[(1) - (1)].text);
        }
    break;

  case 317:
#line 2617 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.value).vtype = qchar_value;
            (yyval.value).u.vqchar = (yyvsp[(1) - (1)].qchar);
        }
    break;

  case 318:
#line 2623 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* No values. */

            (yyval.fcall).nrArgs = 0;
        }
    break;

  case 319:
#line 2628 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* The single or first expression. */

            (yyval.fcall).args[0] = (yyvsp[(1) - (1)].valp);
            (yyval.fcall).nrArgs = 1;
        }
    break;

  case 320:
#line 2634 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* Check that it wasn't ...(,expression...). */

            if ((yyval.fcall).nrArgs == 0)
                yyerror("First argument to function call is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].fcall).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.fcall) = (yyvsp[(1) - (3)].fcall);

            (yyval.fcall).args[(yyval.fcall).nrArgs] = (yyvsp[(3) - (3)].valp);
            (yyval.fcall).nrArgs++;
        }
    break;

  case 321:
#line 2652 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Capsule",
                    "Encoding",
                    "NoTypeName",
                    "PyInt",
                    "PyName",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    NULL
                };

                checkAnnos(&(yyvsp[(4) - (6)].optflags), annos);

                applyTypeFlags(currentModule, &(yyvsp[(2) - (6)].memArg), &(yyvsp[(4) - (6)].optflags));
                newTypedef(currentSpec, currentModule, (yyvsp[(3) - (6)].text), &(yyvsp[(2) - (6)].memArg), &(yyvsp[(4) - (6)].optflags), (yyvsp[(6) - (6)].docstr));
            }
        }
    break;

  case 322:
#line 2673 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Encoding",
                    "NoTypeName",
                    "PyInt",
                    "PyName",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    NULL
                };

                signatureDef *sig;
                argDef ftype;

                checkAnnos(&(yyvsp[(10) - (12)].optflags), annos);

                applyTypeFlags(currentModule, &(yyvsp[(2) - (12)].memArg), &(yyvsp[(10) - (12)].optflags));

                memset(&ftype, 0, sizeof (argDef));

                /* Create the full signature on the heap. */
                sig = sipMalloc(sizeof (signatureDef));
                *sig = (yyvsp[(8) - (12)].signature);
                sig->result = (yyvsp[(2) - (12)].memArg);

                /* Create the full type. */
                ftype.atype = function_type;
                ftype.nrderefs = 1;
                ftype.u.sa = sig;

                newTypedef(currentSpec, currentModule, (yyvsp[(5) - (12)].text), &ftype, &(yyvsp[(10) - (12)].optflags), (yyvsp[(12) - (12)].docstr));
            }
        }
    break;

  case 323:
#line 2711 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec -> genc && (yyvsp[(2) - (2)].scpvalp)->next != NULL)
                yyerror("Namespaces not allowed in a C module");
        }
    break;

  case 324:
#line 2714 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "AllowNone",
                    "DelayDtor",
                    "Deprecated",
                    "ExportDerived",
                    "External",
                    "FileExtension",
                    "Metatype",
                    "Mixin",
                    "NoDefaultCtors",
                    "NoTypeHint",
                    "PyName",
                    "PyQtFlags",
                    "PyQtFlagsEnums",
                    "PyQtInterface",
                    "PyQtNoQMetaObject",
                    "Supertype",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    NULL
                };

                checkAnnos(&(yyvsp[(4) - (4)].optflags), annos);
                defineClass((yyvsp[(2) - (4)].scpvalp), currentSupers, &(yyvsp[(4) - (4)].optflags));
                setUnion(currentScope());
                sectionFlags = SECT_IS_PUBLIC;
            }
        }
    break;

  case 325:
#line 2746 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                completeClass((yyvsp[(2) - (7)].scpvalp), &(yyvsp[(4) - (7)].optflags), (yyvsp[(6) - (7)].boolean));
        }
    break;

  case 326:
#line 2752 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec -> genc && (yyvsp[(2) - (2)].scpvalp)->next != NULL)
                yyerror("Namespaces not allowed in a C module");

            if (notSkipping())
                currentSupers = NULL;
        }
    break;

  case 327:
#line 2758 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Abstract",
                    "AllowNone",
                    "DelayDtor",
                    "Deprecated",
                    "ExportDerived",
                    "External",
                    "FileExtension",
                    "Metatype",
                    "Mixin",
                    "NoDefaultCtors",
                    "NoTypeHint",
                    "PyName",
                    "PyQtFlags",
                    "PyQtFlagsEnums",
                    "PyQtInterface",
                    "PyQtNoQMetaObject",
                    "Supertype",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    "VirtualErrorHandler",
                    NULL
                };

                checkAnnos(&(yyvsp[(5) - (5)].optflags), annos);

                if (currentSpec->genc && currentSupers != NULL)
                    yyerror("Super-classes not allowed in a C module struct");

                defineClass((yyvsp[(2) - (5)].scpvalp), currentSupers, &(yyvsp[(5) - (5)].optflags));
                sectionFlags = SECT_IS_PUBLIC;
            }
        }
    break;

  case 328:
#line 2795 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                completeClass((yyvsp[(2) - (8)].scpvalp), &(yyvsp[(5) - (8)].optflags), (yyvsp[(7) - (8)].boolean));
        }
    break;

  case 329:
#line 2801 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {currentIsTemplate = TRUE;}
    break;

  case 330:
#line 2801 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class templates not allowed in a C module");

            if (notSkipping())
            {
                classTmplDef *tcd;

                /*
                 * Make sure there is room for the extra class name argument.
                 */
                if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                    yyerror("Internal error - increase the value of MAX_NR_ARGS");

                tcd = sipMalloc(sizeof (classTmplDef));
                tcd->sig = (yyvsp[(1) - (3)].signature);
                tcd->cd = (yyvsp[(3) - (3)].klass);
                tcd->next = currentSpec->classtemplates;

                currentSpec->classtemplates = tcd;
            }

            currentIsTemplate = FALSE;
        }
    break;

  case 331:
#line 2827 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.signature) = (yyvsp[(3) - (4)].signature);
        }
    break;

  case 332:
#line 2832 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class definition not allowed in a C module");

            if (notSkipping())
                currentSupers = NULL;
        }
    break;

  case 333:
#line 2838 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Abstract",
                    "AllowNone",
                    "DelayDtor",
                    "Deprecated",
                    "ExportDerived",
                    "External",
                    "FileExtension",
                    "Metatype",
                    "Mixin",
                    "NoDefaultCtors",
                    "PyName",
                    "PyQtFlags",
                    "PyQtFlagsEnums",
                    "PyQtInterface",
                    "PyQtNoQMetaObject",
                    "Supertype",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    "VirtualErrorHandler",
                    NULL
                };

                checkAnnos(&(yyvsp[(5) - (5)].optflags), annos);

                defineClass((yyvsp[(2) - (5)].scpvalp), currentSupers, &(yyvsp[(5) - (5)].optflags));
                sectionFlags = SECT_IS_PRIVATE;
            }
        }
    break;

  case 334:
#line 2871 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                (yyval.klass) = completeClass((yyvsp[(2) - (8)].scpvalp), &(yyvsp[(5) - (8)].optflags), (yyvsp[(7) - (8)].boolean));
        }
    break;

  case 339:
#line 2885 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping() && (yyvsp[(1) - (2)].token) == TK_PUBLIC)
            {
                argDef ad;
                classDef *super;
                scopedNameDef *snd = (yyvsp[(2) - (2)].scpvalp);

                /*
                 * This is a hack to allow typedef'ed classes to be used before
                 * we have resolved the typedef definitions.  Unlike elsewhere,
                 * we require that the typedef is defined before being used.
                 */
                for (;;)
                {
                    ad.atype = no_type;
                    ad.argflags = 0;
                    ad.nrderefs = 0;
                    ad.original_type = NULL;

                    searchTypedefs(currentSpec, snd, &ad);

                    if (ad.atype != defined_type)
                        break;

                    if (ad.nrderefs != 0 || isConstArg(&ad) || isReference(&ad))
                        break;

                    snd = ad.u.snd;
                }

                if (ad.atype != no_type)
                    yyerror("Super-class list contains an invalid type");

                /*
                 * This is a bug because we should look in the local scope
                 * rather than assume it is in the global scope.
                 */
                if (snd->name[0] != '\0')
                    snd = scopeScopedName(NULL, snd);

                /*
                 * Note that passing NULL as the API is a bug.  Instead we
                 * should pass the API of the sub-class being defined,
                 * otherwise we cannot create sub-classes of versioned classes.
                 */
                super = findClass(currentSpec, class_iface, snd,
                        currentIsTemplate);
                appendToClassList(&currentSupers, super);
            }
        }
    break;

  case 340:
#line 2937 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
        (yyval.token) = TK_PUBLIC;
        }
    break;

  case 341:
#line 2940 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
        (yyval.token) = TK_PUBLIC;
        }
    break;

  case 342:
#line 2943 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
        (yyval.token) = TK_PROTECTED;
        }
    break;

  case 343:
#line 2946 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
        (yyval.token) = TK_PRIVATE;
        }
    break;

  case 344:
#line 2951 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 345:
#line 2954 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 360:
#line 2975 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->docstring != NULL)
                    yyerror("%Docstring already given for class");

                scope->docstring = (yyvsp[(1) - (1)].docstr);
            }
        }
    break;

  case 361:
#line 2986 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->cppcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 362:
#line 2990 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 363:
#line 2994 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->travcode != NULL)
                    yyerror("%GCTraverseCode already given for class");

                appendCodeBlock(&scope->travcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 364:
#line 3005 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->clearcode != NULL)
                    yyerror("%GCClearCode already given for class");

                appendCodeBlock(&scope->clearcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 365:
#line 3016 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->getbufcode != NULL)
                    yyerror("%BIGetBufferCode already given for class");

                appendCodeBlock(&scope->getbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 366:
#line 3027 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->releasebufcode != NULL)
                    yyerror("%BIReleaseBufferCode already given for class");

                appendCodeBlock(&scope->releasebufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 367:
#line 3043 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {}
    break;

  case 368:
#line 3044 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {}
    break;

  case 369:
#line 3045 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {}
    break;

  case 370:
#line 3046 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {}
    break;

  case 371:
#line 3048 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->instancecode != NULL)
                    yyerror("%InstanceCode already given for class");

                appendCodeBlock(&scope->instancecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 372:
#line 3059 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->picklecode != NULL)
                    yyerror("%PickleCode already given for class");

                appendCodeBlock(&scope->picklecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 373:
#line 3070 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->finalcode != NULL)
                    yyerror("%FinalisationCode already given for class");

                appendCodeBlock(&scope->finalcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 374:
#line 3081 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->typehintcode != NULL)
                    yyerror("%TypeHintCode already given for class");

                appendCodeBlock(&scope->typehintcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 378:
#line 3095 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtosubcode != NULL)
                    yyerror("Class has more than one %ConvertToSubClassCode directive");

                appendCodeBlock(&scope->convtosubcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 379:
#line 3106 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtocode != NULL)
                    yyerror("Class has more than one %ConvertToTypeCode directive");

                appendCodeBlock(&scope->convtocode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 380:
#line 3117 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convfromcode != NULL)
                    yyerror("Class has more than one %ConvertFromTypeCode directive");

                appendCodeBlock(&scope->convfromcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 381:
#line 3128 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("public section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PUBLIC | (yyvsp[(2) - (3)].number);
        }
    break;

  case 382:
#line 3135 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("protected section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PROT | (yyvsp[(2) - (3)].number);
        }
    break;

  case 383:
#line 3142 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("private section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PRIVATE | (yyvsp[(2) - (3)].number);
        }
    break;

  case 384:
#line 3149 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("signals section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_SIGNAL;
        }
    break;

  case 385:
#line 3158 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].property).name == NULL)
                yyerror("A %Property directive must have a 'name' argument");

            if ((yyvsp[(2) - (3)].property).get == NULL)
                yyerror("A %Property directive must have a 'get' argument");

            if (notSkipping())
                addProperty(currentSpec, currentModule, currentScope(),
                        (yyvsp[(2) - (3)].property).name, (yyvsp[(2) - (3)].property).get, (yyvsp[(2) - (3)].property).set, (yyvsp[(3) - (3)].property).docstring);
        }
    break;

  case 386:
#line 3171 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property) = (yyvsp[(2) - (3)].property);
        }
    break;

  case 388:
#line 3177 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property) = (yyvsp[(1) - (3)].property);

            switch ((yyvsp[(3) - (3)].property).token)
            {
            case TK_GET: (yyval.property).get = (yyvsp[(3) - (3)].property).get; break;
            case TK_NAME: (yyval.property).name = (yyvsp[(3) - (3)].property).name; break;
            case TK_SET: (yyval.property).set = (yyvsp[(3) - (3)].property).set; break;
            }
        }
    break;

  case 389:
#line 3189 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property).token = TK_GET;

            (yyval.property).get = (yyvsp[(3) - (3)].text);
            (yyval.property).name = NULL;
            (yyval.property).set = NULL;
        }
    break;

  case 390:
#line 3196 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property).token = TK_NAME;

            (yyval.property).get = NULL;
            (yyval.property).name = (yyvsp[(3) - (3)].text);
            (yyval.property).set = NULL;
        }
    break;

  case 391:
#line 3203 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property).token = TK_SET;

            (yyval.property).get = NULL;
            (yyval.property).name = NULL;
            (yyval.property).set = (yyvsp[(3) - (3)].text);
        }
    break;

  case 392:
#line 3212 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property).token = 0;
            (yyval.property).docstring = NULL;
        }
    break;

  case 393:
#line 3216 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property) = (yyvsp[(2) - (4)].property);
        }
    break;

  case 395:
#line 3222 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property) = (yyvsp[(1) - (2)].property);

            switch ((yyvsp[(2) - (2)].property).token)
            {
            case TK_DOCSTRING: (yyval.property).docstring = (yyvsp[(2) - (2)].property).docstring; break;
            }
        }
    break;

  case 396:
#line 3232 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property).token = TK_IF;
        }
    break;

  case 397:
#line 3235 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.property).token = TK_END;
        }
    break;

  case 398:
#line 3238 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.property).token = TK_DOCSTRING;
                (yyval.property).docstring = (yyvsp[(1) - (1)].docstr);
            }
            else
            {
                (yyval.property).token = 0;
                (yyval.property).docstring = NULL;
            }
        }
    break;

  case 401:
#line 3256 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 402:
#line 3259 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.number) = SECT_IS_SLOT;
        }
    break;

  case 403:
#line 3265 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {currentIsVirt = TRUE;}
    break;

  case 406:
#line 3269 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* Note that we allow non-virtual dtors in C modules. */

            if (notSkipping())
            {
                const char *annos[] = {
                    "HoldGIL",
                    "ReleaseGIL",
                    NULL
                };

                classDef *cd = currentScope();

                checkAnnos(&(yyvsp[(7) - (11)].optflags), annos);

                if (strcmp(classBaseName(cd),(yyvsp[(2) - (11)].text)) != 0)
                    yyerror("Destructor doesn't have the same name as its class");

                if (isDtor(cd))
                    yyerror("Destructor has already been defined");

                if (currentSpec -> genc && (yyvsp[(9) - (11)].codeb) == NULL)
                    yyerror("Destructor in C modules must include %MethodCode");

                if (currentIsVirt && isUnion(cd))
                    yyerror("A union cannot have a virtual destructor");

                appendCodeBlock(&cd->dealloccode, (yyvsp[(9) - (11)].codeb));  /* premethodcode */
                appendCodeBlock(&cd->dealloccode, (yyvsp[(10) - (11)].codeb)); /* methodcode */
                appendCodeBlock(&cd->dtorcode, (yyvsp[(11) - (11)].codeb));
                cd -> dtorexceptions = (yyvsp[(5) - (11)].throwlist);

                /*
                 * Note that we don't apply the protected/public hack to dtors
                 * as it (I think) may change the behaviour of the wrapped API.
                 */
                cd->classflags |= sectionFlags;

                if ((yyvsp[(6) - (11)].number))
                {
                    if (!currentIsVirt)
                        yyerror("Abstract destructor must be virtual");

                    setIsAbstractClass(cd);
                }

                /*
                 * The class has a shadow if we have a virtual dtor or some
                 * dtor code.
                 */
                if (currentIsVirt || (yyvsp[(10) - (11)].codeb) != NULL)
                {
                    if (currentSpec -> genc)
                        yyerror("Virtual destructor or %VirtualCatcherCode not allowed in a C module");

                    setNeedsShadow(cd);
                }

                if (getReleaseGIL(&(yyvsp[(7) - (11)].optflags)))
                    setIsReleaseGILDtor(cd);
                else if (getHoldGIL(&(yyvsp[(7) - (11)].optflags)))
                    setIsHoldGILDtor(cd);
            }

            currentIsVirt = FALSE;
        }
    break;

  case 407:
#line 3337 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {currentCtorIsExplicit = TRUE;}
    break;

  case 410:
#line 3341 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* Note that we allow ctors in C modules. */

            if (notSkipping())
            {
                const char *annos[] = {
                    "Default",
                    "Deprecated",
                    "HoldGIL",
                    "KeywordArgs",
                    "NoDerived",
                    "NoRaisesPyException",
                    "NoTypeHint",
                    "PostHook",
                    "PreHook",
                    "RaisesPyException",
                    "ReleaseGIL",
                    "Transfer",
                    NULL
                };

                checkAnnos(&(yyvsp[(6) - (11)].optflags), annos);

                if (currentSpec -> genc)
                {
                    if ((yyvsp[(10) - (11)].codeb) == NULL && (yyvsp[(3) - (11)].signature).nrArgs != 0)
                        yyerror("Constructors with arguments in C modules must include %MethodCode");

                    if (currentCtorIsExplicit)
                        yyerror("Explicit constructors not allowed in a C module");
                }

                if ((sectionFlags & (SECT_IS_PUBLIC | SECT_IS_PROT | SECT_IS_PRIVATE)) == 0)
                    yyerror("Constructor must be in the public, private or protected sections");

                newCtor(currentModule, (yyvsp[(1) - (11)].text), sectionFlags, &(yyvsp[(3) - (11)].signature), &(yyvsp[(6) - (11)].optflags), (yyvsp[(11) - (11)].codeb), (yyvsp[(5) - (11)].throwlist), (yyvsp[(7) - (11)].optsignature),
                        currentCtorIsExplicit, (yyvsp[(9) - (11)].docstr), (yyvsp[(10) - (11)].codeb));
            }

            free((yyvsp[(1) - (11)].text));

            currentCtorIsExplicit = FALSE;
        }
    break;

  case 411:
#line 3386 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.optsignature) = NULL;
        }
    break;

  case 412:
#line 3389 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            parsingCSignature = TRUE;
        }
    break;

  case 413:
#line 3391 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(4) - (6)].signature);

            parsingCSignature = FALSE;
        }
    break;

  case 414:
#line 3400 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.optsignature) = NULL;
        }
    break;

  case 415:
#line 3403 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            parsingCSignature = TRUE;
        }
    break;

  case 416:
#line 3405 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(5) - (7)].signature);
            (yyval.optsignature)->result = (yyvsp[(3) - (7)].memArg);

            parsingCSignature = FALSE;
        }
    break;

  case 417:
#line 3415 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(1) - (17)].memArg), &(yyvsp[(10) - (17)].optflags));

                (yyvsp[(4) - (17)].signature).result = (yyvsp[(1) - (17)].memArg);

                newFunction(currentSpec, currentModule, currentScope(), NULL,
                        NULL, sectionFlags, currentIsStatic, currentIsSignal,
                        currentIsSlot, currentIsVirt, (yyvsp[(2) - (17)].text), &(yyvsp[(4) - (17)].signature), (yyvsp[(6) - (17)].number), (yyvsp[(9) - (17)].number), &(yyvsp[(10) - (17)].optflags),
                        (yyvsp[(15) - (17)].codeb), (yyvsp[(16) - (17)].codeb), (yyvsp[(17) - (17)].codeb), (yyvsp[(8) - (17)].throwlist), (yyvsp[(11) - (17)].optsignature), (yyvsp[(13) - (17)].docstr), (yyvsp[(7) - (17)].number), (yyvsp[(14) - (17)].codeb));
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentIsVirt = FALSE;
        }
    break;

  case 418:
#line 3433 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /*
             * It looks like an assignment operator (though we don't bother to
             * check the types) so make sure it is private.
             */
            if (notSkipping())
            {
                classDef *cd = currentScope();

                if (cd == NULL || !(sectionFlags & SECT_IS_PRIVATE))
                    yyerror("Assignment operators may only be defined as private");

                setCannotAssign(cd);
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentIsVirt = FALSE;
        }
    break;

  case 419:
#line 3453 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = currentScope();
                ifaceFileDef *ns_scope;

                /*
                 * If the scope is a namespace then make sure the operator is
                 * handled as a global, but remember it's C++ scope..
                 */
                if (cd != NULL && cd->iff->type == namespace_iface)
                {
                    ns_scope = cd->iff;
                    cd = NULL;
                }
                else
                {
                    ns_scope = NULL;
                }

                applyTypeFlags(currentModule, &(yyvsp[(1) - (17)].memArg), &(yyvsp[(11) - (17)].optflags));

                /* Handle the unary '+' and '-' operators. */
                if ((cd != NULL && (yyvsp[(5) - (17)].signature).nrArgs == 0) || (cd == NULL && (yyvsp[(5) - (17)].signature).nrArgs == 1))
                {
                    if (strcmp((yyvsp[(3) - (17)].text), "__add__") == 0)
                        (yyvsp[(3) - (17)].text) = "__pos__";
                    else if (strcmp((yyvsp[(3) - (17)].text), "__sub__") == 0)
                        (yyvsp[(3) - (17)].text) = "__neg__";
                }

                (yyvsp[(5) - (17)].signature).result = (yyvsp[(1) - (17)].memArg);

                newFunction(currentSpec, currentModule, cd, ns_scope, NULL,
                        sectionFlags, currentIsStatic, currentIsSignal,
                        currentIsSlot, currentIsVirt, (yyvsp[(3) - (17)].text), &(yyvsp[(5) - (17)].signature), (yyvsp[(7) - (17)].number), (yyvsp[(10) - (17)].number), &(yyvsp[(11) - (17)].optflags),
                        (yyvsp[(15) - (17)].codeb), (yyvsp[(16) - (17)].codeb), (yyvsp[(17) - (17)].codeb), (yyvsp[(9) - (17)].throwlist), (yyvsp[(12) - (17)].optsignature), NULL, (yyvsp[(8) - (17)].number), (yyvsp[(14) - (17)].codeb));
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentIsVirt = FALSE;
        }
    break;

  case 420:
#line 3497 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                char *sname;
                classDef *scope = currentScope();

                if (scope == NULL || (yyvsp[(4) - (16)].signature).nrArgs != 0)
                    yyerror("Operator casts must be specified in a class and have no arguments");

                applyTypeFlags(currentModule, &(yyvsp[(2) - (16)].memArg), &(yyvsp[(10) - (16)].optflags));

                switch ((yyvsp[(2) - (16)].memArg).atype)
                {
                case defined_type:
                    sname = NULL;
                    break;

                case bool_type:
                case cbool_type:
                case byte_type:
                case sbyte_type:
                case ubyte_type:
                case short_type:
                case ushort_type:
                case int_type:
                case cint_type:
                case uint_type:
                case long_type:
                case ulong_type:
                case longlong_type:
                case ulonglong_type:
                    sname = "__int__";
                    break;

                case float_type:
                case cfloat_type:
                case double_type:
                case cdouble_type:
                    sname = "__float__";
                    break;

                default:
                    yyerror("Unsupported operator cast");
                }

                if (sname != NULL)
                {
                    (yyvsp[(4) - (16)].signature).result = (yyvsp[(2) - (16)].memArg);

                    newFunction(currentSpec, currentModule, scope, NULL, NULL,
                            sectionFlags, currentIsStatic, currentIsSignal,
                            currentIsSlot, currentIsVirt, sname, &(yyvsp[(4) - (16)].signature), (yyvsp[(6) - (16)].number), (yyvsp[(9) - (16)].number),
                            &(yyvsp[(10) - (16)].optflags), (yyvsp[(14) - (16)].codeb), (yyvsp[(15) - (16)].codeb), (yyvsp[(16) - (16)].codeb), (yyvsp[(8) - (16)].throwlist), (yyvsp[(11) - (16)].optsignature), NULL, (yyvsp[(7) - (16)].number), (yyvsp[(13) - (16)].codeb));
                }
                else
                {
                    argList *al;

                    /* Check it doesn't already exist. */
                    for (al = scope->casts; al != NULL; al = al->next)
                        if (compareScopedNames((yyvsp[(2) - (16)].memArg).u.snd, al->arg.u.snd) == 0)
                            yyerror("This operator cast has already been specified in this class");

                    al = sipMalloc(sizeof (argList));
                    al->arg = (yyvsp[(2) - (16)].memArg);
                    al->next = scope->casts;

                    scope->casts = al;
                }
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentIsVirt = FALSE;
        }
    break;

  case 421:
#line 3575 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__add__";}
    break;

  case 422:
#line 3576 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__sub__";}
    break;

  case 423:
#line 3577 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__mul__";}
    break;

  case 424:
#line 3578 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__truediv__";}
    break;

  case 425:
#line 3579 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__mod__";}
    break;

  case 426:
#line 3580 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__and__";}
    break;

  case 427:
#line 3581 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__or__";}
    break;

  case 428:
#line 3582 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__xor__";}
    break;

  case 429:
#line 3583 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__lshift__";}
    break;

  case 430:
#line 3584 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__rshift__";}
    break;

  case 431:
#line 3585 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__iadd__";}
    break;

  case 432:
#line 3586 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__isub__";}
    break;

  case 433:
#line 3587 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__imul__";}
    break;

  case 434:
#line 3588 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__itruediv__";}
    break;

  case 435:
#line 3589 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__imod__";}
    break;

  case 436:
#line 3590 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__iand__";}
    break;

  case 437:
#line 3591 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__ior__";}
    break;

  case 438:
#line 3592 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__ixor__";}
    break;

  case 439:
#line 3593 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__ilshift__";}
    break;

  case 440:
#line 3594 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__irshift__";}
    break;

  case 441:
#line 3595 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__invert__";}
    break;

  case 442:
#line 3596 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__call__";}
    break;

  case 443:
#line 3597 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__getitem__";}
    break;

  case 444:
#line 3598 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__lt__";}
    break;

  case 445:
#line 3599 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__le__";}
    break;

  case 446:
#line 3600 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__eq__";}
    break;

  case 447:
#line 3601 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__ne__";}
    break;

  case 448:
#line 3602 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__gt__";}
    break;

  case 449:
#line 3603 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {(yyval.text) = "__ge__";}
    break;

  case 450:
#line 3606 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 451:
#line 3609 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 452:
#line 3614 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 453:
#line 3617 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 454:
#line 3622 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 455:
#line 3625 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (2)].number) != 0)
                yyerror("Abstract virtual function '= 0' expected");

            (yyval.number) = TRUE;
        }
    break;

  case 456:
#line 3633 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.optflags).nrFlags = 0;
        }
    break;

  case 457:
#line 3636 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.optflags) = (yyvsp[(2) - (3)].optflags);
        }
    break;

  case 458:
#line 3642 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.optflags).flags[0] = (yyvsp[(1) - (1)].flag);
            (yyval.optflags).nrFlags = 1;
        }
    break;

  case 459:
#line 3646 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* Check there is room. */

            if ((yyvsp[(1) - (3)].optflags).nrFlags == MAX_NR_FLAGS)
                yyerror("Too many optional flags");

            (yyval.optflags) = (yyvsp[(1) - (3)].optflags);

            (yyval.optflags).flags[(yyval.optflags).nrFlags++] = (yyvsp[(3) - (3)].flag);
        }
    break;

  case 460:
#line 3658 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.flag).ftype = bool_flag;
            (yyval.flag).fname = (yyvsp[(1) - (1)].text);
        }
    break;

  case 461:
#line 3662 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.flag) = (yyvsp[(3) - (3)].flag);
            (yyval.flag).fname = (yyvsp[(1) - (3)].text);
        }
    break;

  case 462:
#line 3668 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.flag).ftype = (strchr((yyvsp[(1) - (1)].text), '.') != NULL) ? dotted_name_flag : name_flag;
            (yyval.flag).fvalue.sval = (yyvsp[(1) - (1)].text);
        }
    break;

  case 463:
#line 3672 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.flag).ftype = string_flag;
            (yyval.flag).fvalue.sval = convertFeaturedString((yyvsp[(1) - (1)].text));
        }
    break;

  case 464:
#line 3676 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.flag).ftype = integer_flag;
            (yyval.flag).fvalue.ival = (yyvsp[(1) - (1)].number);
        }
    break;

  case 465:
#line 3682 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 466:
#line 3685 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 467:
#line 3690 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 468:
#line 3693 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 469:
#line 3698 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 470:
#line 3701 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 471:
#line 3706 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 472:
#line 3709 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 473:
#line 3714 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            int a, nrarray, nrarraysize;

            nrarray = nrarraysize = 0;

            for (a = 0; a < (yyvsp[(1) - (1)].signature).nrArgs; ++a)
            {
                argDef *ad = &(yyvsp[(1) - (1)].signature).args[a];

                if (isArray(ad))
                    ++nrarray;

                if (isArraySize(ad))
                    ++nrarraysize;
            }

            if (nrarray != nrarraysize || nrarray > 1)
                yyerror("/Array/ and /ArraySize/ must both be given and at most once");

            (yyval.signature) = (yyvsp[(1) - (1)].signature);
        }
    break;

  case 474:
#line 3737 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* No arguments. */

            (yyval.signature).nrArgs = 0;
        }
    break;

  case 475:
#line 3742 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* The single or first argument. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        }
    break;

  case 476:
#line 3748 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* Check that it wasn't ...(,arg...). */
            if ((yyvsp[(1) - (3)].signature).nrArgs == 0)
                yyerror("First argument of the list is missing");

            /*
             * If this argument has no default value, then the
             * previous one mustn't either.
             */
            if ((yyvsp[(3) - (3)].memArg).defval == NULL && (yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].defval != NULL)
                yyerror("Compulsory argument given after optional argument");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        }
    break;

  case 477:
#line 3771 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (2)].memArg);
            (yyval.memArg).defval = (yyvsp[(2) - (2)].valp);
        }
    break;

  case 478:
#line 3778 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {currentIsSignal = TRUE;}
    break;

  case 480:
#line 3779 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {currentIsSlot = TRUE;}
    break;

  case 483:
#line 3784 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {currentIsStatic = TRUE;}
    break;

  case 488:
#line 3794 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {currentIsVirt = TRUE;}
    break;

  case 491:
#line 3798 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Encoding",
                    "NoSetter",
                    "NoTypeHint",
                    "PyInt",
                    "PyName",
                    "TypeHint",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (5)].optflags), annos);

                newVar(currentSpec, currentModule, (yyvsp[(2) - (5)].text), currentIsStatic, &(yyvsp[(1) - (5)].memArg),
                        &(yyvsp[(3) - (5)].optflags), (yyvsp[(4) - (5)].variable).access_code, (yyvsp[(4) - (5)].variable).get_code, (yyvsp[(4) - (5)].variable).set_code,
                        sectionFlags);
            }

            currentIsStatic = FALSE;
        }
    break;

  case 492:
#line 3822 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.variable).token = 0;
            (yyval.variable).access_code = NULL;
            (yyval.variable).get_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 493:
#line 3828 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.variable) = (yyvsp[(2) - (3)].variable);
        }
    break;

  case 495:
#line 3834 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.variable) = (yyvsp[(1) - (2)].variable);

            switch ((yyvsp[(2) - (2)].variable).token)
            {
            case TK_ACCESSCODE: (yyval.variable).access_code = (yyvsp[(2) - (2)].variable).access_code; break;
            case TK_GETCODE: (yyval.variable).get_code = (yyvsp[(2) - (2)].variable).get_code; break;
            case TK_SETCODE: (yyval.variable).set_code = (yyvsp[(2) - (2)].variable).set_code; break;
            }
        }
    break;

  case 496:
#line 3846 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.variable).token = TK_IF;
        }
    break;

  case 497:
#line 3849 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.variable).token = TK_END;
        }
    break;

  case 498:
#line 3852 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_ACCESSCODE;
                (yyval.variable).access_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).access_code = NULL;
            }

            (yyval.variable).get_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 499:
#line 3867 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_GETCODE;
                (yyval.variable).get_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).get_code = NULL;
            }

            (yyval.variable).access_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 500:
#line 3882 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_SETCODE;
                (yyval.variable).set_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).set_code = NULL;
            }

            (yyval.variable).access_code = NULL;
            (yyval.variable).get_code = NULL;
        }
    break;

  case 501:
#line 3899 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.memArg) = (yyvsp[(2) - (4)].memArg);
            add_derefs(&(yyval.memArg), &(yyvsp[(3) - (4)].memArg));
            (yyval.memArg).argflags |= ARG_IS_CONST | (yyvsp[(4) - (4)].number);
        }
    break;

  case 502:
#line 3904 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            add_derefs(&(yyval.memArg), &(yyvsp[(2) - (3)].memArg));
            (yyval.memArg).argflags |= (yyvsp[(3) - (3)].number);

            /* PyObject * is a synonym for SIP_PYOBJECT. */
            if ((yyvsp[(1) - (3)].memArg).atype == defined_type && strcmp((yyvsp[(1) - (3)].memArg).u.snd->name, "PyObject") == 0 && (yyvsp[(1) - (3)].memArg).u.snd->next == NULL && (yyvsp[(2) - (3)].memArg).nrderefs == 1 && (yyvsp[(3) - (3)].number) == 0)
            {
                (yyval.memArg).atype = pyobject_type;
                (yyval.memArg).nrderefs = 0;
            }
        }
    break;

  case 503:
#line 3918 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            const char *annos[] = {
                "AllowNone",
                "Array",
                "ArraySize",
                "Constrained",
                "DisallowNone",
                "Encoding",
                "GetWrapper",
                "In",
                "KeepReference",
                "NoCopy",
                "Out",
                "PyInt",
                "ResultSize",
                "ScopesStripped",
                "Transfer",
                "TransferBack",
                "TransferThis",
                "TypeHint",
                "TypeHintIn",
                "TypeHintOut",
                "TypeHintValue",
                NULL
            };

            optFlag *of;

            checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            handleKeepReference(&(yyvsp[(3) - (3)].optflags), &(yyval.memArg), currentModule);

            if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "ScopesStripped", opt_integer_flag)) != NULL)
                if (((yyval.memArg).scopes_stripped = of->fvalue.ival) <= 0)
                    yyerror("/ScopesStripped/ must be greater than 0");

            if (getAllowNone(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_ALLOW_NONE;

            if (getDisallowNone(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_DISALLOW_NONE;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"GetWrapper",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_GET_WRAPPER;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Array",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"ArraySize",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY_SIZE;

            if (getTransfer(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_XFERRED;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferThis",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_THIS_XFERRED;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferBack",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_XFERRED_BACK;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"In",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_IN;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Out",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_OUT;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "ResultSize", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_RESULT_SIZE;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "NoCopy", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_NO_COPY;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Constrained",bool_flag) != NULL)
            {
                (yyval.memArg).argflags |= ARG_CONSTRAINED;

                switch ((yyval.memArg).atype)
                {
                case bool_type:
                    (yyval.memArg).atype = cbool_type;
                    break;

                case int_type:
                    (yyval.memArg).atype = cint_type;
                    break;

                case float_type:
                    (yyval.memArg).atype = cfloat_type;
                    break;

                case double_type:
                    (yyval.memArg).atype = cdouble_type;
                    break;

                /* Suppress a compiler warning. */
                default:
                    ;
                }
            }

            applyTypeFlags(currentModule, &(yyval.memArg), &(yyvsp[(3) - (3)].optflags));
            (yyval.memArg).typehint_value = getTypeHintValue(&(yyvsp[(3) - (3)].optflags));
        }
    break;

  case 504:
#line 4026 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 505:
#line 4029 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("References not allowed in a C module");

            (yyval.number) = ARG_IS_REF;
        }
    break;

  case 506:
#line 4037 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.memArg).nrderefs = 0;
        }
    break;

  case 507:
#line 4040 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            add_new_deref(&(yyval.memArg), &(yyvsp[(1) - (3)].memArg), TRUE);
        }
    break;

  case 508:
#line 4043 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            add_new_deref(&(yyval.memArg), &(yyvsp[(1) - (2)].memArg), FALSE);
        }
    break;

  case 509:
#line 4048 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = defined_type;
            (yyval.memArg).u.snd = (yyvsp[(1) - (1)].scpvalp);

            /* Try and resolve typedefs as early as possible. */
            resolveAnyTypedef(currentSpec, &(yyval.memArg));
        }
    break;

  case 510:
#line 4056 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            templateDef *td;

            td = sipMalloc(sizeof(templateDef));
            td->fqname = (yyvsp[(1) - (4)].scpvalp);
            td->types = (yyvsp[(3) - (4)].signature);

            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = template_type;
            (yyval.memArg).u.td = td;
        }
    break;

  case 511:
#line 4067 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));

            /* In a C module all structures must be defined. */
            if (currentSpec -> genc)
            {
                (yyval.memArg).atype = defined_type;
                (yyval.memArg).u.snd = (yyvsp[(2) - (2)].scpvalp);
            }
            else
            {
                (yyval.memArg).atype = struct_type;
                (yyval.memArg).u.sname = (yyvsp[(2) - (2)].scpvalp);
            }
        }
    break;

  case 512:
#line 4082 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));

            /* In a C module all unions must be defined. */
            if (currentSpec->genc)
            {
                (yyval.memArg).atype = defined_type;
                (yyval.memArg).u.snd = (yyvsp[(2) - (2)].scpvalp);
            }
            else
            {
                (yyval.memArg).atype = union_type;
                (yyval.memArg).u.sname = (yyvsp[(2) - (2)].scpvalp);
            }
        }
    break;

  case 513:
#line 4097 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ushort_type;
        }
    break;

  case 514:
#line 4101 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = short_type;
        }
    break;

  case 515:
#line 4105 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = uint_type;
        }
    break;

  case 516:
#line 4109 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = uint_type;
        }
    break;

  case 517:
#line 4113 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = int_type;
        }
    break;

  case 518:
#line 4117 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = long_type;
        }
    break;

  case 519:
#line 4121 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ulong_type;
        }
    break;

  case 520:
#line 4125 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = longlong_type;
        }
    break;

  case 521:
#line 4129 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ulonglong_type;
        }
    break;

  case 522:
#line 4133 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = float_type;
        }
    break;

  case 523:
#line 4137 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = double_type;
        }
    break;

  case 524:
#line 4141 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = bool_type;
        }
    break;

  case 525:
#line 4145 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = sstring_type;
        }
    break;

  case 526:
#line 4149 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ustring_type;
        }
    break;

  case 527:
#line 4153 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = string_type;
        }
    break;

  case 528:
#line 4157 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = wstring_type;
        }
    break;

  case 529:
#line 4161 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = void_type;
        }
    break;

  case 530:
#line 4165 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyobject_type;
        }
    break;

  case 531:
#line 4169 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pytuple_type;
        }
    break;

  case 532:
#line 4173 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pylist_type;
        }
    break;

  case 533:
#line 4177 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pydict_type;
        }
    break;

  case 534:
#line 4181 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pycallable_type;
        }
    break;

  case 535:
#line 4185 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyslice_type;
        }
    break;

  case 536:
#line 4189 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pytype_type;
        }
    break;

  case 537:
#line 4193 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pybuffer_type;
        }
    break;

  case 538:
#line 4197 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (abiVersion < ABI_13_0)
                yyerror("SIP_PYENUM is only supported for ABI v13 and later");

            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyenum_type;
        }
    break;

  case 539:
#line 4204 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = hash_type;
        }
    break;

  case 540:
#line 4208 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ssize_type;
        }
    break;

  case 541:
#line 4212 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = size_type;
        }
    break;

  case 542:
#line 4216 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ellipsis_type;
        }
    break;

  case 543:
#line 4222 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* The single or first type. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        }
    break;

  case 544:
#line 4228 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* Check there is nothing after an ellipsis. */
            if ((yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        }
    break;

  case 545:
#line 4244 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            (yyval.throwlist) = NULL;
        }
    break;

  case 546:
#line 4247 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* noexcept is a synonym for throw(). */
            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist)->nrArgs = 0;
        }
    break;

  case 547:
#line 4252 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Exceptions not allowed in a C module");

            (yyval.throwlist) = (yyvsp[(3) - (4)].throwlist);
        }
    break;

  case 548:
#line 4260 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* Empty list so use a blank. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 0;
        }
    break;

  case 549:
#line 4266 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* The only or first exception. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 1;
            (yyval.throwlist) -> args[0] = findException(currentSpec, (yyvsp[(1) - (1)].scpvalp), FALSE);
        }
    break;

  case 550:
#line 4273 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"
    {
            /* Check that it wasn't ...(,arg...). */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == 0)
                yyerror("First exception of throw specifier is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.throwlist) = (yyvsp[(1) - (3)].throwlist);
            (yyval.throwlist) -> args[(yyval.throwlist) -> nrArgs++] = findException(currentSpec, (yyvsp[(3) - (3)].scpvalp), FALSE);
        }
    break;


/* Line 1267 of yacc.c.  */
#line 7765 "/Users/phil/hg/sip/code_generator/parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 4289 "/Users/phil/hg/sip/code_generator/metasrc/parser.y"



/*
 * Parse the specification.
 */
void parse(sipSpec *spec, FILE *fp, char *filename, int strict,
        stringList **tsl, stringList *bsl, stringList **xfl, int protHack,
        stringList **sip_files)
{
    classTmplDef *tcd;

    initialiseLexer();

    /* Initialise the spec. */
 
    memset(spec, 0, sizeof (sipSpec));
    spec->genc = -1;

    currentSpec = spec;
    strictParse = strict;
    backstops = bsl;
    neededQualifiers = *tsl;
    excludedQualifiers = *xfl;
    currentModule = NULL;
    currentMappedType = NULL;
    currentIsVirt = FALSE;
    currentCtorIsExplicit = FALSE;
    currentIsStatic = FALSE;
    currentIsSignal = FALSE;
    currentIsSlot = FALSE;
    currentIsTemplate = FALSE;
    previousFile = NULL;
    stackPtr = 0;
    currentPlatforms = NULL;
    currentScopeIdx = 0;
    sectionFlags = 0;
    defaultKwArgs = NoKwArgs;
    makeProtPublic = protHack;
    mainModuleSipFiles = sip_files;

    newModule(fp, filename);
    spec->module = currentModule;

    yyparse();

    handleEOF();
    handleEOM();

    /*
     * Go through each template class and remove it from the list of classes.
     */
    for (tcd = spec->classtemplates; tcd != NULL; tcd = tcd->next)
    {
        classDef **cdp;

        for (cdp = &spec->classes; *cdp != NULL; cdp = &(*cdp)->next)
            if (*cdp == tcd->cd)
            {
                ifaceFileDef **ifdp;

                /* Remove the interface file as well. */
                for (ifdp = &spec->ifacefiles; *ifdp != NULL; ifdp = &(*ifdp)->next)
                    if (*ifdp == tcd->cd->iff)
                    {
                        *ifdp = (*ifdp)->next;
                        break;
                    }

                *cdp = (*cdp)->next;
                break;
            }
    }

    /* These may have been updated from imported bindings. */
    *tsl = neededQualifiers;
    *xfl = excludedQualifiers;
}


/*
 * Tell the parser that a complete file has now been read.
 */
void parserEOF(const char *name, parserContext *pc)
{
    previousFile = sipStrdup(name);
    currentContext = *pc;
}


/*
 * Append a class definition to a class list if it doesn't already appear.
 * Append is needed specifically for the list of super-classes because the
 * order is important to Python.
 */
void appendToClassList(classList **clp,classDef *cd)
{
    classList *new;

    /* Find the end of the list. */

    while (*clp != NULL)
    {
        if ((*clp) -> cd == cd)
            return;

        clp = &(*clp) -> next;
    }

    new = sipMalloc(sizeof (classList));

    new -> cd = cd;
    new -> next = NULL;

    *clp = new;
}


/*
 * Create a new module for the current specification and make it current.
 */
static void newModule(FILE *fp, const char *filename)
{
    moduleDef *mod;

    parseFile(fp, filename, currentModule, FALSE);

    mod = allocModule();
    mod->file = filename;

    if (currentModule != NULL)
        mod->defexception = currentModule->defexception;

    currentModule = mod;
}


/*
 * Allocate and initialise the memory for a new module.
 */
static moduleDef *allocModule(void)
{
    moduleDef *newmod, **tailp;

    newmod = sipMalloc(sizeof (moduleDef));

    newmod->defdocstringfmt = raw;
    newmod->encoding = no_type;
    newmod->next_key = -1;

    /*
     * The consolidated module support needs these to be in order that they
     * appeared.
     */
    for (tailp = &currentSpec->modules; *tailp != NULL; tailp = &(*tailp)->next)
        ;

    *tailp = newmod;

    return newmod;
}


/*
 * Switch to parsing a new file.
 */
static void parseFile(FILE *fp, const char *name, moduleDef *prevmod,
        int optional)
{
    parserContext pc;

    pc.filename = name;
    pc.ifdepth = stackPtr;
    pc.prevmod = prevmod;

    if (setInputFile(fp, &pc, optional))
    {
        currentContext = pc;

        /* Save the name of the file if this is the main module. */
        if (prevmod == NULL)
            appendString(mainModuleSipFiles, sipStrdup(name));
    }
}


/*
 * Find an interface file, or create a new one.
 */
ifaceFileDef *findIfaceFile(sipSpec *pt, moduleDef *mod, scopedNameDef *fqname,
        ifaceFileType iftype, argDef *ad)
{
    ifaceFileDef *iff;

    /* See if the name is already used. */

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (compareScopedNames(iff->fqcname, fqname) != 0)
            continue;

        /*
         * They must be the same type except that we allow a class if we want
         * an exception.  This is because we allow classes to be used before
         * they are defined.
         */
        if (iff->type != iftype)
            if (iftype != exception_iface || iff->type != class_iface)
                yyerror("A class, exception, namespace or mapped type has already been defined with the same name");

        /* Ignore an external class declared in another module. */
        if (iftype == class_iface && iff->module != mod)
        {
            classDef *cd;

            for (cd = pt->classes; cd != NULL; cd = cd->next)
                if (cd->iff == iff)
                    break;

            if (cd != NULL && iff->module != NULL && isExternal(cd))
                continue;
        }

        /*
         * If this is a mapped type with the same name defined in a different
         * module, then check that this type isn't the same as any of the
         * mapped types defined in that module.
         */
        if (iftype == mappedtype_iface && iff->module != mod)
        {
            mappedTypeDef *mtd;

            /*
             * This is a bit of a cheat.  With consolidated modules it's
             * possible to have two implementations of a mapped type in
             * different branches of the module hierarchy.  We assume that, if
             * there really are multiple implementations in the same branch,
             * then it will be picked up in a non-consolidated build.
             */
            if (isConsolidated(pt->module))
                continue;

            for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
            {
                if (mtd->iff != iff)
                    continue;

                if (ad->atype != template_type ||
                    mtd->type.atype != template_type ||
                    sameBaseType(ad, &mtd->type))
                    yyerror("Mapped type has already been defined in another module");
            }

            /*
             * If we got here then we have a mapped type based on an existing
             * template, but with unique parameters.  We don't want to use
             * interface files from other modules, so skip this one.
             */

            continue;
        }

        /* Ignore a namespace defined in another module. */
        if (iftype == namespace_iface && iff->module != mod)
            continue;

        return iff;
    }

    iff = sipMalloc(sizeof (ifaceFileDef));

    iff->name = cacheName(pt, scopedNameToString(fqname));

    /*
     * Note that we assume that the type (ie. class vs. mapped type vs.
     * exception) will be the same across all platforms.
     */
    iff->platforms = currentPlatforms;

    iff->type = iftype;
    iff->ifacenr = -1;
    iff->fqcname = fqname;
    iff->module = NULL;
    iff->hdrcode = NULL;
    iff->used = NULL;
    iff->file_extension = NULL;
    iff->next = pt->ifacefiles;

    pt->ifacefiles = iff;

    return iff;
}


/*
 * Find a class definition in a parse tree.
 */
static classDef *findClass(sipSpec *pt, ifaceFileType iftype,
        scopedNameDef *fqname, int tmpl_arg)
{
    return findClassWithInterface(pt,
            findIfaceFile(pt, currentModule, fqname, iftype, NULL), tmpl_arg);
}


/*
 * Find a class definition given an existing interface file.
 */
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff,
        int tmpl_arg)
{
    classDef *cd;

    for (cd = pt->classes; cd != NULL; cd = cd->next)
        if (cd->iff == iff)
        {
            if (isTemplateArg(cd) && !tmpl_arg)
                resetTemplateArg(cd);

            return cd;
        }

    /* Create a new one. */
    cd = sipMalloc(sizeof (classDef));

    if (tmpl_arg)
        setTemplateArg(cd);

    cd->iff = iff;
    cd->pyname = cacheName(pt, classBaseName(cd));
    cd->next = pt->classes;

    pt->classes = cd;

    return cd;
}


/*
 * Add an interface file to an interface file list if it isn't already there.
 */
void appendToIfaceFileList(ifaceFileList **ifflp, ifaceFileDef *iff)
{
    /* Make sure we don't try to add an interface file to its own list. */
    if (&iff->used != ifflp)
    {
        ifaceFileList *iffl;

        while ((iffl = *ifflp) != NULL)
        {
            /* Don't bother if it is already there. */
            if (iffl->iff == iff)
                return;

            ifflp = &iffl -> next;
        }

        iffl = sipMalloc(sizeof (ifaceFileList));

        iffl->iff = iff;
        iffl->next = NULL;

        *ifflp = iffl;
    }
}


/*
 * Find an undefined (or create a new) exception definition in a parse tree.
 */
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new)
{
    exceptionDef *xd, **tail;
    ifaceFileDef *iff;
    classDef *cd;

    iff = findIfaceFile(pt, currentModule, fqname, exception_iface, NULL);

    /* See if it is an existing one. */
    for (xd = pt->exceptions; xd != NULL; xd = xd->next)
        if (xd->iff == iff)
            return xd;

    /*
     * If it is an exception interface file then we have never seen this name
     * before.  We require that exceptions are defined before being used, but
     * don't make the same requirement of classes (for reasons of backwards
     * compatibility).  Therefore the name must be reinterpreted as a (as yet
     * undefined) class.
     */
    if (new)
    {
        if (iff->type == exception_iface)
            cd = NULL;
        else
            yyerror("There is already a class with the same name or the exception has been used before being defined");
    }
    else
    {
        if (iff->type == exception_iface)
            iff->type = class_iface;

        cd = findClassWithInterface(pt, iff, FALSE);
    }

    /* Create a new one. */
    xd = sipMalloc(sizeof (exceptionDef));

    xd->exceptionnr = -1;
    xd->needed = FALSE;
    xd->iff = iff;
    xd->pyname = NULL;
    xd->cd = cd;
    xd->bibase = NULL;
    xd->base = NULL;
    xd->raisecode = NULL;
    xd->next = NULL;

    /* Append it to the list. */
    for (tail = &pt->exceptions; *tail != NULL; tail = &(*tail)->next)
        ;

    *tail = xd;

    return xd;
}


/*
 * Find an undefined (or create a new) class definition in a parse tree.
 */
static classDef *newClass(sipSpec *pt, ifaceFileType iftype,
        scopedNameDef *fqname, const char *virt_error_handler,
        typeHintDef *typehint_in, typeHintDef *typehint_out,
        const char *typehint_value)
{
    int flags;
    classDef *cd, *scope;
    codeBlockList *hdrcode;

    if (sectionFlags & SECT_IS_PRIVATE)
        yyerror("Classes, structs and namespaces must be in the public or protected sections");

    flags = 0;

    if ((scope = currentScope()) != NULL)
    {
        if (sectionFlags & SECT_IS_PROT && !makeProtPublic)
        {
            flags = CLASS_IS_PROTECTED;

            if (scope->iff->type == class_iface)
                setNeedsShadow(scope);
        }

        /* Header code from outer scopes is also included. */
        hdrcode = scope->iff->hdrcode;
    }
    else
        hdrcode = NULL;

    if (pt -> genc)
    {
        /* C structs are always global types. */
        while (fqname -> next != NULL)
            fqname = fqname -> next;

        scope = NULL;
    }

    cd = findClass(pt, iftype, fqname, FALSE);

    /* Check it hasn't already been defined. */
    if (iftype != namespace_iface && cd->iff->module != NULL)
        yyerror("The struct/class/union has already been defined");

    /* Complete the initialisation. */
    cd->classflags |= flags;
    cd->ecd = scope;
    cd->iff->module = currentModule;
    cd->virt_error_handler = virt_error_handler;
    cd->typehint_in = typehint_in;
    cd->typehint_out = typehint_out;
    cd->typehint_value = typehint_value;

    if (currentIsTemplate)
        setIsTemplateClass(cd);

    appendCodeBlockList(&cd->iff->hdrcode, hdrcode);

    /* See if it is a namespace extender. */
    if (iftype == namespace_iface)
    {
        classDef *ns;

        for (ns = pt->classes; ns != NULL; ns = ns->next)
        {
            if (ns == cd)
                continue;

            if (ns->iff->type != namespace_iface)
                continue;

            if (compareScopedNames(ns->iff->fqcname, fqname) != 0)
                continue;

            cd->real = ns;

            if (inMainModule())
                ns->iff->needed = TRUE;

            break;
        }
    }

    return cd;
}


/*
 * Tidy up after finishing a class definition.
 */
static void finishClass(sipSpec *pt, moduleDef *mod, classDef *cd,
        optFlags *of)
{
    const char *pyname;
    optFlag *flg;

    /* Get the Python name and see if it is different to the C++ name. */
    pyname = getPythonName(mod, of, classBaseName(cd));

    cd->pyname = NULL;
    checkAttributes(pt, mod, cd->ecd, NULL, pyname, FALSE);
    cd->pyname = cacheName(pt, pyname);
    cd->no_typehint = getNoTypeHint(of);

    if ((flg = getOptFlag(of, "Metatype", dotted_name_flag)) != NULL)
        cd->metatype = cacheName(pt, flg->fvalue.sval);

    if ((flg = getOptFlag(of, "Supertype", dotted_name_flag)) != NULL)
        cd->supertype = cacheName(pt, flg->fvalue.sval);

    if (getOptFlag(of, "ExportDerived", bool_flag) != NULL)
        setExportDerived(cd);

    if (getOptFlag(of, "Mixin", bool_flag) != NULL)
        setMixin(cd);

    if ((flg = getOptFlag(of, "FileExtension", string_flag)) != NULL)
        cd->iff->file_extension = flg->fvalue.sval;

    if ((flg = getOptFlag(of, "PyQtFlagsEnums", string_list_flag)) != NULL)
    {
        if (!pluginPyQt5(pt))
            yyerror("/PyQtFlagsEnums/ is only supported for PyQt5");

        cd->pyqt_flags_enums = flg->fvalue.slval;
        cd->pyqt_flags = 1;
    }

    if ((flg = getOptFlag(of, "PyQtFlags", integer_flag)) != NULL)
    {
        /* This is only used by versions before v5.12. */
        if (!pluginPyQt5(pt))
            yyerror("/PyQtFlags/ is only supported for PyQt5");

        cd->pyqt_flags = flg->fvalue.ival;
    }

    if (getOptFlag(of, "PyQtNoQMetaObject", bool_flag) != NULL)
        setPyQtNoQMetaObject(cd);

    if ((flg = getOptFlag(of, "PyQtInterface", string_flag)) != NULL)
        cd->pyqt_interface = flg->fvalue.sval;

    if (isOpaque(cd))
    {
        if (getOptFlag(of, "External", bool_flag) != NULL)
            setIsExternal(cd);
    }
    else
    {
        int seq_might, seq_not, default_to_sequence;
        memberDef *md;

        if (getOptFlag(of, "NoDefaultCtors", bool_flag) != NULL)
            setNoDefaultCtors(cd);

        if (cd -> ctors == NULL)
        {
            if (!noDefaultCtors(cd))
            {
                /* Provide a default ctor. */

                cd->ctors = sipMalloc(sizeof (ctorDef));
 
                cd->ctors->ctorflags = SECT_IS_PUBLIC;
                cd->ctors->pysig.result.atype = void_type;
                cd->ctors->cppsig = &cd->ctors->pysig;

                cd->defctor = cd->ctors;

                setCanCreate(cd);
            }
        }
        else if (cd -> defctor == NULL)
        {
            ctorDef *ct, *last = NULL;

            for (ct = cd -> ctors; ct != NULL; ct = ct -> next)
            {
                if (!isPublicCtor(ct))
                    continue;

                if (ct -> pysig.nrArgs == 0 || ct -> pysig.args[0].defval != NULL)
                {
                    cd -> defctor = ct;
                    break;
                }

                if (last == NULL)
                    last = ct;
            }

            /* The last resort is the first public ctor. */
            if (cd->defctor == NULL)
                cd->defctor = last;
        }

        if (getDeprecated(of))
            setIsDeprecatedClass(cd);

        if (cd->convtocode != NULL && getAllowNone(of))
            setClassHandlesNone(cd);

        if (getOptFlag(of,"Abstract",bool_flag) != NULL)

        {
            setIsAbstractClass(cd);
            setIsIncomplete(cd);
            resetCanCreate(cd);
        }

        /* We assume a public dtor if nothing specific was provided. */
        if (!isDtor(cd))
            setIsPublicDtor(cd);

        if (getOptFlag(of, "DelayDtor", bool_flag) != NULL)
        {
            setIsDelayedDtor(cd);
            setHasDelayedDtors(mod);
        }

        /*
         * There are subtle differences between the add and concat methods and
         * the multiply and repeat methods.  The number versions can have their
         * operands swapped and may return NotImplemented.  If the user has
         * used the /Numeric/ annotation or there are other numeric operators
         * then we use add/multiply.  Otherwise, if the user has used the
         * /Sequence/ annotation or there are indexing operators then we use
         * concat/repeat.
         */
        seq_might = seq_not = FALSE;

        for (md = cd->members; md != NULL; md = md->next)
            switch (md->slot)
            {
            case getitem_slot:
            case setitem_slot:
            case delitem_slot:
                /* This might be a sequence. */
                seq_might = TRUE;
                break;

            case sub_slot:
            case isub_slot:
            case mod_slot:
            case imod_slot:
            case floordiv_slot:
            case ifloordiv_slot:
            case truediv_slot:
            case itruediv_slot:
            case pos_slot:
            case neg_slot:
                /* This is definately not a sequence. */
                seq_not = TRUE;
                break;

            /* Suppress a compiler warning. */
            default:
                ;
            }

        default_to_sequence = (!seq_not && seq_might);

        for (md = cd->members; md != NULL; md = md->next)
        {
            /* Ignore if it is explicitly numeric. */
            if (isNumeric(md))
                continue;

            if (isSequence(md) || default_to_sequence)
                switch (md->slot)
                {
                case add_slot:
                    md->slot = concat_slot;
                    break;

                case iadd_slot:
                    md->slot = iconcat_slot;
                    break;

                case mul_slot:
                    md->slot = repeat_slot;
                    break;

                case imul_slot:
                    md->slot = irepeat_slot;
                    break;

                /* Suppress a compiler warning. */
                default:
                    ;
                }
        }
    }

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsUsedName(cd->pyname);
    }
}


/*
 * Return the encoded name of a template (ie. including its argument types) as
 * a scoped name.
 */
scopedNameDef *encodedTemplateName(templateDef *td)
{
    int a;
    scopedNameDef *snd;

    snd = copyScopedName(td->fqname);

    for (a = 0; a < td->types.nrArgs; ++a)
    {
        char buf[50];
        int flgs;
        scopedNameDef *arg_snd;
        argDef *ad = &td->types.args[a];

        flgs = 0;

        if (isConstArg(ad))
            flgs += 1;

        if (isReference(ad))
            flgs += 2;

        /* We use numbers so they don't conflict with names. */
        sprintf(buf, "%02d%d%d", ad->atype, flgs, ad->nrderefs);

        switch (ad->atype)
        {
        case defined_type:
            arg_snd = copyScopedName(ad->u.snd);
            break;

        case template_type:
            arg_snd = encodedTemplateName(ad->u.td);
            break;

        case struct_type:
            arg_snd = copyScopedName(ad->u.sname);
            break;

        default:
            arg_snd = NULL;
        }

        /*
         * Replace the first element of the argument name with a copy with the
         * encoding prepended.
         */
        if (arg_snd != NULL)
            arg_snd->name = concat(buf, arg_snd->name, NULL);
        else
            arg_snd = text2scopePart(sipStrdup(buf));

        appendScopedName(&snd, arg_snd);
    }

    return snd;
}


/*
 * Create a new mapped type.
 */
static mappedTypeDef *newMappedType(sipSpec *pt, argDef *ad, optFlags *of)
{
    mappedTypeDef *mtd;
    scopedNameDef *snd;
    ifaceFileDef *iff;
    const char *cname;

    /* Check that the type is one we want to map. */
    switch (ad->atype)
    {
    case defined_type:
        snd = ad->u.snd = fullyQualifiedName(ad->u.snd);
        cname = scopedNameTail(snd);
        break;

    case template_type:
        ad->u.td->fqname = fullyQualifiedName(ad->u.td->fqname);
        snd = encodedTemplateName(ad->u.td);
        cname = NULL;
        break;

    case struct_type:
        snd = ad->u.sname = fullyQualifiedName(ad->u.sname);
        cname = scopedNameTail(snd);
        break;

    default:
        yyerror("Invalid type for %MappedType");
    }

    iff = findIfaceFile(pt, currentModule, snd, mappedtype_iface, ad);

    /* Check it hasn't already been defined. */
    for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
        if (mtd->iff == iff)
        {
            /*
             * We allow types based on the same template but with different
             * arguments.
             */
            if (ad->atype != template_type || sameBaseType(ad, &mtd->type))
                yyerror("Mapped type has already been defined in this module");
        }

    /* The module may not have been set yet. */
    iff->module = currentModule;

    /* Create a new mapped type. */
    mtd = allocMappedType(pt, ad);

    if (cname != NULL)
        mtd->pyname = cacheName(pt, getPythonName(currentModule, of, cname));

    mappedTypeAnnos(pt, mtd, of);

    mtd->iff = iff;
    mtd->next = pt->mappedtypes;

    pt->mappedtypes = mtd;

    if (inMainModule())
    {
        setIsUsedName(mtd->cname);

        if (mtd->pyname)
            setIsUsedName(mtd->pyname);
    }

    return mtd;
}


/*
 * Allocate, initialise and return a mapped type structure.
 */
mappedTypeDef *allocMappedType(sipSpec *pt, argDef *type)
{
    mappedTypeDef *mtd;

    mtd = sipMalloc(sizeof (mappedTypeDef));

    mtd->type = *type;
    mtd->type.argflags = 0;
    mtd->type.nrderefs = 0;

    mtd->cname = cacheName(pt, type2string(&mtd->type));

    /* Keep track of the original definition as it gets copied. */
    mtd->real = mtd;

    return mtd;
}


/*
 * Create a new enum.
 */
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, mappedTypeDef *mt_scope,
        char *name, optFlags *optflgs, int flags, int isscoped)
{
    enumDef *ed;
    classDef *c_scope;
    ifaceFileDef *scope;
    optFlag *of;

    if (mt_scope != NULL)
    {
        scope = mt_scope->iff;
        c_scope = NULL;
    }
    else
    {
        if ((c_scope = currentScope()) != NULL)
            scope = c_scope->iff;
        else
            scope = NULL;
    }

    ed = sipMalloc(sizeof (enumDef));

    if (name != NULL)
    {
        ed->pyname = cacheName(pt, getPythonName(mod, optflgs, name));
        checkAttributes(pt, mod, c_scope, mt_scope, ed->pyname->text, FALSE);

        ed->fqcname = text2scopedName(scope, name);
        ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));

        if (inMainModule())
        {
            setIsUsedName(ed->pyname);
            setIsUsedName(ed->cname);
        }
    }
    else
    {
        ed->pyname = NULL;
        ed->fqcname = NULL;
        ed->cname = NULL;
    }

    if (flags & SECT_IS_PROT)
    {
        if (makeProtPublic)
        {
            flags &= ~SECT_IS_PROT;
            flags |= SECT_IS_PUBLIC;
        }
        else if (c_scope != NULL)
        {
            setNeedsShadow(c_scope);
        }
    }

    ed->enumflags = flags;
    ed->no_typehint = getNoTypeHint(optflgs);
    ed->enumnr = -1;
    ed->ecd = c_scope;
    ed->emtd = mt_scope;
    ed->module = mod;
    ed->members = NULL;
    ed->slots = NULL;
    ed->overs = NULL;
    ed->platforms = currentPlatforms;
    ed->next = pt -> enums;

    pt->enums = ed;

    if (getOptFlag(optflgs, "NoScope", bool_flag) != NULL)
        setIsNoScope(ed);

    if (isscoped)
        setIsScopedEnum(ed);

    if ((of = getOptFlag(optflgs, "BaseType", name_flag)) != NULL)
    {
        const char *base_type;

        if (abiVersion < ABI_13_0)
            yyerror("/BaseType/ is only supported for ABI v13 and later");

        base_type = of->fvalue.sval;

        if (strcmp(base_type, "Enum") == 0)
            setIsEnumEnum(ed);
        else if (strcmp(base_type, "Flag") == 0)
            setIsEnumFlag(ed);
        else if (strcmp(base_type, "IntEnum") == 0)
            setIsEnumIntEnum(ed);
        else if (strcmp(base_type, "IntFlag") == 0)
            setIsEnumIntFlag(ed);
        else
            yyerror("Invalid /BaseType/");
    }

    return ed;
}


/*
 * Get the type values and (optionally) the type names for substitution in
 * handwritten code.
 */
void appendTypeStrings(scopedNameDef *ename, signatureDef *patt, signatureDef *src, signatureDef *known, scopedNameDef **names, scopedNameDef **values)
{
    int a;

    for (a = 0; a < patt->nrArgs; ++a)
    {
        argDef *pad = &patt->args[a];

        if (pad->atype == defined_type)
        {
            char *nam = NULL, *val;
            argDef *sad;

            /*
             * If the type names are already known then check that this is one
             * of them.
             */
            if (known == NULL)
                nam = scopedNameTail(pad->u.snd);
            else if (pad->u.snd->next == NULL)
            {
                int k;

                for (k = 0; k < known->nrArgs; ++k)
                {
                    /* Skip base types. */
                    if (known->args[k].atype != defined_type)
                        continue;

                    if (strcmp(pad->u.snd->name, known->args[k].u.snd->name) == 0)
                    {
                        nam = pad->u.snd->name;
                        break;
                    }
                }
            }

            if (nam == NULL)
                continue;

            /* Add the name. */
            appendScopedName(names, text2scopePart(nam));

            /*
             * Add the corresponding value.  For defined types we don't want 
             * any indirection or references.
             */
            sad = &src->args[a];

            if (sad->atype == defined_type)
                val = scopedNameToString(sad->u.snd);
            else
                val = type2string(sad);

            /* We do want const. */
            if (isConstArg(sad))
            {
                char *const_val = sipStrdup("const ");

                append(&const_val, val);
                free(val);

                val = const_val;
            }

            appendScopedName(values, text2scopePart(val));
        }
        else if (pad->atype == template_type)
        {
            argDef *sad = &src->args[a];

            /* These checks shouldn't be necessary, but... */
            if (sad->atype == template_type && pad->u.td->types.nrArgs == sad->u.td->types.nrArgs)
                appendTypeStrings(ename, &pad->u.td->types, &sad->u.td->types, known, names, values);
        }
    }
}


/*
 * Convert a type to a string on the heap.  The string will use the minimum
 * whitespace while still remaining valid C++.
 */
static char *type2string(argDef *ad)
{
    int i, on_heap = FALSE;
    int nr_derefs = ad->nrderefs;
    int is_reference = isReference(ad);
    char *s;

    /* Use the original type if possible. */
    if (ad->original_type != NULL && !noTypeName(ad->original_type))
    {
        s = scopedNameToString(ad->original_type->fqname);
        on_heap = TRUE;

        nr_derefs -= ad->original_type->type.nrderefs;

        if (isReference(&ad->original_type->type))
            is_reference = FALSE;
    }
    else
        switch (ad->atype)
        {
        case template_type:
            {
                templateDef *td = ad->u.td;

                s = scopedNameToString(td->fqname);
                append(&s, "<");

                for (i = 0; i < td->types.nrArgs; ++i)
                {
                    char *sub_type = type2string(&td->types.args[i]);

                    if (i > 0)
                        append(&s, ",");

                    append(&s, sub_type);
                    free(sub_type);
                }

                if (s[strlen(s) - 1] == '>')
                    append(&s, " >");
                else
                    append(&s, ">");

                on_heap = TRUE;
                break;
            }

        case struct_type:
            s = scopedNameToString(ad->u.sname);
            on_heap = TRUE;
            break;

        case defined_type:
            s = scopedNameToString(ad->u.snd);
            on_heap = TRUE;
            break;

        case ubyte_type:
        case ustring_type:
            s = "unsigned char";
            break;

        case byte_type:
        case ascii_string_type:
        case latin1_string_type:
        case utf8_string_type:
        case string_type:
            s = "char";
            break;

        case sbyte_type:
        case sstring_type:
            s = "signed char";
            break;

        case wstring_type:
            s = "wchar_t";
            break;

        case ushort_type:
            s = "unsigned short";
            break;

        case short_type:
            s = "short";
            break;

        case uint_type:
            s = "uint";
            break;

        case int_type:
        case cint_type:
            s = "int";
            break;

        case ulong_type:
            s = "unsigned long";
            break;

        case long_type:
            s = "long";
            break;

        case ulonglong_type:
            s = "unsigned long long";
            break;

        case longlong_type:
            s = "long long";
            break;

        case float_type:
        case cfloat_type:
            s = "float";
            break;

        case double_type:
        case cdouble_type:
            s = "double";
            break;

        case bool_type:
        case cbool_type:
            s = "bool";
            break;

        case void_type:
            s = "void";
            break;

        case capsule_type:
            s = "void *";
            break;

        case ssize_type:
            s = "Py_ssize_t";
            break;

        case size_type:
            s = "size_t";
            break;

        case hash_type:
            s = "Py_hash_t";
            break;

        default:
            fatal("Unsupported type argument to type2string(): %d\n", ad->atype);
        }

    /* Make sure the string is on the heap. */
    if (!on_heap)
        s = sipStrdup(s);

    while (nr_derefs-- > 0)
        append(&s, "*");

    if (is_reference)
        append(&s, "&");

    return s;
}


/*
 * Remove any explicit global scope.
 */
scopedNameDef *removeGlobalScope(scopedNameDef *snd)
{
    return ((snd != NULL && snd->name[0] == '\0') ? snd->next : snd);
}


/*
 * Convert a scoped name to a string on the heap.
 */
static char *scopedNameToString(scopedNameDef *name)
{
    static const char scope_string[] = "::";
    size_t len;
    scopedNameDef *snd;
    char *s, *dp;

    /*
     * We don't want the global scope (which probably should always be there,
     * but we check anyway).
     */
    name = removeGlobalScope(name);

    /* Work out the length of buffer needed. */
    len = 0;

    for (snd = name; snd != NULL; snd = snd->next)
    {
        len += strlen(snd->name);

        if (snd->next != NULL)
        {
            /* Ignore the encoded part of template names. */
            if (isdigit(snd->next->name[0]))
                break;

            len += strlen(scope_string);
        }
    }

    /* Allocate and populate the buffer. */
    dp = s = sipMalloc(len + 1);

    for (snd = name; snd != NULL; snd = snd->next)
    {
        strcpy(dp, snd->name);
        dp += strlen(snd->name);

        if (snd->next != NULL)
        {
            /* Ignore the encoded part of template names. */
            if (isdigit(snd->next->name[0]))
                break;

            strcpy(dp, scope_string);
            dp += strlen(scope_string);
        }
    }

    return s;
}


/*
 * Instantiate a class template.
 */
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod,
        classDef *scope, scopedNameDef *fqname, classTmplDef *tcd,
        templateDef *td, const char *pyname, int use_template_name,
        docstringDef *docstring)
{
    scopedNameDef *type_names, *type_values;
    classDef *cd;
    ctorDef *oct, **cttail;
    argDef *ad;
    ifaceFileList *iffl, **used;
    classList *cl;
    stringList *sl;

    type_names = type_values = NULL;
    appendTypeStrings(classFQCName(tcd->cd), &tcd->sig, &td->types, NULL, &type_names, &type_values);

    /*
     * Add a mapping from the template name to the instantiated name.  If we
     * have got this far we know there is room for it.
     */
    ad = &tcd->sig.args[tcd->sig.nrArgs++];
    memset(ad, 0, sizeof (argDef));
    ad->atype = defined_type;
    ad->u.snd = classFQCName(tcd->cd);

    appendScopedName(&type_names, text2scopePart(scopedNameTail(classFQCName(tcd->cd))));
    appendScopedName(&type_values, text2scopePart(scopedNameToString(fqname)));

    /* Create the new class. */
    cd = sipMalloc(sizeof (classDef));

    /* Start with a shallow copy. */
    *cd = *tcd->cd;

    if (docstring != NULL)
        cd->docstring = docstring;

    resetIsTemplateClass(cd);
    cd->pyname = cacheName(pt, pyname);
    cd->td = td;

    if (use_template_name)
        setUseTemplateName(cd);

    /* Handle the interface file. */
    cd->iff = findIfaceFile(pt, mod, fqname, class_iface, NULL);
    cd->iff->module = mod;

    appendCodeBlockList(&cd->iff->hdrcode, tcd->cd->iff->hdrcode);

    /* Make a copy of the used list and add the enclosing scope. */
    used = &cd->iff->used;

    for (iffl = tcd->cd->iff->used; iffl != NULL; iffl = iffl->next)
        appendToIfaceFileList(used, iffl->iff);

    /* Include any scope header code. */
    if (scope != NULL)
        appendCodeBlockList(&cd->iff->hdrcode, scope->iff->hdrcode);

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsUsedName(cd->pyname);
    }

    cd->ecd = currentScope();

    /* Handle any type hints. */
    if (cd->typehint_in != NULL)
        cd->typehint_in = newTypeHint(
                templateString(cd->typehint_in->raw_hint, type_names,
                        type_values));

    if (cd->typehint_out != NULL)
        cd->typehint_out = newTypeHint(
                templateString(cd->typehint_out->raw_hint, type_names,
                        type_values));

    /* Handle any flagged enums. */
    if ((sl = cd->pyqt_flags_enums) != NULL)
    {
        cd->pyqt_flags_enums = NULL;

        do
        {
            appendString(&cd->pyqt_flags_enums,
                    templateString(sl->s, type_names, type_values));
            sl = sl->next;
        }
        while (sl != NULL);
    }

    /* Handle the super-classes. */
    for (cl = cd->supers; cl != NULL; cl = cl->next)
    {
        int a;
        scopedNameDef *unscoped;

        unscoped = removeGlobalScope(cl->cd->iff->fqcname);

        /* Ignore defined or scoped classes. */
        if (cl->cd->iff->module != NULL || unscoped->next != NULL)
            continue;

        for (a = 0; a < tcd->sig.nrArgs - 1; ++a)
            if (strcmp(unscoped->name, scopedNameTail(tcd->sig.args[a].u.snd)) == 0)
            {
                argDef *tad = &td->types.args[a];
                classDef *icd;

                if (tad->atype == defined_type)
                    icd = findClass(pt, class_iface, tad->u.snd, FALSE);
                else if (tad->atype == class_type)
                    icd = tad->u.cd;
                else
                    fatal("Template argument %s must expand to a class\n",
                            unscoped->name);

                cl->cd = icd;
            }
    }

    /* Handle the enums. */
    instantiateTemplateEnums(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the variables. */
    instantiateTemplateVars(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the typedefs. */
    instantiateTemplateTypedefs(pt, tcd, td, cd, type_names, type_values);

    /* Handle the ctors. */
    cd->ctors = NULL;
    cttail = &cd->ctors;

    for (oct = tcd->cd->ctors; oct != NULL; oct = oct->next)
    {
        ctorDef *nct = sipMalloc(sizeof (ctorDef));

        /* Start with a shallow copy. */
        *nct = *oct;

        templateSignature(&nct->pysig, oct->kwargs, FALSE, tcd, td, cd,
                type_names, type_values);

        if (oct->cppsig == NULL)
            nct->cppsig = NULL;
        else if (oct->cppsig == &oct->pysig)
            nct->cppsig = &nct->pysig;
        else
        {
            nct->cppsig = sipMalloc(sizeof (signatureDef));

            *nct->cppsig = *oct->cppsig;

            templateSignature(nct->cppsig, NoKwArgs, FALSE, tcd, td, cd,
                    type_names, type_values);
        }

        nct->methodcode = templateCode(pt, used, nct->methodcode, type_names, type_values);
        nct->premethodcode = templateCode(pt, used, nct->premethodcode, type_names, type_values);

        nct->next = NULL;
        *cttail = nct;
        cttail = &nct->next;

        /* Handle the default ctor. */
        if (tcd->cd->defctor == oct)
            cd->defctor = nct;
    }

    cd->dealloccode = templateCode(pt, used, cd->dealloccode, type_names, type_values);
    cd->dtorcode = templateCode(pt, used, cd->dtorcode, type_names, type_values);

    /* Handle the methods. */
    cd->members = instantiateTemplateMethods(tcd->cd->members, mod);
    cd->overs = instantiateTemplateOverloads(pt, tcd->cd->overs,
            tcd->cd->members, cd->members, tcd, td, cd, used, type_names,
            type_values);

    cd->cppcode = templateCode(pt, used, cd->cppcode, type_names, type_values);
    cd->iff->hdrcode = templateCode(pt, used, cd->iff->hdrcode, type_names, type_values);
    cd->convtosubcode = templateCode(pt, used, cd->convtosubcode, type_names, type_values);
    cd->convtocode = templateCode(pt, used, cd->convtocode, type_names, type_values);
    cd->travcode = templateCode(pt, used, cd->travcode, type_names, type_values);
    cd->clearcode = templateCode(pt, used, cd->clearcode, type_names, type_values);
    cd->getbufcode = templateCode(pt, used, cd->getbufcode, type_names, type_values);
    cd->releasebufcode = templateCode(pt, used, cd->releasebufcode, type_names, type_values);
    cd->instancecode = templateCode(pt, used, cd->instancecode, type_names, type_values);
    cd->picklecode = templateCode(pt, used, cd->picklecode, type_names, type_values);
    cd->finalcode = templateCode(pt, used, cd->finalcode, type_names, type_values);
    cd->typehintcode = templateCode(pt, used, cd->typehintcode, type_names, type_values);
    cd->next = pt->classes;

    pt->classes = cd;

    tcd->sig.nrArgs--;

    freeScopedName(type_names);
    freeScopedName(type_values);
}


/*
 * Instantiate the methods of a template class.
 */
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod)
{
    memberDef *md, *methods, **mdtail;

    methods = NULL;
    mdtail = &methods;

    for (md = tmd; md != NULL; md = md->next)
    {
        memberDef *nmd = sipMalloc(sizeof (memberDef));

        /* Start with a shallow copy. */
        *nmd = *md;

        nmd->module = mod;

        if (inMainModule())
            setIsUsedName(nmd->pyname);

        nmd->next = NULL;
        *mdtail = nmd;
        mdtail = &nmd->next;
    }

    return methods;
}


/*
 * Instantiate the overloads of a template class.
 */
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    overDef *od, *overloads, **odtail;

    overloads = NULL;
    odtail = &overloads;

    for (od = tod; od != NULL; od = od->next)
    {
        overDef *nod = sipMalloc(sizeof (overDef));
        memberDef *nmd, *omd;

        /* Start with a shallow copy. */
        *nod = *od;

        for (nmd = methods, omd = tmethods; omd != NULL; omd = omd->next, nmd = nmd->next)
            if (omd == od->common)
            {
                nod->common = nmd;
                break;
            }

        templateSignature(&nod->pysig, od->kwargs, TRUE, tcd, td, cd,
                type_names, type_values);

        if (od->cppsig == &od->pysig)
            nod->cppsig = &nod->pysig;
        else
        {
            nod->cppsig = sipMalloc(sizeof (signatureDef));

            *nod->cppsig = *od->cppsig;

            templateSignature(nod->cppsig, NoKwArgs, TRUE, tcd, td, cd,
                    type_names, type_values);
        }

        nod->methodcode = templateCode(pt, used, nod->methodcode, type_names, type_values);
        nod->premethodcode = templateCode(pt, used, nod->premethodcode, type_names, type_values);
        nod->virtcallcode = templateCode(pt, used, nod->virtcallcode, type_names, type_values);
        nod->virtcode = templateCode(pt, used, nod->virtcode, type_names, type_values);

        nod->next = NULL;
        *odtail = nod;
        odtail = &nod->next;
    }

    return overloads;
}


/*
 * Instantiate the enums of a template class.
 */
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    enumDef *ted;
    moduleDef *mod = cd->iff->module;

    for (ted = pt->enums; ted != NULL; ted = ted->next)
        if (ted->ecd == tcd->cd)
        {
            enumDef *ed;
            enumMemberDef *temd;

            ed = sipMalloc(sizeof (enumDef));

            /* Start with a shallow copy. */
            *ed = *ted;

            if (ed->fqcname != NULL)
            {
                ed->fqcname = text2scopedName(cd->iff,
                        scopedNameTail(ed->fqcname));
                ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));
            }

            if (inMainModule())
            {
                if (ed->pyname != NULL)
                    setIsUsedName(ed->pyname);

                if (ed->cname != NULL)
                    setIsUsedName(ed->cname);
            }

            ed->ecd = cd;
            ed->module = mod;
            ed->members = NULL;

            for (temd = ted->members; temd != NULL; temd = temd->next)
            {
                enumMemberDef *emd;

                emd = sipMalloc(sizeof (enumMemberDef));

                /* Start with a shallow copy. */
                *emd = *temd;
                emd->ed = ed;

                emd->next = ed->members;
                ed->members = emd;
            }

            ed->slots = instantiateTemplateMethods(ted->slots, mod);
            ed->overs = instantiateTemplateOverloads(pt, ted->overs,
                    ted->slots, ed->slots, tcd, td, cd, used, type_names,
                    type_values);

            ed->next = pt->enums;
            pt->enums = ed;
        }
}


/*
 * Instantiate the variables of a template class.
 */
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    varDef *tvd;

    for (tvd = pt->vars; tvd != NULL; tvd = tvd->next)
        if (tvd->ecd == tcd->cd)
        {
            varDef *vd;

            vd = sipMalloc(sizeof (varDef));

            /* Start with a shallow copy. */
            *vd = *tvd;

            if (inMainModule())
                setIsUsedName(vd->pyname);

            vd->fqcname = text2scopedName(cd->iff,
                    scopedNameTail(vd->fqcname));
            vd->ecd = cd;
            vd->module = cd->iff->module;

            templateType(&vd->type, tcd, td, cd, type_names, type_values);

            vd->accessfunc = templateCode(pt, used, vd->accessfunc, type_names, type_values);
            vd->getcode = templateCode(pt, used, vd->getcode, type_names, type_values);
            vd->setcode = templateCode(pt, used, vd->setcode, type_names, type_values);

            addVariable(pt, vd);
        }
}


/*
 * Instantiate the typedefs of a template class.
 */
static void instantiateTemplateTypedefs(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, scopedNameDef *type_names,
        scopedNameDef *type_values)
{
    typedefDef *tdd;

    for (tdd = pt->typedefs; tdd != NULL; tdd = tdd->next)
    {
        typedefDef *new_tdd;

        if (tdd->ecd != tcd->cd)
            continue;

        new_tdd = sipMalloc(sizeof (typedefDef));

        /* Start with a shallow copy. */
        *new_tdd = *tdd;

        new_tdd->fqname = text2scopedName(cd->iff,
                scopedNameTail(new_tdd->fqname));
        new_tdd->ecd = cd;
        new_tdd->module = cd->iff->module;

        templateType(&new_tdd->type, tcd, td, cd, type_names, type_values);

        addTypedef(pt, new_tdd);
    }
}


/*
 * Replace any template arguments in a signature.
 */
static void templateSignature(signatureDef *sd, KwArgs kwargs, int result,
        classTmplDef *tcd, templateDef *td, classDef *ncd,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    int a;

    if (result)
        templateType(&sd->result, tcd, td, ncd, type_names, type_values);

    for (a = 0; a < sd->nrArgs; ++a)
    {
        argDef *ad = &sd->args[a];

        templateType(ad, tcd, td, ncd, type_names, type_values);

        /* Make sure we have the name of any keyword argument. */
        if (inMainModule() && ad->name != NULL)
        {
            if (kwargs == AllKwArgs || (kwargs == OptionalKwArgs && ad->defval != NULL))
                setIsUsedName(ad->name);
        }
    }
}


/*
 * Replace any template arguments in a type.
 */
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td,
        classDef *ncd, scopedNameDef *type_names, scopedNameDef *type_values)
{
    int a;
    char *name;

    /* Descend into any sub-templates. */
    if (ad->atype == template_type)
    {
        templateDef *new_td = sipMalloc(sizeof (templateDef));

        /* Make a deep copy of the template definition. */
        *new_td = *ad->u.td;
        ad->u.td = new_td;

        templateSignature(&ad->u.td->types, NoKwArgs, FALSE, tcd, td, ncd,
                type_names, type_values);

        return;
    }

    /* Handle any default value. */
    if (ad->defval != NULL && ad->defval->vtype == fcall_value)
    {
        /*
         * We only handle the subset where the value is an function call, ie. a
         * template ctor.
         */
        valueDef *vd = ad->defval;

        if (vd->vtype == fcall_value && vd->u.fcd->type.atype == defined_type)
        {
            valueDef *new_vd;
            fcallDef *fcd;
            scopedNameDef *snd, **tailp;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = *vd->u.fcd;

            tailp = &fcd->type.u.snd;
            for (snd = vd->u.fcd->type.u.snd; snd != NULL; snd = snd->next)
            {
                *tailp = text2scopePart(
                        templateString(snd->name, type_names, type_values));
                tailp = &(*tailp)->next;
            }

            new_vd = sipMalloc(sizeof (valueDef));
            new_vd->vtype = fcall_value;
            new_vd->u.fcd = fcd;

            ad->defval = new_vd;
        }
    }

    /* Handle any type hints. */
    if (ad->typehint_in != NULL)
        ad->typehint_in = newTypeHint(
                templateString(ad->typehint_in->raw_hint, type_names,
                        type_values));

    if (ad->typehint_out != NULL)
        ad->typehint_out = newTypeHint(
                templateString(ad->typehint_out->raw_hint, type_names,
                        type_values));

    /* Ignore if it isn't an unscoped name. */
    if (ad->atype != defined_type || ad->u.snd->next != NULL)
        return;

    name = ad->u.snd->name;

    for (a = 0; a < tcd->sig.nrArgs - 1; ++a)
        if (strcmp(name, scopedNameTail(tcd->sig.args[a].u.snd)) == 0)
        {
            argDef *tad = &td->types.args[a];

            ad->atype = tad->atype;

            /* We take the constrained flag from the real type. */
            resetIsConstrained(ad);

            if (isConstrained(tad))
                setIsConstrained(ad);

            ad->u = tad->u;

            return;
        }

    /* Handle the class name itself. */
    if (strcmp(name, scopedNameTail(classFQCName(tcd->cd))) == 0)
    {
        ad->atype = class_type;
        ad->u.cd = ncd;
        ad->original_type = NULL;
    }
}


/*
 * Replace any template arguments in a literal code block.
 */
codeBlockList *templateCode(sipSpec *pt, ifaceFileList **used,
        codeBlockList *ocbl, scopedNameDef *names, scopedNameDef *values)
{
    codeBlockList *ncbl = NULL;

    while (ocbl != NULL)
    {
        char *at = ocbl->block->frag;
        int start_of_line = TRUE;

        do
        {
            char *from = at, *first = NULL;
            codeBlock *cb;
            scopedNameDef *nam, *val, *nam_first, *val_first;

            /* Suppress a compiler warning. */
            val_first = NULL;

            /*
             * Don't do any substitution in lines that appear to be
             * preprocessor directives.  This prevents #include'd file names
             * being broken.
             */
            if (start_of_line)
            {
                /* Strip leading whitespace. */
                while (isspace(*from))
                    ++from;

                if (*from == '#')
                {
                    /* Skip to the end of the line. */
                    do
                        ++from;
                    while (*from != '\n' && *from != '\0');
                }
                else
                {
                    start_of_line = FALSE;
                }
            }

            /*
             * Go through the rest of this fragment looking for each of the
             * types and the name of the class itself.
             */
            nam = names;
            val = values;

            while (nam != NULL && val != NULL)
            {
                char *cp;

                if ((cp = strstr(from, nam->name)) != NULL)
                    if (first == NULL || first > cp)
                    {
                        nam_first = nam;
                        val_first = val;
                        first = cp;
                    }

                nam = nam->next;
                val = val->next;
            }

            /* Create the new fragment. */
            cb = sipMalloc(sizeof (codeBlock));

            if (at == ocbl->block->frag)
            {
                cb->filename = ocbl->block->filename;
                cb->linenr = ocbl->block->linenr;
            }
            else
                cb->filename = NULL;

            appendCodeBlock(&ncbl, cb);

            /* See if anything was found. */
            if (first == NULL)
            {
                /* We can just point to this. */
                cb->frag = at;

                /* All done with this one. */
                at = NULL;
            }
            else
            {
                static char *gen_names[] = {
                    "sipType_",
                    "sipException_",
                    NULL
                };

                char *dp, *sp, **gn;
                int genname = FALSE;

                /*
                 * If the context in which the text is used is in the name of a
                 * SIP generated object then translate any "::" scoping to "_"
                 * and remove any const.
                 */
                for (gn = gen_names; *gn != NULL; ++gn)
                    if (search_back(first, at, *gn))
                    {
                        addUsedFromCode(pt, used, val_first->name);
                        genname = TRUE;
                        break;
                    }

                /* Fragment the fragment. */
                cb->frag = sipMalloc(first - at + strlen(val_first->name) + 1);

                strncpy(cb->frag, at, first - at);

                dp = &cb->frag[first - at];
                sp = val_first->name;

                if (genname)
                {
                    char gch;

                    if (strlen(sp) > 6 && strncmp(sp, "const ", 6) == 0)
                        sp += 6;

                    while ((gch = *sp++) != '\0')
                        if (gch == ':' && *sp == ':')
                        {
                            *dp++ = '_';
                            ++sp;
                        }
                        else
                            *dp++ = gch;

                    *dp = '\0';
                }
                else
                    strcpy(dp, sp);

                /* Move past the replaced text. */
                at = first + strlen(nam_first->name);

                if (*at == '\n')
                    start_of_line = TRUE;
            }
        }
        while (at != NULL && *at != '\0');

        ocbl = ocbl->next;
    }

    return ncbl;
}


/*
 * Return TRUE if the text at the end of a string matches the target string.
 */
static int search_back(const char *end, const char *start, const char *target)
{
    size_t tlen = strlen(target);

    if (start + tlen >= end)
        return FALSE;

    return (strncmp(end - tlen, target, tlen) == 0);
}


/*
 * Add any needed interface files based on handwritten code.
 */
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname)
{
    ifaceFileDef *iff;
    enumDef *ed;

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (iff->type != class_iface && iff->type != exception_iface)
            continue;

        if (sameName(iff->fqcname, sname))
        {
            appendToIfaceFileList(used, iff);
            return;
        }
    }

    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        if (ed->ecd == NULL)
            continue;

        if (sameName(ed->fqcname, sname))
        {
            appendToIfaceFileList(used, ed->ecd->iff);
            return;
        }
    }
}


/*
 * Compare a scoped name with its string equivalent.
 */
static int sameName(scopedNameDef *snd, const char *sname)
{
    /* Handle any explicit scopes. */
    if (sname[0] == ':' && sname[1] == ':')
    {
        if (snd->name[0] != '\0')
            return FALSE;

        sname += 2;
    }

    snd = removeGlobalScope(snd);

    while (snd != NULL && *sname != '\0')
    {
        const char *sp = snd->name;

        while (*sp != '\0' && *sname != ':' && *sname != '\0')
            if (*sp++ != *sname++)
                return FALSE;

        if (*sp != '\0' || (*sname != ':' && *sname != '\0'))
            return FALSE;

        snd = snd->next;

        if (*sname == ':')
            sname += 2;
    }

    return (snd == NULL && *sname == '\0');
}


/*
 * Compare a (possibly) relative scoped name with a fully qualified scoped name
 * while taking the current scope into account.
 */
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name)
{
    classDef *scope;

    for (scope = currentScope(); scope != NULL; scope = scope->ecd)
    {
        scopedNameDef *snd;
        int found;

        snd = copyScopedName(classFQCName(scope));
        appendScopedName(&snd, copyScopedName(rel_name));

        found = (compareScopedNames(fq_name, snd) == 0);

        freeScopedName(snd);

        if (found)
            return TRUE;
    }

    return compareScopedNames(fq_name, rel_name) == 0;
}


/*
 * Create a new typedef.
 */
static void newTypedef(sipSpec *pt, moduleDef *mod, char *name, argDef *type,
        optFlags *optflgs, docstringDef *docstring)
{
    int no_type_name;
    typedefDef *td;
    scopedNameDef *fqname;
    classDef *scope;

    scope = currentScope();
    fqname = text2scopedName((scope != NULL ? scope->iff : NULL), name);
    no_type_name = (getOptFlag(optflgs, "NoTypeName", bool_flag) != NULL);

    /* See if we are instantiating a template class. */
    if (type->atype == template_type)
    {
        classTmplDef *tcd;
        templateDef *td = type->u.td;

        for (tcd = pt->classtemplates; tcd != NULL; tcd = tcd->next)
            if (foundInScope(tcd->cd->iff->fqcname, td->fqname) &&
                sameTemplateSignature(&tcd->sig, &td->types, FALSE))
            {
                instantiateClassTemplate(pt, mod, scope, fqname, tcd, td,
                        getPythonName(mod, optflgs, name), no_type_name,
                        docstring);

                /* All done. */
                return;
            }
    }

    td = sipMalloc(sizeof (typedefDef));

    td->tdflags = 0;
    td->fqname = fqname;
    td->ecd = scope;
    td->module = mod;
    td->platforms = currentPlatforms;
    td->type = *type;

    if (getOptFlag(optflgs, "Capsule", bool_flag) != NULL)
    {
        /* Make sure the type is void *. */
        if (type->atype != void_type || type->nrderefs != 1 || isConstArg(type) || isReference(type))
        {
            fatalScopedName(fqname);
            fatal(" must be a void* if /Capsule/ is specified\n");
        }

        td->type.atype = capsule_type;
        td->type.nrderefs = 0;
        td->type.u.cap = fqname;
    }

    if (no_type_name)
        setNoTypeName(td);

    addTypedef(pt, td);
}


/*
 * Add a typedef to the list so that the list remains sorted.
 */
static void addTypedef(sipSpec *pt, typedefDef *tdd)
{
    typedefDef **tdp;

    /*
     * Check it doesn't already exist (with a strict parse) and find the
     * position in the sorted list where it should be put.
     */
    for (tdp = &pt->typedefs; *tdp != NULL; tdp = &(*tdp)->next)
    {
        int res = compareScopedNames((*tdp)->fqname, tdd->fqname);

        if (res == 0 && strictParse)
        {
            fatalScopedName(tdd->fqname);
            fatal(" already defined\n");
        }

        if (res >= 0)
            break;
    }

    tdd->next = *tdp;
    *tdp = tdd;

    tdd->module->nrtypedefs++;
}


/*
 * Speculatively try and resolve any typedefs.  In some cases (eg. when
 * comparing template signatures) it helps to use the real type if it is known.
 * Note that this wouldn't be necessary if we required that all types be known
 * before they are used.
 */
static void resolveAnyTypedef(sipSpec *pt, argDef *ad)
{
    argDef orig = *ad;

    while (ad->atype == defined_type)
    {
        ad->atype = no_type;
        searchTypedefs(pt, ad->u.snd, ad);

        /*
         * Don't resolve to a template type as it may be superceded later on
         * by a more specific mapped type.
         */
        if (ad->atype == no_type || ad->atype == template_type)
        {
            *ad = orig;
            break;
        }
    }
}


/*
 * Return TRUE if the template signatures are the same.  A deep comparison is
 * used for mapped type templates where we want to recurse into any nested
 * templates.
 */
int sameTemplateSignature(signatureDef *tmpl_sd, signatureDef *args_sd,
        int deep)
{
    int a;

    if (tmpl_sd->nrArgs != args_sd->nrArgs)
        return FALSE;

    for (a = 0; a < tmpl_sd->nrArgs; ++a)
    {
        argDef *tmpl_ad = &tmpl_sd->args[a];
        argDef *args_ad = &args_sd->args[a];

        /*
         * If we are doing a shallow comparision (ie. for class templates) then
         * a type name in the template signature matches anything in the
         * argument signature.
         */
        if (tmpl_ad->atype == defined_type && !deep)
            continue;

        /*
         * For type names only compare the references and pointers, and do the
         * same for any nested templates.
         */
        if (tmpl_ad->atype == defined_type && args_ad->atype == defined_type)
        {
            if (isReference(tmpl_ad) != isReference(args_ad) || tmpl_ad->nrderefs != args_ad->nrderefs)
                return FALSE;
        }
        else if (tmpl_ad->atype == template_type && args_ad->atype == template_type)
        {
            if (!sameTemplateSignature(&tmpl_ad->u.td->types, &args_ad->u.td->types, deep))
                return FALSE;
        }
        else if (!sameBaseType(tmpl_ad, args_ad))
            return FALSE;
    }

    return TRUE;
}


/*
 * Create a new variable.
 */
static void newVar(sipSpec *pt, moduleDef *mod, char *name, int isstatic,
        argDef *type, optFlags *of, codeBlock *acode, codeBlock *gcode,
        codeBlock *scode, int section)
{
    varDef *var;
    classDef *escope = currentScope();
    nameDef *nd;

    /*
     * For the moment we don't support capsule variables because it needs the
     * API major version increasing.
     */
    if (type->atype == capsule_type)
        yyerror("Capsule variables not yet supported");

    /* Check the section. */
    if (section != 0)
    {
        if ((section & SECT_IS_PUBLIC) == 0)
            yyerror("Class variables must be in the public section");

        if (!isstatic && acode != NULL)
            yyerror("%AccessCode cannot be specified for non-static class variables");
    }

    if (isstatic && pt->genc)
        yyerror("Cannot have static members in a C structure");

    if (gcode != NULL || scode != NULL)
    {
        if (acode != NULL)
            yyerror("Cannot mix %AccessCode and %GetCode or %SetCode");

        if (escope == NULL)
            yyerror("Cannot specify %GetCode or %SetCode for global variables");
    }

    applyTypeFlags(mod, type, of);

    nd = cacheName(pt, getPythonName(mod, of, name));

    if (inMainModule())
        setIsUsedName(nd);

    checkAttributes(pt, mod, escope, NULL, nd->text, FALSE);

    var = sipMalloc(sizeof (varDef));

    var->pyname = nd;
    var->fqcname = text2scopedName((escope != NULL ? escope->iff : NULL),
            name);
    var->ecd = escope;
    var->module = mod;
    var->varflags = 0;
    var->no_typehint = getNoTypeHint(of);
    var->platforms = currentPlatforms;
    var->type = *type;
    appendCodeBlock(&var->accessfunc, acode);
    appendCodeBlock(&var->getcode, gcode);
    appendCodeBlock(&var->setcode, scode);

    if (isstatic || (escope != NULL && escope->iff->type == namespace_iface))
        setIsStaticVar(var);

    if (getOptFlag(of, "NoSetter", bool_flag) != NULL)
        setNoSetter(var);

    addVariable(pt, var);
}


/*
 * Create a new ctor.
 */
static void newCtor(moduleDef *mod, char *name, int sectFlags,
        signatureDef *args, optFlags *optflgs, codeBlock *methodcode,
        throwArgs *exceptions, signatureDef *cppsig, int explicit,
        docstringDef *docstring, codeBlock *premethodcode)
{
    int a;
    ctorDef *ct, **ctp;
    classDef *cd = currentScope();

    /* Check the name of the constructor. */
    if (strcmp(classBaseName(cd), name) != 0)
        yyerror("Constructor doesn't have the same name as its class");

    /* Add to the list of constructors. */
    ct = sipMalloc(sizeof (ctorDef));

    if (sectFlags & SECT_IS_PROT && makeProtPublic)
    {
        sectFlags &= ~SECT_IS_PROT;
        sectFlags |= SECT_IS_PUBLIC;
    }

    /* Allow the signature to be used like an function signature. */
    memset(&args->result, 0, sizeof (argDef));
    args->result.atype = void_type;

    ct->docstring = docstring;
    ct->ctorflags = sectFlags;
    ct->no_typehint = getNoTypeHint(optflgs);
    ct->pysig = *args;
    ct->cppsig = (cppsig != NULL ? cppsig : &ct->pysig);
    ct->exceptions = exceptions;
    ct->platforms = currentPlatforms;
    appendCodeBlock(&ct->methodcode, methodcode);
    appendCodeBlock(&ct->premethodcode, premethodcode);

    if (!isPrivateCtor(ct))
        setCanCreate(cd);

    if (isProtectedCtor(ct))
        setNeedsShadow(cd);

    if (explicit)
        setIsExplicitCtor(ct);

    getHooks(optflgs, &ct->prehook, &ct->posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGILCtor(ct);
    else if (getHoldGIL(optflgs))
        setIsHoldGILCtor(ct);

    if (getTransfer(optflgs))
        setIsResultTransferredCtor(ct);

    if (getDeprecated(optflgs))
        setIsDeprecatedCtor(ct);

    if (!isPrivateCtor(ct))
        ct->kwargs = keywordArgs(mod, optflgs, &ct->pysig, FALSE);

    if (methodcode == NULL && getOptFlag(optflgs, "NoRaisesPyException", bool_flag) == NULL)
    {
        if (allRaisePyException(mod) || getOptFlag(optflgs, "RaisesPyException", bool_flag) != NULL)
            setRaisesPyExceptionCtor(ct);
    }

    if (getOptFlag(optflgs, "NoDerived", bool_flag) != NULL)
    {
        if (cppsig != NULL)
            yyerror("The /NoDerived/ annotation cannot be used with a C++ signature");

        if (methodcode == NULL)
            yyerror("The /NoDerived/ annotation must be used with %MethodCode");

        ct->cppsig = NULL;
    }

    if (getOptFlag(optflgs, "Default", bool_flag) != NULL)
    {
        if (cd->defctor != NULL)
            yyerror("A constructor with the /Default/ annotation has already been defined");

        cd->defctor = ct;
    }

    /* /Transfer/ arguments need the wrapper. */
    for (a = 0; a < ct->pysig.nrArgs; ++a)
    {
        argDef *ad = &ct->pysig.args[a];

        if (isTransferred(ad))
            setGetWrapper(ad);
    }

    /* Append to the list. */
    for (ctp = &cd->ctors; *ctp != NULL; ctp = &(*ctp)->next)
        ;

    *ctp = ct;
}


/*
 * Create a new function.
 */
static void newFunction(sipSpec *pt, moduleDef *mod, classDef *c_scope,
        ifaceFileDef *ns_scope, mappedTypeDef *mt_scope, int sflags,
        int isstatic, int issignal, int isslot, int isvirt, char *name,
        signatureDef *sig, int isconst, int isabstract, optFlags *optflgs,
        codeBlock *methodcode, codeBlock *vcode, codeBlock *virtcallcode,
        throwArgs *exceptions, signatureDef *cppsig, docstringDef *docstring,
        int isfinal, codeBlock *premethodcode)
{
    static const char *annos[] = {
        "__len__",
        "__imatmul__",
        "__matmul__",
        "AbortOnException",
        "AllowNone",
        "AutoGen",
        "Deprecated",
        "DisallowNone",
        "Encoding",
        "Factory",
        "HoldGIL",
        "KeywordArgs",
        "KeepReference",
        "NewThread",
        "NoArgParser",
        "NoCopy",
        "NoRaisesPyException",
        "NoTypeHint",
        "NoVirtualErrorHandler",
        "Numeric",
        "PostHook",
        "PreHook",
        "PyInt",
        "PyName",
        "PyQtSignalHack",
        "RaisesPyException",
        "ReleaseGIL",
        "Sequence",
        "VirtualErrorHandler",
        "Transfer",
        "TransferBack",
        "TransferThis",
        "TypeHint",
        NULL
    };

    const char *pyname, *virt_error_handler;
    int factory, xferback, no_arg_parser, no_virt_error_handler;
    overDef *od, **odp, **headp;
    optFlag *of;

    checkAnnos(optflgs, annos);

    /* Extra checks for a C module. */
    if (pt->genc)
    {
        if (c_scope != NULL)
            yyerror("Function declaration not allowed in a struct in a C module");

        if (isstatic)
            yyerror("Static functions not allowed in a C module");

        if (exceptions != NULL)
            yyerror("Exceptions not allowed in a C module");

        /* Handle C void prototypes. */
        if (sig->nrArgs == 1)
        {
            argDef *vad = &sig->args[0];

            if (vad->atype == void_type && vad->nrderefs == 0)
                sig->nrArgs = 0;
        }
    }

    /* Extra checks for a union. */
    if (c_scope != NULL && isUnion(c_scope))
    {
        if (isvirt)
            yyerror("A union cannot have a virtual functions");

        /* We can't sub-class a union so we can't handle protected functions. */
        if (sflags & SECT_IS_PROT)
            yyerror("Protected functions are not supported for unions");
    }

    if (mt_scope != NULL)
        headp = &mt_scope->overs;
    else if (c_scope != NULL)
        headp = &c_scope->overs;
    else
        headp = &mod->overs;

    /*
     * See if the function has a non-lazy method.  These are methods that
     * Python expects to see defined in the type before any instance of the
     * type is created.
     */
    if (c_scope != NULL)
    {
        static const char *lazy[] = {
            "__getattribute__",
            "__getattr__",
            "__enter__",
            "__exit__",
            "__aenter__",
            "__aexit__",
            NULL
        };

        const char **l;

        for (l = lazy; *l != NULL; ++l)
            if (strcmp(name, *l) == 0)
            {
                setHasNonlazyMethod(c_scope);
                break;
            }
    }

    /* See if it is a factory method. */
    if (getOptFlag(optflgs, "Factory", bool_flag) != NULL)
        factory = TRUE;
    else
    {
        int a;

        factory = FALSE;

        /* Check /TransferThis/ wasn't specified. */
        if (c_scope == NULL || isstatic)
            for (a = 0; a < sig->nrArgs; ++a)
                if (isThisTransferred(&sig->args[a]))
                    yyerror("/TransferThis/ may only be specified in constructors and class methods");
    }

    /* See if the result is to be returned to Python ownership. */
    xferback = (getOptFlag(optflgs, "TransferBack", bool_flag) != NULL);

    if (factory && xferback)
        yyerror("/TransferBack/ and /Factory/ cannot both be specified");

    /* Create a new overload definition. */

    od = sipMalloc(sizeof (overDef));

    getSourceLocation(&od->sloc);

    /* Set the overload flags. */

    if ((sflags & SECT_IS_PROT) && makeProtPublic)
    {
        sflags &= ~SECT_IS_PROT;
        sflags |= SECT_IS_PUBLIC | OVER_REALLY_PROT;
    }

    od->overflags = sflags;

    if (issignal)
    {
        resetIsSlot(od);
        setIsSignal(od);
    }
    else if (isslot)
    {
        resetIsSignal(od);
        setIsSlot(od);
    }

    od->no_typehint = getNoTypeHint(optflgs);

    if (isSignal(od))
        if ((of = getOptFlag(optflgs, "PyQtSignalHack", integer_flag)) != NULL)
            od->pyqt_signal_hack = of->fvalue.ival;

    if (factory)
        setIsFactory(od);

    if (xferback)
        setIsResultTransferredBack(od);

    if (getTransfer(optflgs))
        setIsResultTransferred(od);

    if (getOptFlag(optflgs, "TransferThis", bool_flag) != NULL)
        setIsThisTransferredMeth(od);

    if (methodcode == NULL && getOptFlag(optflgs, "NoRaisesPyException", bool_flag) == NULL)
    {
        if (allRaisePyException(mod) || getOptFlag(optflgs, "RaisesPyException", bool_flag) != NULL)
            setRaisesPyException(od);
    }

    if (isProtected(od))
        setNeedsShadow(c_scope);

    if ((isSlot(od) || isSignal(od)) && !isPrivate(od))
    {
        if (isSignal(od))
            setNeedsShadow(c_scope);

        pt->sigslots = TRUE;
    }

    if (isSignal(od) && (methodcode != NULL || vcode != NULL || virtcallcode != NULL))
        yyerror("Cannot provide code for signals");

    if (isstatic)
    {
        if (isSignal(od))
            yyerror("Static functions cannot be signals");

        if (isvirt)
            yyerror("Static functions cannot be virtual");

        setIsStatic(od);
    }

    if (isconst)
        setIsConst(od);

    if (isfinal)
        setIsFinal(od);

    if (isabstract)
    {
        if (sflags == 0)
            yyerror("Non-class function specified as abstract");

        setIsAbstract(od);
    }

    if ((of = getOptFlag(optflgs, "AutoGen", opt_name_flag)) != NULL)
    {
        if (of->fvalue.sval == NULL || isEnabledFeature(of->fvalue.sval))
            setIsAutoGen(od);
    }

    virt_error_handler = getVirtErrorHandler(optflgs);
    no_virt_error_handler = (getOptFlag(optflgs, "NoVirtualErrorHandler", bool_flag) != NULL);

    if (isvirt)
    {
        if (!isfinal)
        {
            setIsVirtual(od);
            setNeedsShadow(c_scope);
        }

        if (getOptFlag(optflgs, "AbortOnException", bool_flag) != NULL)
            setAbortOnException(od);

        if (no_virt_error_handler)
        {
            if (virt_error_handler != NULL)
                yyerror("/VirtualErrorHandler/ and /NoVirtualErrorHandler/ provided");

            setNoErrorHandler(od);
        }
        else
        {
            od->virt_error_handler = virt_error_handler;
        }
    }
    else
    {
        if (vcode != NULL)
            yyerror("%VirtualCatcherCode provided for non-virtual function");

        if (virt_error_handler != NULL)
            yyerror("/VirtualErrorHandler/ provided for non-virtual function");

        if (no_virt_error_handler)
            yyerror("/NoVirtualErrorHandler/ provided for non-virtual function");
    }

    od->cppname = name;
    od->pysig = *sig;
    od->cppsig = (cppsig != NULL ? cppsig : &od->pysig);
    od->exceptions = exceptions;
    od->platforms = currentPlatforms;
    appendCodeBlock(&od->methodcode, methodcode);
    appendCodeBlock(&od->premethodcode, premethodcode);
    appendCodeBlock(&od->virtcallcode, virtcallcode);
    appendCodeBlock(&od->virtcode, vcode);

    no_arg_parser = (getOptFlag(optflgs, "NoArgParser", bool_flag) != NULL);

    if (no_arg_parser)
    {
        if (methodcode == NULL)
            yyerror("%MethodCode must be supplied if /NoArgParser/ is specified");
    }
    else
    {
        /*
         * The argument parser requires that there is nothing after an
         * ellipsis.
         */
        checkEllipsis(sig);
    }

    if (cppsig != NULL)
        checkEllipsis(cppsig);

    if (getOptFlag(optflgs, "NoCopy", bool_flag) != NULL)
        setNoCopy(&od->pysig.result);

    if (getAllowNone(optflgs))
        setAllowNone(&od->pysig.result);

    if (getDisallowNone(optflgs))
        setDisallowNone(&od->pysig.result);

    handleKeepReference(optflgs, &od->pysig.result, mod);

    pyname = getPythonName(mod, optflgs, name);

    od->common = findFunction(pt, mod, c_scope, ns_scope, mt_scope, pyname,
            (methodcode != NULL), sig->nrArgs, no_arg_parser);

    if (isProtected(od))
        setHasProtected(od->common);

    if (strcmp(pyname, "__delattr__") == 0)
        setIsDelattr(od);

    od->docstring = docstring;

    if (getOptFlag(optflgs, "Numeric", bool_flag) != NULL)
    {
        if (isSequence(od->common))
            yyerror("/Sequence/ has already been specified");

        setIsNumeric(od->common);
    }

    if (getOptFlag(optflgs, "Sequence", bool_flag) != NULL)
    {
        if (isNumeric(od->common))
            yyerror("/Numeric/ has already been specified");

        setIsSequence(od->common);
    }

    /* Methods that run in new threads must be virtual. */
    if (getOptFlag(optflgs, "NewThread", bool_flag) != NULL)
    {
        argDef *res;

        if (!isvirt)
            yyerror("/NewThread/ may only be specified for virtual functions");

        /*
         * This is an arbitary limitation to make the code generator slightly
         * easier - laziness on my part.
         */
        res = &od->cppsig->result;

        if (res->atype != void_type || res->nrderefs != 0)
            yyerror("/NewThread/ may only be specified for void functions");

        setIsNewThread(od);
    }

    getHooks(optflgs, &od->prehook, &od->posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGIL(od);
    else if (getHoldGIL(optflgs))
        setIsHoldGIL(od);

    if (getDeprecated(optflgs))
        setIsDeprecated(od);

    if (!isPrivate(od) && (od->common->slot == no_slot || od->common->slot == call_slot))
    {
        od->kwargs = keywordArgs(mod, optflgs, &od->pysig, hasProtected(od->common));

        if (od->kwargs != NoKwArgs)
            setUseKeywordArgs(od->common);

        /*
         * If the overload is protected and defined in an imported module then
         * we need to make sure that any other overloads' keyword argument
         * names are marked as used.
         */
        if (!isSignal(od) && isProtected(od) && !inMainModule())
        {
            overDef *kwod;

            for (kwod = c_scope->overs; kwod != NULL; kwod = kwod->next)
                if (kwod->common == od->common && kwod->kwargs != NoKwArgs)
                {
                    int a;

                    for (a = 0; a < kwod->pysig.nrArgs; ++a)
                    {
                        argDef *ad = &kwod->pysig.args[a];

                        if (kwod->kwargs == OptionalKwArgs && ad->defval == NULL)
                            continue;

                        if (ad->name != NULL)
                            setIsUsedName(ad->name);
                    }
                }
        }
    }

    od->next = NULL;

    /* See if we want to auto-generate some methods. */
    if (getOptFlag(optflgs, "__len__", bool_flag) != NULL)
    {
        overDef *len;

        len = sipMalloc(sizeof (overDef));

        len->cppname = "__len__";
        len->overflags = SECT_IS_PUBLIC;
        len->pysig.result.atype = ssize_type;
        len->pysig.nrArgs = 0;
        len->cppsig = &len->pysig;

        if ((len->methodcode = od->methodcode) == NULL)
        {
            char *buf = sipStrdup("            sipRes = (Py_ssize_t)sipCpp->");
            codeBlock *code;

            append(&buf, od->cppname);
            append(&buf, "();\n");

            code = sipMalloc(sizeof (codeBlock));

            code->frag = buf;
            code->filename = "Auto-generated";
            code->linenr = 1;

            appendCodeBlock(&len->methodcode, code);
        }

        len->common = findFunction(pt, mod, c_scope, ns_scope, mt_scope,
                len->cppname, TRUE, 0, FALSE);

        len->platforms = od->platforms;
        len->next = od->next;
        od->next = len;
    }

    if (getOptFlag(optflgs, "__matmul__", bool_flag) != NULL)
    {
        overDef *matmul;

        matmul = sipMalloc(sizeof (overDef));

        matmul->cppname = "__matmul__";
        matmul->overflags = SECT_IS_PUBLIC;
        matmul->pysig = od->pysig;
        matmul->cppsig = (cppsig != NULL ? cppsig : &matmul->pysig);

        matmul->methodcode = od->methodcode;

        matmul->common = findFunction(pt, mod, c_scope, ns_scope, mt_scope,
                matmul->cppname, (matmul->methodcode != NULL),
                matmul->pysig.nrArgs, FALSE);

        matmul->platforms = od->platforms;
        matmul->next = od->next;
        od->next = matmul;
    }

    if (getOptFlag(optflgs, "__imatmul__", bool_flag) != NULL)
    {
        overDef *imatmul;

        imatmul = sipMalloc(sizeof (overDef));

        imatmul->cppname = "__imatmul__";
        imatmul->overflags = SECT_IS_PUBLIC;
        imatmul->pysig = od->pysig;
        imatmul->cppsig = (cppsig != NULL ? cppsig : &imatmul->pysig);

        imatmul->methodcode = od->methodcode;

        imatmul->common = findFunction(pt, mod, c_scope, ns_scope, mt_scope,
                imatmul->cppname, (imatmul->methodcode != NULL),
                imatmul->pysig.nrArgs, FALSE);

        imatmul->platforms = od->platforms;
        imatmul->next = od->next;
        od->next = imatmul;
    }

    /* Append to the list. */
    for (odp = headp; *odp != NULL; odp = &(*odp)->next)
        ;

    *odp = od;
}


/*
 * Return the Python name based on the C/C++ name and any /PyName/ annotation.
 */
static const char *getPythonName(moduleDef *mod, optFlags *optflgs,
        const char *cname)
{
    static const char *keywords[] = {
        "False", "None", "True", "and", "as", "assert", "async", "await",
        "break", "class", "continue", "def", "del", "elif", "else", "except",
        "finally", "for", "from", "global", "if", "import", "in", "is",
        "lambda", "nonlocal", "not", "or", "pass", "raise", "return", "try",
        "while", "with", "yield", NULL
    };

    const char *pname, **kw;
    optFlag *of;
    autoPyNameDef *apnd;

    /* Use the explicit name if given. */
    if ((of = getOptFlag(optflgs, "PyName", name_flag)) != NULL)
        return of->fvalue.sval;

    /* Apply any automatic naming rules. */
    pname = cname;

    for (apnd = mod->autopyname; apnd != NULL; apnd = apnd->next)
    {
        size_t len = strlen(apnd->remove_leading);

        if (strncmp(pname, apnd->remove_leading, len) == 0)
            pname += len;
    }

    /* Fix any Python keywords. */
    for (kw = keywords; *kw != NULL; ++kw)
        if (strcmp(pname, *kw) == 0)
            return concat(pname, "_", NULL);

    return pname;
}


/*
 * Cache a name in a module.  Entries in the cache are stored in order of
 * decreasing length.
 */
nameDef *cacheName(sipSpec *pt, const char *name)
{
    nameDef *nd, **ndp;
    size_t len;

    /* Allow callers to be lazy about checking if there is really a name. */
    if (name == NULL)
        return NULL;

    /* Skip entries that are too large. */
    ndp = &pt->namecache;
    len = strlen(name);

    while (*ndp != NULL && (*ndp)->len > len)
        ndp = &(*ndp)->next;

    /* Check entries that are the right length. */
    for (nd = *ndp; nd != NULL && nd->len == len; nd = nd->next)
        if (memcmp(nd->text, name, len) == 0)
            return nd;

    /* Create a new one. */
    nd = sipMalloc(sizeof (nameDef));

    nd->nameflags = 0;
    nd->text = name;
    nd->len = len;
    nd->next = *ndp;

    *ndp = nd;

    return nd;
}


/*
 * Find (or create) an overloaded function name.
 */
static memberDef *findFunction(sipSpec *pt, moduleDef *mod, classDef *c_scope,
        ifaceFileDef *ns_scope, mappedTypeDef *mt_scope, const char *pname,
        int hwcode, int nrargs, int no_arg_parser)
{
    static struct slot_map {
        const char *name;   /* The slot name. */
        slotType type;      /* The corresponding type. */
        int needs_hwcode;   /* Set if handwritten code is required. */
        int nrargs;         /* Nr. of arguments. */
    } slot_table[] = {
        {"__str__", str_slot, TRUE, 0},
        {"__int__", int_slot, FALSE, 0},
        {"__float__", float_slot, FALSE, 0},
        {"__len__", len_slot, TRUE, 0},
        {"__contains__", contains_slot, TRUE, 1},
        {"__add__", add_slot, FALSE, 1},
        {"__sub__", sub_slot, FALSE, 1},
        {"__mul__", mul_slot, FALSE, 1},
        {"__mod__", mod_slot, FALSE, 1},
        {"__floordiv__", floordiv_slot, TRUE, 1},
        {"__truediv__", truediv_slot, FALSE, 1},
        {"__and__", and_slot, FALSE, 1},
        {"__or__", or_slot, FALSE, 1},
        {"__xor__", xor_slot, FALSE, 1},
        {"__lshift__", lshift_slot, FALSE, 1},
        {"__rshift__", rshift_slot, FALSE, 1},
        {"__iadd__", iadd_slot, FALSE, 1},
        {"__isub__", isub_slot, FALSE, 1},
        {"__imul__", imul_slot, FALSE, 1},
        {"__imod__", imod_slot, FALSE, 1},
        {"__ifloordiv__", ifloordiv_slot, TRUE, 1},
        {"__itruediv__", itruediv_slot, FALSE, 1},
        {"__iand__", iand_slot, FALSE, 1},
        {"__ior__", ior_slot, FALSE, 1},
        {"__ixor__", ixor_slot, FALSE, 1},
        {"__ilshift__", ilshift_slot, FALSE, 1},
        {"__irshift__", irshift_slot, FALSE, 1},
        {"__invert__", invert_slot, FALSE, 0},
        {"__call__", call_slot, FALSE, -1},
        {"__getitem__", getitem_slot, FALSE, 1},
        {"__setitem__", setitem_slot, TRUE, 2},
        {"__delitem__", delitem_slot, TRUE, 1},
        {"__lt__", lt_slot, FALSE, 1},
        {"__le__", le_slot, FALSE, 1},
        {"__eq__", eq_slot, FALSE, 1},
        {"__ne__", ne_slot, FALSE, 1},
        {"__gt__", gt_slot, FALSE, 1},
        {"__ge__", ge_slot, FALSE, 1},
        {"__cmp__", cmp_slot, FALSE, 1},
        {"__bool__", bool_slot, TRUE, 0},
        {"__nonzero__", bool_slot, TRUE, 0},
        {"__neg__", neg_slot, FALSE, 0},
        {"__pos__", pos_slot, FALSE, 0},
        {"__abs__", abs_slot, TRUE, 0},
        {"__repr__", repr_slot, TRUE, 0},
        {"__hash__", hash_slot, TRUE, 0},
        {"__index__", index_slot, TRUE, 0},
        {"__iter__", iter_slot, TRUE, 0},
        {"__next__", next_slot, TRUE, 0},
        {"__setattr__", setattr_slot, TRUE, 2},
        {"__delattr__", delattr_slot, TRUE, 1},
        {"__matmul__", matmul_slot, FALSE, 1},
        {"__imatmul__", imatmul_slot, FALSE, 1},
        {"__await__", await_slot, TRUE, 0},
        {"__aiter__", aiter_slot, TRUE, 0},
        {"__anext__", anext_slot, TRUE, 0},
        {NULL, no_slot, FALSE, 0}
    };

    memberDef *md, **flist;
    struct slot_map *sm;
    slotType st;

    /* Get the slot type. */
    st = no_slot;

    for (sm = slot_table; sm->name != NULL; ++sm)
        if (strcmp(sm->name, pname) == 0)
        {
            if (sm->needs_hwcode && !hwcode)
                yyerror("This Python slot requires %MethodCode");

            if (sm->nrargs >= 0)
            {
                if (mt_scope == NULL && c_scope == NULL)
                {
                    /* Global operators need one extra argument. */
                    if (sm -> nrargs + 1 != nrargs)
                        yyerror("Incorrect number of arguments to global operator");
                }
                else if (sm->nrargs != nrargs)
                    yyerror("Incorrect number of arguments to Python slot");
            }

            st = sm->type;

            break;
        }

    /* Check there is no name clash. */
    checkAttributes(pt, mod, c_scope, mt_scope, pname, TRUE);

    /* See if it already exists. */
    if (mt_scope != NULL)
        flist = &mt_scope->members;
    else if (c_scope != NULL)
        flist = &c_scope->members;
    else
        flist = &mod->othfuncs;

    /* __delattr__ is implemented as __setattr__. */
    if (st == delattr_slot)
    {
        if (inMainModule())
            setIsUsedName(cacheName(pt, pname));

        st = setattr_slot;
        pname = "__setattr__";
    }

    for (md = *flist; md != NULL; md = md->next)
        if (strcmp(md->pyname->text, pname) == 0 && md->module == mod)
            break;

    if (md == NULL)
    {
        /* Create a new one. */
        md = sipMalloc(sizeof (memberDef));

        md->pyname = cacheName(pt, pname);
        md->memberflags = 0;
        md->slot = st;
        md->module = mod;
        md->ns_scope = ns_scope;
        md->next = *flist;

        *flist = md;

        if (inMainModule())
            setIsUsedName(md->pyname);

        if (no_arg_parser)
            setNoArgParser(md);
    }
    else if (noArgParser(md))
        yyerror("Another overload has already been defined that is annotated as /NoArgParser/");

    /* Global operators are a subset. */
    if (mt_scope == NULL && c_scope == NULL && st != no_slot && st != neg_slot && st != pos_slot && !isNumberSlot(md) && !isInplaceNumberSlot(md) && !isRichCompareSlot(md))
        yyerror("Global operators must be either numeric or comparison operators");

    return md;
}


/*
 * Search a set of flags for a particular one.
 */
static optFlag *findOptFlag(optFlags *flgs, const char *name)
{
    int f;

    for (f = 0; f < flgs->nrFlags; ++f)
    {
        optFlag *of = &flgs->flags[f];

        if (strcmp(of->fname, name) == 0)
            return of;
    }

    return NULL;
}


/*
 * Search a set of flags for a particular one and check its type.
 */
static optFlag *getOptFlag(optFlags *flgs, const char *name, flagType ft)
{
    optFlag *of = findOptFlag(flgs, name);

    if (of != NULL)
    {
        /* An optional name can look like a boolean or a name. */
        if (ft == opt_name_flag)
        {
            if (of->ftype == bool_flag)
            {
                of->ftype = opt_name_flag;
                of->fvalue.sval = NULL;
            }
            else if (of->ftype == name_flag)
            {
                of->ftype = opt_name_flag;
            }
        }

        /* An optional integer can look like a boolean or an integer. */
        if (ft == opt_integer_flag)
        {
            if (of->ftype == bool_flag)
            {
                of->ftype = opt_integer_flag;
                of->fvalue.ival = -1;
            }
            else if (of->ftype == integer_flag)
            {
                of->ftype = opt_integer_flag;
            }
        }

        /* A string list will look like a string. */
        if (ft == string_list_flag && of->ftype == string_flag)
        {
            char *s;

            s = of->fvalue.sval;
            of->fvalue.slval = NULL;

            while (*s != '\0')
            {
                char *start;

                while (*s == ' ')
                    ++s;

                start = s;

                if (*start != '\0')
                {
                    char saved, *end;

                    for (end = start + 1; *end != ' ' && *end != '\0'; ++end)
                        ;

                    saved = *end;
                    *end = '\0';

                    appendString(&of->fvalue.slval, start);

                    *end = saved;
                    s = end;
                }
            }

            of->ftype = string_list_flag;
        }

        if (ft != of->ftype)
            yyerror("Annotation has a value of the wrong type");
    }

    return of;
}


/*
 * Append a string to a list of them.
 */
void appendString(stringList **headp, const char *s)
{
    stringList *sl;

    /* Create the new entry. */

    sl = sipMalloc(sizeof (stringList));

    sl -> s = s;
    sl -> next = NULL;

    /* Append it to the list. */

    while (*headp != NULL)
        headp = &(*headp) -> next;

    *headp = sl;
}


/*
 * A name is going to be used as a Python attribute name within a Python scope
 * (ie. a Python dictionary), so check against what we already know is going in
 * the same scope in case there is a clash.
 */
static void checkAttributes(sipSpec *pt, moduleDef *mod, classDef *py_c_scope,
        mappedTypeDef *py_mt_scope, const char *attr, int isfunc)
{
    enumDef *ed;
    varDef *vd;
    classDef *cd;

    /* We don't do any check for a non-strict parse. */
    if (!strictParse)
        return;

    /* Check the enums. */
    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        if (ed->pyname == NULL)
            continue;

        if (py_c_scope != NULL)
        {
            if (ed->ecd != py_c_scope)
                continue;
        }
        else if (py_mt_scope != NULL)
        {
            if (ed->emtd != py_mt_scope)
                continue;
        }
        else if (ed->ecd != NULL || ed->emtd != NULL)
        {
            continue;
        }

        if (strcmp(ed->pyname->text, attr) == 0)
            yyerror("There is already an enum in scope with the same Python name");

        if (!isScopedEnum(ed))
        {
            enumMemberDef *emd;

            for (emd = ed->members; emd != NULL; emd = emd->next)
                if (strcmp(emd->pyname->text, attr) == 0)
                    yyerror("There is already an enum member in scope with the same Python name");
        }
    }

    /*
     * Only check the members if this attribute isn't a member because we can
     * handle members with the same name in the same scope.
     */
    if (!isfunc)
    {
        memberDef *md, *membs;
        overDef *overs;

        if (py_mt_scope != NULL)
        {
            membs = py_mt_scope->members;
            overs = py_mt_scope->overs;
        }
        else if (py_c_scope != NULL)
        {
            membs = py_c_scope->members;
            overs = py_c_scope->overs;
        }
        else
        {
            membs = mod->othfuncs;
            overs = mod->overs;
        }

        for (md = membs; md != NULL; md = md->next)
        {
            overDef *od;

            if (strcmp(md->pyname->text, attr) != 0)
                continue;

            /* Check for a conflict with all overloads. */
            for (od = overs; od != NULL; od = od->next)
            {
                if (od->common != md)
                    continue;

                yyerror("There is already a function in scope with the same Python name");
            }
        }
    }

    /* If the scope was a mapped type then that's all we have to check. */
    if (py_mt_scope != NULL)
        return;

    /* Check the variables. */
    for (vd = pt->vars; vd != NULL; vd = vd->next)
    {
        if (vd->ecd != py_c_scope)
            continue;

        if (strcmp(vd->pyname->text,attr) == 0)
            yyerror("There is already a variable in scope with the same Python name");
    }

    /* Check the classes. */
    for (cd = pt->classes; cd != NULL; cd = cd->next)
    {
        if (cd->ecd != py_c_scope || cd->pyname == NULL)
            continue;

        if (strcmp(cd->pyname->text, attr) == 0 && !isExternal(cd))
            yyerror("There is already a class or namespace in scope with the same Python name");
    }

    /* Check the exceptions. */
    if (py_c_scope == NULL)
    {
        exceptionDef *xd;

        for (xd = pt->exceptions; xd != NULL; xd = xd->next)
            if (xd->pyname != NULL && strcmp(xd->pyname, attr) == 0)
                yyerror("There is already an exception with the same Python name");
    }

    /* Check the properties. */
    if (py_c_scope != NULL)
    {
        propertyDef *pd;

        for (pd = py_c_scope->properties; pd != NULL; pd = pd->next)
            if (strcmp(pd->name->text, attr) == 0)
                yyerror("There is already a property with the same name");
    }
}


/*
 * Append a code block to a list of them.
 */
static void appendCodeBlock(codeBlockList **headp, codeBlock *cb)
{
    codeBlockList *cbl;

    /* Handle the trivial case. */
    if (cb == NULL)
        return;

    /* Find the end of the list. */
    while (*headp != NULL)
    {
        /* Ignore if the block is already in the list. */
        if ((*headp)->block == cb)
            return;

        headp = &(*headp)->next;
    }

    cbl = sipMalloc(sizeof (codeBlockList));
    cbl->block = cb;

    *headp = cbl;
}


/*
 * Append a code block list to an existing list.
 */
void appendCodeBlockList(codeBlockList **headp, codeBlockList *cbl)
{
    while (cbl != NULL)
    {
        appendCodeBlock(headp, cbl->block);
        cbl = cbl->next;
    }
}


/*
 * Handle the end of a fully parsed a file.
 */
static void handleEOF()
{
    /*
     * Check that the number of nested if's is the same as when we started
     * the file.
     */

    if (stackPtr > currentContext.ifdepth)
        fatal("Too many %%If statements in %s\n", previousFile);

    if (stackPtr < currentContext.ifdepth)
        fatal("Too many %%End statements in %s\n", previousFile);
}


/*
 * Handle the end of a fully parsed a module.
 */
static void handleEOM()
{
    moduleDef *from;

    /* Check it has been named. */
    if (currentModule->name == NULL)
        fatal("No %%Module has been specified for module defined in %s\n",
                previousFile);

    from = currentContext.prevmod;

    if (from != NULL)
    {
        if (from->encoding == no_type)
            from->encoding = currentModule->encoding;

        if (isCallSuperInitUndefined(from))
        {
            if (isCallSuperInitYes(currentModule))
                setCallSuperInitYes(from);
            else
                setCallSuperInitNo(from);
        }
    }

    /* The previous module is now current. */
    currentModule = from;
}


/*
 * Find an existing qualifier.
 */
static qualDef *findQualifier(const char *name)
{
    moduleDef *mod;

    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
    {
        qualDef *qd;

        for (qd = mod->qualifiers; qd != NULL; qd = qd->next)
            if (strcmp(qd->name, name) == 0)
                return qd;
    }

    /* Qualifiers corresponding to the SIP version are created on the fly. */
    if (name[0] == 'S' && name[1] == 'I' && name[2] == 'P' && name[3] == '_')
    {
        const char *cp = &name[3];
        int major, minor, patch;

        cp = getInt(cp, &major);
        cp = getInt(cp, &minor);
        cp = getInt(cp, &patch);

        if (*cp != '\0')
            yyerror("Unexpected character after SIP version number");

        return allocQualifier(currentModule, -1,
                (major << 16) | (minor << 8) | patch, TRUE, name,
                time_qualifier);
    }

    return NULL;
}


/*
 * Get an integer from string.
 */
static const char *getInt(const char *cp, int *ip)
{
    /* Handle the default value. */
    *ip = 0;

    if (*cp == '\0')
        return cp;

    /* There must be a leading underscore. */
    if (*cp++ != '_')
        yyerror("An underscore must separate the parts of a SIP version number");

    while (isdigit(*cp))
    {
        *ip *= 10;
        *ip += *cp - '0';
        ++cp;
    }

    return cp;
}


/*
 * Return a copy of a scoped name.
 */
scopedNameDef *copyScopedName(scopedNameDef *snd)
{
    scopedNameDef *head;

    head = NULL;

    while (snd != NULL)
    {
        appendScopedName(&head,text2scopePart(snd -> name));
        snd = snd -> next;
    }

    return head;
}


/*
 * Append a name to a list of scopes.
 */
void appendScopedName(scopedNameDef **headp,scopedNameDef *newsnd)
{
    while (*headp != NULL)
        headp = &(*headp) -> next;

    *headp = newsnd;
}


/*
 * Free a scoped name - but not the text itself.
 */
void freeScopedName(scopedNameDef *snd)
{
    while (snd != NULL)
    {
        scopedNameDef *next = snd -> next;

        free(snd);

        snd = next;
    }
}


/*
 * Convert a text string to a scope part structure.
 */
scopedNameDef *text2scopePart(char *text)
{
    scopedNameDef *snd;

    snd = sipMalloc(sizeof (scopedNameDef));

    snd->name = text;
    snd->next = NULL;

    return snd;
}


/*
 * Convert a text string to a fully scoped name.
 */
static scopedNameDef *text2scopedName(ifaceFileDef *scope, char *text)
{
    return scopeScopedName(scope, text2scopePart(text));
}


/*
 * Prepend any current scope to a scoped name.
 */
static scopedNameDef *scopeScopedName(ifaceFileDef *scope, scopedNameDef *name)
{
    scopedNameDef *snd;

    snd = (scope != NULL ? copyScopedName(scope->fqcname) : text2scopePart(""));

    appendScopedName(&snd, name);

    return snd;
}


/*
 * Return a pointer to the tail part of a scoped name.
 */
char *scopedNameTail(scopedNameDef *snd)
{
    if (snd == NULL)
        return NULL;

    while (snd->next != NULL)
        snd = snd->next;

    return snd->name;
}


/*
 * Push the given scope onto the scope stack.
 */
static void pushScope(classDef *scope)
{
    if (currentScopeIdx >= MAX_NESTED_SCOPE)
        fatal("Internal error: increase the value of MAX_NESTED_SCOPE\n");

    scopeStack[currentScopeIdx] = scope;
    sectFlagsStack[currentScopeIdx] = sectionFlags;

    ++currentScopeIdx;
}


/*
 * Pop the scope stack.
 */
static void popScope(void)
{
    if (currentScopeIdx > 0)
        sectionFlags = sectFlagsStack[--currentScopeIdx];
}


/*
 * Return non-zero if the current input should be parsed rather than be
 * skipped.
 */
static int notSkipping()
{
    return (stackPtr == 0 ? TRUE : skipStack[stackPtr - 1]);
}


/*
 * Return the value of an expression involving a time period.
 */
static int timePeriod(const char *lname, const char *uname)
{
    int line;
    qualDef *qd, *lower, *upper;
    moduleDef *mod;

    if (lname == NULL)
        lower = NULL;
    else if ((lower = findQualifier(lname)) == NULL || lower->qtype != time_qualifier)
        yyerror("Lower bound is not a time version");

    if (uname == NULL)
        upper = NULL;
    else if ((upper = findQualifier(uname)) == NULL || upper->qtype != time_qualifier)
        yyerror("Upper bound is not a time version");

    /* Sanity checks on the bounds. */
    if (lower == NULL && upper == NULL)
        yyerror("Lower and upper bounds cannot both be omitted");

    if (lower != NULL && upper != NULL)
    {
        if (lower->module != upper->module || lower->line != upper->line)
            yyerror("Lower and upper bounds are from different timelines");

        if (lower == upper)
            yyerror("Lower and upper bounds must be different");

        if (lower->order > upper->order)
            yyerror("Later version specified as lower bound");
    }

    /* Go through each slot in the relevant timeline. */
    if (lower != NULL)
    {
        mod = lower->module;
        line = lower->line;
    }
    else
    {
        mod = upper->module;
        line = upper->line;
    }

    /* Handle the SIP version number pseudo-timeline. */
    if (line < 0)
    {
        if (lower != NULL && sipVersion < lower->order)
            return FALSE;

        if (upper != NULL && sipVersion >= upper->order)
            return FALSE;

        return TRUE;
    }

    for (qd = mod->qualifiers; qd != NULL; qd = qd->next)
    {
        if (qd->qtype != time_qualifier || qd->line != line)
            continue;

        if (selectedQualifier(neededQualifiers, qd))
        {
            if (lower != NULL && qd->order < lower->order)
                return FALSE;

            if (upper != NULL && qd->order >= upper->order)
                return FALSE;

            return TRUE;
        }
    }

    /*
     * If there is no upper bound then assume the expression is true unless
     * the lower bound is a backstop.
     */
    if (upper == NULL)
        return !isBackstop(lower);

    /*
     * If the upper limit corresponds to a backstop then assume the expression
     * is true.
     */
    return isBackstop(upper);
}


/*
 * See if a qualifier is a backstop.
 */
static int isBackstop(qualDef *qd)
{
    stringList *sl;

    for (sl = backstops; sl != NULL; sl = sl->next)
        if (strcmp(qd->name, sl->s) == 0)
            return TRUE;

    return FALSE;
}


/*
 * Return the value of an expression involving a single platform or feature.
 */
static int platOrFeature(char *name, int optnot)
{
    int this;
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd->qtype == time_qualifier)
        yyerror("No such platform or feature");

    /* Assume this sub-expression is false. */

    this = FALSE;

    if (qd->qtype == feature_qualifier)
    {
        if (!excludedFeature(excludedQualifiers, qd))
            this = TRUE;
    }
    else
    {
        if (!strictParse)
        {
            if (optnot)
            {
                moduleDef *mod;

                /* Add every platform except the one we have. */
                for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
                {
                    qualDef *not_qd;

                    for (not_qd = mod->qualifiers; not_qd != NULL; not_qd = not_qd->next)
                        if (not_qd->qtype == platform_qualifier && strcmp(not_qd->name, qd->name) != 0)
                            addPlatform(not_qd);
                }
            }
            else
            {
                addPlatform(qd);
            }

            /*
             * If it is a non-strict parse then this is always TRUE, ie. we
             * never skip because of the platform.
             */
            return TRUE;
        }

        if (selectedQualifier(neededQualifiers, qd))
            this = TRUE;
    }

    if (optnot)
        this = !this;

    return this;
}


/*
 * Add a platform to the current list of platforms if it is not already there.
 */
static void addPlatform(qualDef *qd)
{
    platformDef *pd;

    for (pd = currentPlatforms; pd != NULL; pd = pd->next)
        if (pd->qualifier == qd)
            return;

    pd = sipMalloc(sizeof (platformDef));
    pd->qualifier = qd;
    pd->next = currentPlatforms;
    currentPlatforms = pd;
}


/*
 * Return TRUE if the given qualifier is excluded.
 */
int excludedFeature(stringList *xsl, qualDef *qd)
{
    while (xsl != NULL)
    {
        if (strcmp(qd->name, xsl->s) == 0)
            return TRUE;

        xsl = xsl->next;
    }

    return !qd->default_enabled;
}


/*
 * Return TRUE if the given qualifier is needed.
 */
int selectedQualifier(stringList *needed_qualifiers, qualDef *qd)
{
    stringList *sl;

    for (sl = needed_qualifiers; sl != NULL; sl = sl->next)
        if (strcmp(qd->name, sl->s) == 0)
            return qd->default_enabled;

    return FALSE;
}


/*
 * Return the current scope.  currentScope() is only valid if notSkipping()
 * returns non-zero.
 */
static classDef *currentScope(void)
{
    return (currentScopeIdx > 0 ? scopeStack[currentScopeIdx - 1] : NULL);
}


/*
 * Create a new qualifier.
 */
static void newQualifier(moduleDef *mod, int line, unsigned order,
        int default_enabled, const char *name, qualType qt)
{
    qualDef *qd;

    /* See if it already exists. */
    if ((qd = findQualifier(name)) != NULL)
    {
        /*
         * We allow versions to be defined more than once so long as they are
         * in different timelines.  It is sometimes necessary to define the
         * same timeline in multiple modules if a module that others depend on
         * is added during the timeline (eg. QtWebEngineCore).
         */
        if (qd->qtype != time_qualifier || qt != time_qualifier || (qd->module == mod && qd->line == line))
            yyerror("Version is already defined");
    }

    allocQualifier(mod, line, order, default_enabled, name, qt);
}


/*
 * Allocate a new qualifier.
 */
static qualDef *allocQualifier(moduleDef *mod, int line, unsigned order,
        int default_enabled, const char *name, qualType qt)
{
    qualDef *qd;

    qd = sipMalloc(sizeof (qualDef));

    qd->name = name;
    qd->qtype = qt;
    qd->module = mod;
    qd->line = line;
    qd->order = order;
    qd->default_enabled = default_enabled;
    qd->next = mod->qualifiers;

    mod->qualifiers = qd;

    return qd;
}


/*
 * Create a new imported module.
 */
static void newImport(const char *filename)
{
    moduleDef *from, *mod;
    moduleListDef *mld;

    /* Create a new module if it has not already been defined. */
    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
        if (strcmp(mod->file, filename) == 0)
            break;

    from = currentModule;

    if (mod == NULL)
    {
        /* Read any configuration .toml file. */
        get_bindings_configuration(filename, &neededQualifiers,
                &excludedQualifiers);

        newModule(NULL, filename);
        mod = currentModule;
    }
    else if (from->encoding == no_type)
    {
        /* Import any defaults from the already parsed module. */
        from->encoding = mod->encoding;
    }

    /* Add the new import unless it has already been imported. */
    for (mld = from->imports; mld != NULL; mld = mld->next)
        if (mld->module == mod)
            return;

    mld = sipMalloc(sizeof (moduleListDef));
    mld->module = mod;
    mld->next = from->imports;

    from->imports = mld;
}


/*
 * Set up pointers to hook names.
 */
static void getHooks(optFlags *optflgs,char **pre,char **post)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs,"PreHook",name_flag)) != NULL)
        *pre = of -> fvalue.sval;
    else
        *pre = NULL;

    if ((of = getOptFlag(optflgs,"PostHook",name_flag)) != NULL)
        *post = of -> fvalue.sval;
    else
        *post = NULL;
}


/*
 * Get the /Transfer/ option flag.
 */
static int getTransfer(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "Transfer", bool_flag) != NULL);
}


/*
 * Get the /ReleaseGIL/ option flag.
 */
static int getReleaseGIL(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "ReleaseGIL", bool_flag) != NULL);
}


/*
 * Get the /HoldGIL/ option flag.
 */
static int getHoldGIL(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "HoldGIL", bool_flag) != NULL);
}


/*
 * Get the /Deprecated/ option flag.
 */
static int getDeprecated(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "Deprecated", bool_flag) != NULL);
}


/*
 * Get the /AllowNone/ option flag.
 */
static int getAllowNone(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "AllowNone", bool_flag) != NULL);
}


/*
 * Get the /DisallowNone/ option flag.
 */
static int getDisallowNone(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "DisallowNone", bool_flag) != NULL);
}


/*
 * Get the /VirtualErrorHandler/ option flag.
 */
static const char *getVirtErrorHandler(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "VirtualErrorHandler", name_flag);

    if (of == NULL)
        return NULL;

    return of->fvalue.sval;
}


/*
 * Get the /TypeHintValue/ option flag.
 */
static const char *getTypeHintValue(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "TypeHintValue", string_flag);

    if (of == NULL)
        return NULL;

    return of->fvalue.sval;
}


/*
 * Get the /TypeHint/, /TypeHintIn/ and /TypeHintOut/ option flags.
 */
static void getTypeHints(optFlags *optflgs, typeHintDef **in,
        typeHintDef **out)
{
    optFlag *of;
    typeHintDef *thd;

    if ((of = getOptFlag(optflgs, "TypeHint", string_flag)) != NULL)
        thd = newTypeHint(of->fvalue.sval);
    else
        thd = NULL;

    if ((of = getOptFlag(optflgs, "TypeHintIn", string_flag)) != NULL)
    {
        if (thd != NULL)
            yywarning("/TypeHintIn/ overrides /TypeHint/");

        *in = newTypeHint(of->fvalue.sval);
    }
    else
    {
        *in = thd;
    }

    if ((of = getOptFlag(optflgs, "TypeHintOut", string_flag)) != NULL)
    {
        if (thd != NULL)
            yywarning("/TypeHintOut/ overrides /TypeHint/");

        *out = newTypeHint(of->fvalue.sval);
    }
    else
    {
        *out = thd;
    }
}


/*
 * Get the /NoTypeHint/ option flag.
 */
static int getNoTypeHint(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "NoTypeHint", bool_flag) != NULL);
}


/*
 * Return TRUE if the PyQt5 plugin was specified.
 */
int pluginPyQt5(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt5");
}


/*
 * Return TRUE if the PyQt6 plugin was specified.
 */
int pluginPyQt6(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt6");
}


/*
 * Return TRUE if a list of strings contains a given entry.
 */
static int stringFind(stringList *sl, const char *s)
{
    while (sl != NULL)
    {
        if (strcmp(sl->s, s) == 0)
            return TRUE;

        sl = sl->next;
    }

    return FALSE;
}


/*
 * Set the name of a module.
 */
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname)
{
    mod->fullname = cacheName(pt, fullname);

    if (inMainModule())
        setIsUsedName(mod->fullname);

    if ((mod->name = strrchr(fullname, '.')) != NULL)
        mod->name++;
    else
        mod->name = fullname;
}


/*
 * Define a new class and set its name.
 */
static void defineClass(scopedNameDef *snd, classList *supers, optFlags *of)
{
    classDef *cd;
    typeHintDef *in, *out;

    getTypeHints(of, &in, &out);

    cd = newClass(currentSpec, class_iface, fullyQualifiedName(snd),
            getVirtErrorHandler(of), in, out, getTypeHintValue(of));
    cd->supers = supers;

    pushScope(cd);
}


/*
 * Return a fully qualified scoped name.
 */
static scopedNameDef *fullyQualifiedName(scopedNameDef *snd)
{
    classDef *scope = currentScope();

    return scopeScopedName((scope != NULL ? scope->iff : NULL), snd);
}


/*
 * Complete the definition of a class.
 */
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def)
{
    classDef *cd = currentScope();

    /* See if the class was defined or just declared. */
    if (has_def)
    {
        if (snd->next != NULL)
            yyerror("A scoped name cannot be given in a class/struct/union definition");

    }
    else if (cd->supers != NULL)
        yyerror("Class/struct has super-classes but no definition");
    else
        setIsOpaque(cd);

    finishClass(currentSpec, currentModule, cd, of);
    popScope();

    /*
     * Check that external classes have only been declared at the global scope.
     */
    if (isExternal(cd) && currentScope() != NULL)
        yyerror("External classes/structs/unions can only be declared in the global scope");

    return cd;
}


/*
 * Add a variable to the list so that the list remains sorted.
 */
static void addVariable(sipSpec *pt, varDef *vd)
{
    varDef **at = &pt->vars;

    while (*at != NULL)
    {
        if (strcmp(vd->pyname->text, (*at)->pyname->text) < 0)
            break;

        at = &(*at)->next;
    }

    vd->next = *at;
    *at = vd;
}


/*
 * Update a type according to optional flags.
 */
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags)
{
    getTypeHints(flags, &ad->typehint_in, &ad->typehint_out);

    if (getOptFlag(flags, "PyInt", bool_flag) != NULL)
    {
        if (ad->atype == string_type)
            ad->atype = byte_type;
        else if (ad->atype == sstring_type)
            ad->atype = sbyte_type;
        else if (ad->atype == ustring_type)
            ad->atype = ubyte_type;
    }

    if (ad->atype == string_type && !isArray(ad) && !isReference(ad))
    {
        optFlag *of;

        if ((of = getOptFlag(flags, "Encoding", string_flag)) == NULL)
        {
            if (mod->encoding != no_type)
                ad->atype = mod->encoding;
            else
                ad->atype = string_type;
        }
        else if ((ad->atype = convertEncoding(of->fvalue.sval)) == no_type)
            yyerror("The value of the /Encoding/ annotation must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
    }
}


/*
 * Return the keyword argument support converted from a string.
 */
static KwArgs convertKwArgs(const char *kwargs)
{
    if (strcmp(kwargs, "None") == 0)
        return NoKwArgs;

    if (strcmp(kwargs, "All") == 0)
        return AllKwArgs;

    if (strcmp(kwargs, "Optional") == 0)
        return OptionalKwArgs;

    yyerror("The style of keyword argument support must be one of \"All\", \"Optional\" or \"None\"");
}


/*
 * Return the Format for a string.
 */
static Format convertFormat(const char *format)
{
    if (strcmp(format, "raw") == 0)
        return raw;

    if (strcmp(format, "deindented") == 0)
        return deindented;

    yyerror("The docstring format must be either \"raw\" or \"deindented\"");
}


/*
 * Return the Signature for a string.
 */
static Signature convertSignature(const char *signature)
{
    if (strcmp(signature, "discarded") == 0)
        return discarded;

    if (strcmp(signature, "prepended") == 0)
        return prepended;

    if (strcmp(signature, "appended") == 0)
        return appended;

    yyerror("The docstring signature must be either \"discarded\", \"prepended\" or \"appended\"");
}


/*
 * Return the argument type for a string with the given encoding or no_type if
 * the encoding was invalid.
 */
static argType convertEncoding(const char *encoding)
{
    if (strcmp(encoding, "ASCII") == 0)
        return ascii_string_type;

    if (strcmp(encoding, "Latin-1") == 0)
        return latin1_string_type;

    if (strcmp(encoding, "UTF-8") == 0)
        return utf8_string_type;

    if (strcmp(encoding, "None") == 0)
        return string_type;

    return no_type;
}


/*
 * Return the style of keyword argument support for a signature.
 */
static KwArgs keywordArgs(moduleDef *mod, optFlags *optflgs, signatureDef *sd,
        int need_name)
{
    KwArgs kwargs;
    optFlag *ka_anno;

    /* See if there was an explicit annotation. */
    ka_anno = getOptFlag(optflgs, "KeywordArgs", string_flag);

    if (ka_anno != NULL)
        kwargs = convertKwArgs(ka_anno->fvalue.sval);
    else
        kwargs = mod->kwargs;

    /* An ellipsis cannot be used with keyword arguments. */
    if (sd->nrArgs > 0 && sd->args[sd->nrArgs - 1].atype == ellipsis_type)
        kwargs = NoKwArgs;

    if (kwargs != NoKwArgs)
    {
        int a, is_name = FALSE;

        /*
         * Mark argument names as being used and check there is at least one.
         */
        for (a = 0; a < sd->nrArgs; ++a)
        {
            argDef *ad = &sd->args[a];

            if (kwargs == OptionalKwArgs && ad->defval == NULL)
                continue;

            if (ad->name != NULL)
            {
                if (need_name || inMainModule())
                    setIsUsedName(ad->name);

                is_name = TRUE;
            }
        }

        if (!is_name)
            kwargs = NoKwArgs;
    }

    return kwargs;
}


/*
 * Extract the version of a string value optionally associated with a
 * particular feature.
 */
static char *convertFeaturedString(char *fs)
{
    while (fs != NULL)
    {
        char *next, *value;

        /* Individual values are ';' separated. */
        if ((next = strchr(fs, ';')) != NULL)
            *next++ = '\0';

        /* Features and values are ':' separated. */
        if ((value = strchr(fs, ':')) == NULL)
        {
            /* This is an unconditional value so just return it. */
            return strip(fs);
        }

        *value++ = '\0';

        if (isEnabledFeature(strip(fs)))
            return strip(value);

        fs = next;
    }

    /* No value was enabled. */
    return NULL;
}


/*
 * Return the stripped version of a string.
 */
static char *strip(char *s)
{
    while (*s == ' ')
        ++s;

    if (*s != '\0')
    {
        char *cp = &s[strlen(s) - 1];

        while (*cp == ' ')
            *cp-- = '\0';
    }

    return s;
}


/*
 * Return TRUE if the given feature is enabled.
 */
static int isEnabledFeature(const char *name)
{
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd->qtype != feature_qualifier)
        yyerror("No such feature");

    return !excludedFeature(excludedQualifiers, qd);
}


/*
 * Add a property definition to a class.
 */
static void addProperty(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *name, const char *get, const char *set,
        docstringDef *docstring)
{
    propertyDef *pd;

    checkAttributes(pt, mod, cd, NULL, name, FALSE);

    pd = sipMalloc(sizeof (propertyDef));

    pd->name = cacheName(pt, name);
    pd->get = get;
    pd->set = set;
    pd->docstring = docstring;
    pd->platforms = currentPlatforms;
    pd->next = cd->properties;

    cd->properties = pd;

    if (inMainModule())
        setIsUsedName(pd->name);
}


/*
 * Configure a module and return the (possibly new) current module.
 */
static moduleDef *configureModule(sipSpec *pt, moduleDef *module,
        const char *filename, const char *name, int c_module, KwArgs kwargs,
        int use_arg_names, int use_limited_api, int call_super_init,
        int all_raise_py_exc, const char *def_error_handler,
        docstringDef *docstring)
{
    moduleDef *mod;

    /* Check the module hasn't already been defined. */
    for (mod = pt->modules; mod != NULL; mod = mod->next)
        if (mod->fullname != NULL && strcmp(mod->fullname->text, name) == 0)
            yyerror("Module is already defined");

    /*
     * If we are in a container module then create a component module and make
     * it current.
     */
    if (isContainer(module) || module->container != NULL)
    {
        mod = allocModule();

        mod->file = filename;
        mod->container = (isContainer(module) ? module : module->container);

        module = mod;
    }

    setModuleName(pt, module, name);
    module->kwargs = kwargs;
    module->virt_error_handler = def_error_handler;
    module->docstring = docstring;

    if (all_raise_py_exc)
        setAllRaisePyException(module);

    if (use_arg_names)
        setUseArgNames(module);

    if (use_limited_api)
        setUseLimitedAPI(module);

    if (call_super_init == 0)
        setCallSuperInitNo(module);
    else if (call_super_init > 0)
        setCallSuperInitYes(module);

    if (pt->genc < 0)
        pt->genc = c_module;
    else if (pt->genc != c_module)
        yyerror("Cannot mix C and C++ modules");

    return module;
}


/*
 * Add a Python naming rule to a module.
 */
static void addAutoPyName(moduleDef *mod, const char *remove_leading)
{
    autoPyNameDef *apnd, **apndp;

    for (apndp = &mod->autopyname; *apndp != NULL; apndp = &(*apndp)->next)
        ;

    apnd = sipMalloc(sizeof (autoPyNameDef));
    apnd->remove_leading = remove_leading;
    apnd->next = *apndp;

    *apndp = apnd;
}


/*
 * Check that no invalid or unknown annotations are given.
 */
static void checkAnnos(optFlags *annos, const char *valid[])
{
    int i;

    if (parsingCSignature && annos->nrFlags != 0)
        yyerror("Annotations must not be used in explicit C/C++ signatures");

    for (i = 0; i < annos->nrFlags; i++)
    {
        const char **name;

        for (name = valid; *name != NULL; ++name)
            if (strcmp(*name, annos->flags[i].fname) == 0)
                break;

        if (*name == NULL)
            yyerror("Annotation is unknown");
    }
}


/*
 * Handle any /KeepReference/ annotation for a type.
 */
static void handleKeepReference(optFlags *optflgs, argDef *ad, moduleDef *mod)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs, "KeepReference", opt_integer_flag)) != NULL)
    {
        setKeepReference(ad);

        if ((ad->key = of->fvalue.ival) < -1)
            yyerror("/KeepReference/ key cannot be negative");

        /* If there was no explicit key then auto-allocate one. */
        if (ad->key == -1)
            ad->key = mod->next_key--;
    }
}


/*
 * Configure the mapped type annotations that are also valid with mapped type
 * templates.
 */
static void mappedTypeAnnos(sipSpec *pt, mappedTypeDef *mtd, optFlags *optflgs)
{
    optFlag *of;

    if (getOptFlag(optflgs, "NoRelease", bool_flag) != NULL)
        setNoRelease(mtd);

    if (getAllowNone(optflgs))
        setHandlesNone(mtd);

    getTypeHints(optflgs, &mtd->typehint_in, &mtd->typehint_out);
    mtd->typehint_value = getTypeHintValue(optflgs);

    if ((of = getOptFlag(optflgs, "PyQtFlags", integer_flag)) != NULL)
    {
        if (!pluginPyQt6(pt))
            yyerror("/PyQtFlags/ is only supported for PyQt6");

        mtd->pyqt_flags = of->fvalue.ival;
    }
}


/*
 * Initialise an argument with the derefences of another, plus a new one.
 */
static void add_new_deref(argDef *new, argDef *orig, int isconst)
{
    if ((new->nrderefs = orig->nrderefs + 1) >= MAX_NR_DEREFS)
        yyerror("Internal error - increase the value of MAX_NR_DEREFS");

    memcpy(&new->derefs[0], &orig->derefs[0], sizeof (new->derefs));
    new->derefs[orig->nrderefs] = isconst;
}


/*
 * Add the dereferences from one type to another.
 */
static void add_derefs(argDef *dst, argDef *src)
{
    int i;

    for (i = 0; i < src->nrderefs; ++i)
    {
        if (dst->nrderefs >= MAX_NR_DEREFS - 1)
            fatal("Internal error - increase the value of MAX_NR_DEREFS\n");

        dst->derefs[dst->nrderefs++] = src->derefs[i];
    }
}


/*
 * Check if a word is a Python keyword (or has been at any time).
 */
int isPyKeyword(const char *word)
{
    static const char *kwds[] = {
        "False", "None", "True", "and", "as", "assert", "break", "class",
        "continue", "def", "del", "elif", "else", "except", "finally", "for",
        "from", "global", "if", "import", "in", "is", "lambda", "nonlocal",
        "not", "or", "pass", "raise", "return", "try", "while", "with'"
        "yield",
        /* Historical keywords. */
        "exec", "print",
        NULL
    };

    const char **kwd;

    for (kwd = kwds; *kwd != NULL; ++kwd)
        if (strcmp(*kwd, word) == 0)
            return TRUE;

    return FALSE;
}


/*
 * Check there is nothing after an ellipsis.
 */
static void checkEllipsis(signatureDef *sd)
{
    int a;

    for (a = 0; a < sd->nrArgs; ++a)
        if (sd->args[a].atype == ellipsis_type && a < sd->nrArgs - 1)
            yyerror("An ellipsis must be at the end of the argument list if /NoArgParser/ is not specified");
}


/*
 * Check the usage of user state and return TRUE if it is used.
 */
static int checkUserState(codeBlockList *convtocode,
        codeBlockList *releasecode)
{
    int convto_us, release_us;

    convto_us = usedInCode(convtocode, "sipUserState");
    release_us = usedInCode(releasecode, "sipUserState");

    if (convto_us != release_us)
        yyerror("Both %%ConvertToTypeCode and %%ReleaseCode must use user state or neither must");

    return convto_us;
}

