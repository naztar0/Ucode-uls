#include "uls.h"

typedef struct fl {
    int l;
    int C;
    int x;
    int R;
    int r;
    int t;
    int u;
    int c;
    int S;
    int a;
    int A;
    int fr;
    int m;
    int fl;
    int G;
    int T;
    int g;
    int o;
    int ex;
}   st_fl;

typedef struct s_sz {
    int lnk;
    int sz;
    int group;
    int usr;
    bool is_dev;
}   t_sz;

typedef struct s_li {
    char *name;
    char *path;
    char *err;
    struct stat info;
    struct s_li **open;
}   t_li;

typedef struct n_type {
    int n_f;
    int n_d;
    int n_e;
    int i;
}   s_type;

