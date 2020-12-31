#include "uls.h"

//small help functions;
void mx_join(char **res, char *s2);
void mx_printstr_g(t_li *args);
int max_len_names(t_li **names);
void mx_print_tab(int len, int maxlen);
void mx_del_arr_arr(t_li ***args);
void mx_printcharerr(char c);
void mx_nulloutput(st_fl **fl);
void mx_err_flag(st_fl **fl, char flag);
int mx_max_len_n_g(t_li **names);
void mx_print_spaces_g(int len, int maxlen);

//main program;
t_li **mx_get_names(int argc, char **argv, int i);
void mx_opendir(t_li ***names, st_fl *fl);
void mx_out_put_all(t_li ***args, st_fl *fl);
void mx_sort(t_li ***disp, st_fl *fl);
t_li **mx_get_files(t_li ***args, st_fl *fl);
void mx_del_files(t_li ***args, st_fl *fl);
void mx_del_liarr(t_li ***args, t_li **dirs);

//outputs:
void mx_out_put_menu(t_li ***names, st_fl *fl, int flag);
void mx_out_err(t_li ***error, st_fl *fl);
void mx_output_x(t_li **names);
void mx_output_c(t_li **names);
void mx_output_m(t_li **names, st_fl *fl);
void mx_output_g(t_li **names, st_fl *fl);
void mx_long_out(t_li **names, st_fl *fl, int flag);


// flag l
char *mx_get_minor(t_li *print);
char *mx_get_major(t_li *print);
bool mx_check_device(t_li **names, t_sz *size);
char mx_get_file_acl(t_li *print);
// print func
void mx_print_per(t_li *print);
char mx_check_per(t_li *print);
void mx_get_user_name(t_li *print, int usr);
void mx_get_group_name(t_li *print, int group);
void mx_edit_time(t_li *print, char *t, st_fl *fl);
void mx_print_lnk(t_li *print, t_sz *size);
void mx_print_sz(t_li *print, t_sz *size);
void mx_print_symblink(t_li *print);
void mx_print_total(t_li *total, int blk_size);
void mx_print_all(t_li *print, t_sz *size, st_fl *fl);
