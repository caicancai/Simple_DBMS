#ifndef _SQL_H
#define _SQL_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

typedef union KEY{
    int intkey;
    char skey[64];
}KEY;

typedef struct field{
    char name[64];
    int type;
    union KEY key[100];
}field;

typedef struct table{
    char name[64];
    struct field *ffield;
    int flen;
    int ilen;
    struct table *next;
}table;

typedef struct mydb{
    char name[64];
    struct table *tbroot;
    struct mydb *next;
}mydb;

typedef struct hyper_items_def{
    char *field;
    int type;
    struct hyper_items_def *next;
}hyper_items_def;

typedef struct value_def{
    union KEY value;
    int type;
    struct value_def *next;
}value_def;

typedef struct item_def{
    char *field;
    struct field *pos;
    struct item_def *next;
}field_def;

typedef struct conditions_def{
    int type;
    struct item_def *litem;
    int intv;
    char *strv;
    int cmp_op;
    struct conditions_def *left;
    struct conditions_def *right;
}conditions_def;

typedef struct table_def{
    char *table;
    struct table *pos;
    struct table_def *next;
}table_def;

typedef struct upcon_def{
    char *field;
    int type;
    union KEY value;
    struct field *pos;
    struct upcon_def *next;
}upcon_def;

void createDB();
void showDB();
void useDB(char *dbname);
void createTable(char *tableval, struct hyper_items_def *Hitemroot);
void showTable();
void multiInsert(char *tableval, struct item_def *itemroot, struct value_def *valroot);
void selectWhere(struct item_def *itemroot, struct table_def *tableroot, struct conditions_def *conroot);
void deletes(char *tableval, struct conditions_def *conroot);
void updates(char *tableval, struct upcon_def *uproot, struct conditions_def *conroot);
void dropTable(char *tableval);
void dropDB(char *dbname);
#endif