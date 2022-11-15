/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_e_space(const char *format, va_list list, int i)
{
    double a = va_arg(list, double);
    if (a < 0)
        return my_put_nbr_scientific(a, format[i + 2], 6);
    return my_putchar(' ') + my_put_nbr_scientific(a, format[i + 2], 6);
}

int condition_e(const char *format, va_list list, int i)
{
    if (format[i] == '%' && format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        char c = format[i + my_nbrlen(precision) + 2];
        if (c == 'e' || c == 'E')
            return my_put_nbr_scientific(va_arg(list, double), c, precision);
    }
    if (format[i + 1] == ' ' && (format[i + 2] == 'e' || format[i + 2] == 'E'))
        return condition_e_space(format, list, i);
    if (format[i + 1] == '#' && (format[i + 2] == 'e' || format[i + 2] == 'E'))
        return my_put_nbr_scientific(va_arg(list, double), format[i + 2], 6);
    if (format[i + 1] == 'L') {
        char c = format[i + 2];
        if (c == 'e' || c == 'E')
            return my_put_nbr_scientific(va_arg(list, long double), c, 6);
    }
    if (format[i + 1] == 'e' || format[i + 1] == 'E')
        return my_put_nbr_scientific(va_arg(list, double), format[i + 1], 6);
    return 0;
}
