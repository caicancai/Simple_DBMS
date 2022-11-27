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
extern YYSTYPE yylval;
