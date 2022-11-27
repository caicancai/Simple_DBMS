/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "sql.y"
#include "sql.h"

char database[64]={0};

int yylex();
int yyparse();

void yyerror (const char *str) 
{
	fprintf(stderr, "error: %s\n", str);		/* error function*/
}

int yywrap() 
{
	return 1;
}
/* main function */
int main() 
{
	printf("SQL>");
	return	yyparse(); /* calling parse funtion */
} 

#line 27 "sql.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{  
	int intval;   
  	char *strval;
  	struct hyper_items_def *Citemsval;
  	struct value_def *valueval;
  	struct item_def *itemval;
  	struct conditions_def *conval;
  	struct table_def *tbval;
  	struct upcon_def *updateval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 63 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define SELECT 257
#define FROM 258
#define WHERE 259
#define AND 260
#define OR 261
#define DROP 262
#define DELETE 263
#define TABLE 264
#define CREATE 265
#define INTO 266
#define VALUES 267
#define INSERT 268
#define UPDATE 269
#define SET 270
#define SHOW 271
#define DATABASE 272
#define DATABASES 273
#define TABLES 274
#define EXIT 275
#define USE 276
#define NUMBER 277
#define STRING 278
#define ID 279
#define INT 280
#define CHAR 281
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,   13,   13,   13,   13,   13,   13,   13,   13,
   13,   22,   15,   15,   14,   14,   16,   16,   16,   16,
   18,   18,   17,   17,   19,   19,   20,   20,   21,    3,
    3,    2,    2,    6,    7,    7,    5,    5,    4,    4,
    1,    1,    1,    1,    1,    1,    8,    8,    9,    9,
    9,    9,   10,   10,   11,   11,   12,   12,
};
static const YYINT yylen[] = {                            2,
    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    4,    4,    4,    8,    5,    6,    6,    8,    8,
    5,    7,    9,   12,    6,    8,    5,    5,    2,    2,
    5,    1,    3,    1,    1,    3,    1,    1,    1,    3,
    1,    1,    1,    1,    1,    2,    3,    3,    1,    3,
    3,    3,    1,    3,    3,    3,    1,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    2,    3,    4,    5,    6,    7,    8,    9,   10,   11,
   34,    0,   35,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   29,    0,    1,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   53,
    0,    0,   36,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   57,    0,   13,   14,   12,    0,    0,    0,
    0,    0,   27,   28,    0,    0,   49,    0,   21,    0,
    0,   32,   16,    0,    0,    0,    0,    0,    0,    0,
   17,   54,    0,   18,    0,   41,   42,   43,   44,   45,
    0,    0,    0,    0,    0,   30,    0,    0,    0,   37,
   38,    0,   39,    0,   55,   56,    0,   25,   58,    0,
    0,   50,   46,   47,   48,   51,    0,   22,    0,    0,
   33,    0,    0,    0,    0,   19,   20,    0,   15,    0,
   40,    0,   26,   31,   23,    0,    0,    0,   24,
};
static const YYINT yydgoto[] = {                         10,
  102,   81,   82,  112,  113,   76,   24,   77,   78,   51,
   63,   64,   11,   12,   13,   14,   15,   16,   17,   18,
   19,   20,
};
static const YYINT yysindex[] = {                      -218,
  -40, -252, -248, -249, -245, -254, -238,  -29, -231, -218,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -192,    0,  -31, -212, -210, -209, -208, -207, -206,
 -196,   16,   17,    0,   18,    0, -201, -201, -200,   21,
   22,  -45,   42,   24,  -37, -195,   75,   76,   77,    0,
  -28,  -27,    0,   78,   79,  -39,   80, -188,   82,   53,
 -200,   33,    0,  -26,    0,    0,    0,  -39,   85, -183,
  -39,   87,    0,    0,  -39,  -33,    0,  -55,    0, -239,
   -7,    0,    0, -217,   -1, -215,  -39,   88, -195,  -52,
    0,    0,  -50,    0,  -36,    0,    0,    0,    0,    0,
   38, -213,  -39,  -39,   90,    0,   61,   43, -188,    0,
    0,    8,    0, -164,    0,    0,  -48,    0,    0,   94,
   95,    0,    0,    0,    0,    0, -154,    0, -170,   98,
    0,   50, -217,   70,  101,    0,    0,   71,    0,  103,
    0, -217,    0,    0,    0,   15,   55,  105,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -35,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    9,  -25,  -17,    7,   58,    0,  -49,   83,
   31,    0,  112,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
#define YYTABLESIZE 250
static const YYINT yytable[] = {                        101,
   75,   22,   61,  105,  122,   52,  120,   23,  121,   27,
  135,   25,   39,   57,   28,   70,   70,   89,   90,   26,
   30,   93,   29,   52,   31,   95,   98,   96,   97,   34,
   69,   72,   88,  108,   32,   33,  109,  117,    1,  114,
  106,  107,   39,    2,    3,   53,    4,   35,  132,    5,
    6,  133,    7,  126,  127,  147,    8,    9,  133,  110,
  111,  115,  116,  124,  125,   37,   40,   23,   41,   42,
   43,   44,   45,   46,   47,   48,   49,   50,   21,   54,
   55,   58,   59,   62,   65,   66,   67,   73,   74,   79,
   80,   83,   84,   86,   91,   92,   94,  118,  123,  128,
  129,  130,  134,  136,  137,  103,  138,  139,  140,  142,
  143,  144,  145,  148,  149,  141,  146,  131,   85,  119,
   52,   36,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  103,  104,    0,  103,  104,  103,
  104,  103,  104,   56,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  103,  104,   52,   38,    0,    0,   60,
   68,   71,   87,    0,    0,    0,    0,    0,   21,   21,
    0,    0,    0,    0,    0,    0,    0,    0,   99,  100,
};
static const YYINT yycheck[] = {                         33,
   40,   42,   40,   59,   41,   41,   59,    1,   59,  258,
   59,  264,   44,   59,  264,   44,   44,   44,   68,  272,
  266,   71,  272,   59,  279,   75,   60,   61,   62,   59,
   59,   59,   59,   41,  273,  274,   44,   87,  257,   41,
  280,  281,   44,  262,  263,   39,  265,  279,   41,  268,
  269,   44,  271,  103,  104,   41,  275,  276,   44,  277,
  278,  277,  278,  277,  278,  258,  279,   61,  279,  279,
  279,  279,  279,  270,   59,   59,   59,  279,  279,   59,
   59,   40,   59,  279,   10,   10,   10,   10,   10,   10,
  279,   10,   40,   61,   10,  279,   10,   10,   61,   10,
   40,   59,  267,   10,   10,  260,  277,   10,   59,   40,
   10,   41,   10,   59,   10,  133,  142,  109,   61,   89,
   38,   10,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  260,  261,   -1,  260,  261,  260,
  261,  260,  261,  259,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  260,  261,  261,  258,   -1,   -1,  267,
  259,  259,  259,   -1,   -1,   -1,   -1,   -1,  279,  279,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,
};
#define YYFINAL 10
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 283
#define YYUNDFTOKEN 308
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'!'",0,0,0,0,0,0,"'('","')'","'*'",0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"SELECT","FROM","WHERE","AND","OR","DROP","DELETE","TABLE","CREATE",
"INTO","VALUES","INSERT","UPDATE","SET","SHOW","DATABASE","DATABASES","TABLES",
"EXIT","USE","NUMBER","STRING","ID","INT","CHAR","\">=\"","\"<=\"",0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : statements",
"statements : statements statement",
"statements : statement",
"statement : createsql",
"statement : showsql",
"statement : selectsql",
"statement : insertsql",
"statement : deletesql",
"statement : updatesql",
"statement : dropsql",
"statement : exitsql",
"statement : usesql",
"usesql : USE ID ';' '\\n'",
"showsql : SHOW DATABASES ';' '\\n'",
"showsql : SHOW TABLES ';' '\\n'",
"createsql : CREATE TABLE ID '(' hyper_items ')' ';' '\\n'",
"createsql : CREATE DATABASE ID ';' '\\n'",
"selectsql : SELECT '*' FROM tables ';' '\\n'",
"selectsql : SELECT item_list FROM tables ';' '\\n'",
"selectsql : SELECT '*' FROM tables WHERE conditions ';' '\\n'",
"selectsql : SELECT item_list FROM tables WHERE conditions ';' '\\n'",
"deletesql : DELETE FROM ID ';' '\\n'",
"deletesql : DELETE FROM ID WHERE conditions ';' '\\n'",
"insertsql : INSERT INTO ID VALUES '(' value_list ')' ';' '\\n'",
"insertsql : INSERT INTO ID '(' item_list ')' VALUES '(' value_list ')' ';' '\\n'",
"updatesql : UPDATE ID SET up_conds ';' '\\n'",
"updatesql : UPDATE ID SET up_conds WHERE conditions ';' '\\n'",
"dropsql : DROP TABLE ID ';' '\\n'",
"dropsql : DROP DATABASE ID ';' '\\n'",
"exitsql : EXIT ';'",
"create_items : ID INT",
"create_items : ID CHAR '(' NUMBER ')'",
"hyper_items : create_items",
"hyper_items : hyper_items ',' create_items",
"item : ID",
"item_list : item",
"item_list : item_list ',' item",
"value : NUMBER",
"value : STRING",
"value_list : value",
"value_list : value_list ',' value",
"comparator : '='",
"comparator : '>'",
"comparator : '<'",
"comparator : \">=\"",
"comparator : \"<=\"",
"comparator : '!' '='",
"condition : item comparator NUMBER",
"condition : item comparator STRING",
"conditions : condition",
"conditions : '(' conditions ')'",
"conditions : conditions AND conditions",
"conditions : conditions OR conditions",
"tables : ID",
"tables : tables ',' ID",
"up_cond : ID '=' NUMBER",
"up_cond : ID '=' STRING",
"up_conds : up_cond",
"up_conds : up_conds ',' up_cond",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 12:
#line 59 "sql.y"
	{
					printf("\n");
					useDB(yystack.l_mark[-2].strval);
					printf("\nSQL>");
		        }
break;
case 13:
#line 65 "sql.y"
	{
					printf("\n");
		            showDB();
		            printf("\nSQL>");
		        }
break;
case 14:
#line 70 "sql.y"
	{
		        	printf("\n");
		            showTable();
		            printf("\nSQL>");
		        }
break;
case 15:
#line 76 "sql.y"
	{
					printf("\n");
                	createTable(yystack.l_mark[-5].strval, yystack.l_mark[-3].Citemsval);
                	printf("\nSQL>");
				}
break;
case 16:
#line 82 "sql.y"
	{
					strcpy(database, yystack.l_mark[-2].strval);
					printf("\n");
					createDB();
					printf("\nSQL>");
				}
break;
case 17:
#line 89 "sql.y"
	{
					printf("\n");
					selectWhere(NULL, yystack.l_mark[-2].tbval, NULL);
					printf("\n");
					printf("SQL>");
				}
break;
case 18:
#line 95 "sql.y"
	{
					printf("\n");
					selectWhere(yystack.l_mark[-4].itemval, yystack.l_mark[-2].tbval, NULL);
					printf("\nSQL>");
				}
break;
case 19:
#line 100 "sql.y"
	{
					printf("\n");
					selectWhere(NULL, yystack.l_mark[-4].tbval, yystack.l_mark[-2].conval);
					printf("\nSQL>");
				}
break;
case 20:
#line 105 "sql.y"
	{ 
					printf("\n");
					selectWhere(yystack.l_mark[-6].itemval, yystack.l_mark[-4].tbval, yystack.l_mark[-2].conval);
					printf("\nSQL>");
				}
break;
case 21:
#line 111 "sql.y"
	{
					printf("\n");
					deletes(yystack.l_mark[-2].strval, NULL);
					printf("\n");
					printf("SQL>");
				}
break;
case 22:
#line 118 "sql.y"
	{ 
					printf("\n");
					deletes(yystack.l_mark[-4].strval, yystack.l_mark[-2].conval);
					printf("\nSQL>");
				}
break;
case 23:
#line 125 "sql.y"
	{
					printf("\n");
					multiInsert(yystack.l_mark[-6].strval, NULL, yystack.l_mark[-3].valueval);
					printf("\nSQL>");
				}
break;
case 24:
#line 131 "sql.y"
	{
					printf("\n");
					multiInsert(yystack.l_mark[-9].strval, yystack.l_mark[-7].itemval, yystack.l_mark[-3].valueval);
					printf("\nSQL>");
				}
break;
case 25:
#line 138 "sql.y"
	{
					printf("\n");
					updates(yystack.l_mark[-4].strval, yystack.l_mark[-2].updateval, NULL);
					printf("\nSQL>");
				}
break;
case 26:
#line 144 "sql.y"
	{
					printf("\n");
					updates(yystack.l_mark[-6].strval, yystack.l_mark[-4].updateval, yystack.l_mark[-2].conval);
					printf("\nSQL>");
				}
break;
case 27:
#line 150 "sql.y"
	{
					printf("\n");
					dropTable(yystack.l_mark[-2].strval);
					printf("\nSQL>");
				}
break;
case 28:
#line 155 "sql.y"
	{
					printf("\n");
					dropDB(yystack.l_mark[-2].strval);
					printf("\nSQL>");
				}
break;
case 29:
#line 161 "sql.y"
	{
					printf("\n");
		            printf("exit with code 0!\n");
		            exit(0);
		        }
break;
case 30:
#line 167 "sql.y"
	{
					yyval.Citemsval = (struct hyper_items_def *)malloc(sizeof(struct hyper_items_def));
                    yyval.Citemsval->field = yystack.l_mark[-1].strval;
                    yyval.Citemsval->type = 0;	
                    yyval.Citemsval->next = NULL;	
				}
break;
case 31:
#line 173 "sql.y"
	{
					yyval.Citemsval = (struct hyper_items_def *)malloc(sizeof(struct hyper_items_def));
                    yyval.Citemsval->field = yystack.l_mark[-4].strval;
                    yyval.Citemsval->type = 1;
                    yyval.Citemsval->next = NULL;	
				}
break;
case 32:
#line 180 "sql.y"
	{
					yyval.Citemsval = yystack.l_mark[0].Citemsval;
				}
break;
case 33:
#line 183 "sql.y"
	{
					yyval.Citemsval = yystack.l_mark[0].Citemsval;
					yyval.Citemsval->next = yystack.l_mark[-2].Citemsval;				
				}
break;
case 34:
#line 188 "sql.y"
	{
					yyval.itemval = (struct item_def *)malloc(sizeof(struct item_def));
					yyval.itemval->field = yystack.l_mark[0].strval;
					yyval.itemval->pos = NULL;
					yyval.itemval->next = NULL;
				}
break;
case 35:
#line 195 "sql.y"
	{
					yyval.itemval = yystack.l_mark[0].itemval;				
				}
break;
case 36:
#line 198 "sql.y"
	{
					yyval.itemval = yystack.l_mark[0].itemval;
					yyval.itemval->next = yystack.l_mark[-2].itemval;
				}
break;
case 37:
#line 203 "sql.y"
	{
					yyval.valueval = ((struct value_def *)malloc(sizeof(struct value_def)));
					yyval.valueval->value.intkey = yystack.l_mark[0].intval;
					yyval.valueval->type = 0;
					yyval.valueval->next = NULL;
				}
break;
case 38:
#line 209 "sql.y"
	{
					yyval.valueval = ((struct value_def *)malloc(sizeof(struct value_def)));
					strcpy(yyval.valueval->value.skey, yystack.l_mark[0].strval);
					yyval.valueval->type = 1;
					yyval.valueval->next = NULL;
				}
break;
case 39:
#line 216 "sql.y"
	{
					yyval.valueval = yystack.l_mark[0].valueval;
				}
break;
case 40:
#line 219 "sql.y"
	{
					yyval.valueval = yystack.l_mark[0].valueval;
					yyval.valueval->next = yystack.l_mark[-2].valueval;
				}
break;
case 41:
#line 224 "sql.y"
	{yyval.intval = 1; }
break;
case 42:
#line 225 "sql.y"
	{yyval.intval = 2; }
break;
case 43:
#line 226 "sql.y"
	{yyval.intval = 3; }
break;
case 44:
#line 227 "sql.y"
	{yyval.intval = 4; }
break;
case 45:
#line 228 "sql.y"
	{yyval.intval = 5; }
break;
case 46:
#line 229 "sql.y"
	{yyval.intval = 6; }
break;
case 47:
#line 231 "sql.y"
	{
					yyval.conval = ((struct conditions_def *)malloc(sizeof(struct conditions_def)));
					yyval.conval->type = 0;
					yyval.conval->litem = yystack.l_mark[-2].itemval;
					yyval.conval->intv = yystack.l_mark[0].intval;
					yyval.conval->cmp_op = yystack.l_mark[-1].intval;
					yyval.conval->left = NULL;
					yyval.conval->right = NULL;
				}
break;
case 48:
#line 240 "sql.y"
	{
					yyval.conval = ((struct conditions_def *)malloc(sizeof(struct conditions_def)));
					yyval.conval->type = 1;
					yyval.conval->litem = yystack.l_mark[-2].itemval;
					yyval.conval->strv = yystack.l_mark[0].strval;
					yyval.conval->cmp_op = yystack.l_mark[-1].intval;
					yyval.conval->left = NULL;
					yyval.conval->right = NULL;
				}
break;
case 49:
#line 250 "sql.y"
	{
					yyval.conval = yystack.l_mark[0].conval;
				}
break;
case 50:
#line 253 "sql.y"
	{
					yyval.conval = yystack.l_mark[-1].conval;
				}
break;
case 51:
#line 256 "sql.y"
	{
					yyval.conval = ((struct conditions_def *)malloc(sizeof(struct conditions_def)));
					yyval.conval->cmp_op = 7;
					yyval.conval->left = yystack.l_mark[-2].conval;
					yyval.conval->right = yystack.l_mark[0].conval;
				}
break;
case 52:
#line 262 "sql.y"
	{
					yyval.conval = ((struct conditions_def *)malloc(sizeof(struct conditions_def)));
					yyval.conval->cmp_op = 8;
					yyval.conval->left = yystack.l_mark[-2].conval;
					yyval.conval->right = yystack.l_mark[0].conval;
				}
break;
case 53:
#line 269 "sql.y"
	{
					yyval.tbval = ((struct table_def *)malloc(sizeof(struct table_def)));
					yyval.tbval->table = yystack.l_mark[0].strval;
					yyval.tbval->next = NULL;
				}
break;
case 54:
#line 274 "sql.y"
	{
					yyval.tbval = ((struct table_def *)malloc(sizeof(struct table_def)));
					yyval.tbval->table = yystack.l_mark[0].strval;
					yyval.tbval->next = yystack.l_mark[-2].tbval;				
				}
break;
case 55:
#line 280 "sql.y"
	{
					yyval.updateval = ((struct upcon_def *)malloc(sizeof(struct upcon_def)));
					yyval.updateval->field = yystack.l_mark[-2].strval;
					yyval.updateval->type = 0;
					yyval.updateval->value.intkey = yystack.l_mark[0].intval;
					yyval.updateval->next = NULL;
				}
break;
case 56:
#line 287 "sql.y"
	{
					yyval.updateval = ((struct upcon_def *)malloc(sizeof(struct upcon_def)));
					yyval.updateval->field = yystack.l_mark[-2].strval;
					yyval.updateval->type = 1;
					strcpy(yyval.updateval->value.skey, yystack.l_mark[0].strval);
					yyval.updateval->next = NULL;				
				}
break;
case 57:
#line 295 "sql.y"
	{
					yyval.updateval = yystack.l_mark[0].updateval;
				}
break;
case 58:
#line 298 "sql.y"
	{
					yyval.updateval = yystack.l_mark[0].updateval;
					yyval.updateval->next = yystack.l_mark[-2].updateval;
				}
break;
#line 933 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
