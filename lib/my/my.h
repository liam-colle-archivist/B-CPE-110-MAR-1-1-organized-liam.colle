/*
** EPITECH PROJECT, 2024
** my
** File description:
** Header File for project
*/

#ifndef MY_H
    #define MY_H
int my_putchar(char character);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *array, int size);
int my_put_nbr(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_compute_power_rec(int nb, int p);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_pow_sqr(int nb, int p);
int find_square_root(int nb, int i);
int calc_wo_overflow(char const *str, int i, int len, long *result);
int is_valid(char const *str, int i);
int get_symbol(char const *str);
long my_pow(int a, int n);
int my_isneg(int n);
void my_put_nbr_worker(long nb);
int my_strlen_rev(char const *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
int find_index_min(int *array, int size, int startat);
int can_be_decapitalized(char character, int *ready);
int can_be_ready(char character);
int can_be_capitalized(char character, int ready);
int is_alpha(char chr);
int compare_str(char *str, char const *to_find, int i);
int my_compute_square_root(int nb);
int my_putchar_wlength(char character);
int my_get_nbr_decimals(long nb, int count);
int my_print_float(float n);
int my_print_double(double n, int precision, int force_dot);
int my_power_double_rec(double nb, int p);
long my_put_long(long nb);
void my_put_long_worker(long nb);
int my_put_long_long_rc(long long nb);
int my_get_nbr_decimals_ll(long long nb, int count);
int my_put_long_retchrn(long nb);
int my_put_nbr_retchrn(int nb);
long my_put_long_long(long nb);
void my_put_long_long_worker(long nb);
int my_print_long_double(long double n, int precision);
int my_get_nbr_decimals_s(short nb, int count);
void my_put_short_worker(short nb);
short my_put_short(short nb);
int my_put_short_retchrn(short nb);
int my_put_short_u_retchrn(short nb);
void my_put_short_u_worker(unsigned short nb);
unsigned short my_put_short_u(unsigned short nb);
int my_count_pre_zeros(double n, int precision);
int my_print_zeros(int zeros);
int my_count_pre_zeros_double(long double n, int precision);
int my_get_nbr_decimals_u(unsigned short nb, int count);
int my_get_nbr_decimals_ull(unsigned long long nb, int count);
int my_put_llu_rc(unsigned long long nb);
long my_put_llu(unsigned long long nb);
void my_put_llu_worker(unsigned long long nb);
int my_putstr_custlen(char const *str, int max);
char *my_strdup(char const *src);
void my_put_nbr_worker_lr(long nb);
int my_put_nbr_lr(int nb);
int my_strmatch(char const *s1, char const *s2);
unsigned int my_put_nbr_unsn(unsigned int nb);
void my_put_nbr_unsn_worker(unsigned int nb);
int my_put_nbr_un_retchrn(unsigned int nb);
int my_get_nbr_decimals_uns(unsigned int nb, int count);
#endif
