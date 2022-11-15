/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf project
*/

#include <stdarg.h>
#include "my.h"


int conditions(const char *format, va_list list, int i, int count)
{
    if (format[i] != '%') return count;
    count += condition_c(format, list, i);
    count += condition_s(format, list, i);
    count += condition_di(format, list, i);
    count += condition_modulo(format, list, i);
    count += condition_u(format, list, i);
    count += condition_f(format, list, i);
    count += condition_x(format, list, i);
    count += condition_o(format, list, i);
    count += condition_p(format, list, i);
    count += condition_n(format, list, i, count);
    count += condition_e(format, list, i);
    count += condition_b(format, list, i);
    count += condition_g(format, list, i);
    return (count);
}

int my_printf(const char *format, ...)
{
    int count = 0;
    va_list list;
    va_start(list, format);
    for (int i = 0; i < my_strlen(format); i++) {
        if (format[i] != '%') {
            count += my_putchar(format[i]);
            continue;
        }
        count = conditions(format, list, i, count);
        if (format[i] == '%' && format[i + 1] == '.')
            i += my_nbrlen(my_getnbr(format + i)) + 1;
        char a = format[i + 1];
        if (format[i] == '%' && my_strcontain("lL# h+", a) == 1)
            i++;
        i++;
    }
    va_end(list);
    return count;
}
