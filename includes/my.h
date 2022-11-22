/*
** EPITECH PROJECT, 2022
** task02
** File description:
** task02
*/

#include <stdarg.h>

#ifndef _MY_H__
    #define _MY_H__

    int my_putchar(char c);

    void my_putchar_error(char c);

    int my_isneg(int nb);

    int my_strcontain(char *str, char c);

    int my_put_nbr(int nb, int precision);

    char *my_int_to_str(int nb);

    int my_put_nbr_long(long int nb, int precision);

    void my_swap(int *a, int *b);

    int my_putstr(char const *str, int precision);

    int my_putstr_error(char const *str);

    int my_strlen(char const *str);

    int my_getnbr(char const *str);

    void my_sort_int_array(int *tab, int size);

    float my_compute_power_rec(float nb, float power);

    int my_put_nbr_float(double nb, int precision);

    int my_compute_square_root(int nb);

    int my_is_prime(int nb);

    int my_find_prime_sup(int nb);

    char *my_strcpy(char *dest, char const *src);

    char *my_strncpy(char *dest, char const *src, int n);

    char *my_revstr(char *str);

    char *my_strstr(char *str, char const *to_find);

    int my_strcmp(char const *s1, char const *s2);

    int my_strncmp(char const *s1, char const *s2, int n);

    char *my_strupcase(char *str);

    char *my_strlowcase(char *str);

    char *my_strcapitalize(char *str);

    int my_str_isalpha(char const *str);

    int my_str_isnum(char const *str);

    int my_is_prime2(int nb);

    char *my_strupcase2(char *str);

    int is_alpha(char const *str, int i);

    int word_len(int x, char const *str);

    int words_count(char const *str);

    int my_str_islower(char const *str);

    int my_str_isupper(char const *str);

    int my_str_isprintable(char const *str);

    int my_showstr(char const *str);

    int my_showmem(char const *str, int size);

    char *my_strcat(char *dest, char const *src);

    char *my_strncat(char *dest, char const *src, int nb);

    char **my_str_to_word_array(char const *str);

    int invert_nb(int nb);

    int my_contain_alpha(char *str);

    int sum_numbers(int n, ...);

    int sum_strings_length(int n, ...);

    void disp_stdarg(char *s, ...);

    int my_nbrlen(long int nb);

    int my_unsignednbrlen(unsigned int nb);

    int my_put_unsignednbr(unsigned long int nb, int precision);

    int my_putnbr_base(unsigned long int nbr, char const *base, int precision);

    int my_printf(const char *format, ...);

    int my_put_address(long long nbr);

    int my_putnbr_base_long(long nbr, char const *base);

    int my_put_nbr_scientific(long double nb, char c, int precision);

    int my_e_or_f_flag(double nb, char c, int precision);

    int condition_c(const char *format, va_list list, int i);

    int condition_s(const char *format, va_list list, int i);

    int condition_di(const char *format, va_list list, int i);

    int condition_modulo(const char *format, va_list list, int i);

    int condition_u(const char *format, va_list list, int i);

    int condition_f(const char *format, va_list list, int i);

    int condition_x(const char *format, va_list list, int i);

    int condition_o(const char *format, va_list list, int i);

    int condition_p(const char *format, va_list list, int i);

    int condition_n(const char *format, va_list list, int i, int count);

    int condition_e(const char *format, va_list list, int i);

    int condition_g(const char *format, va_list list, int i);

    int condition_b(const char *format, va_list list, int i);

#endif
