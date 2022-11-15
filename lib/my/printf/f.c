/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_f_space(const char *format, va_list list, int i)
{
    double a = va_arg(list, double);
    if (a < 0)
        return my_put_nbr_float(a, 6);
    return my_putchar(' ') + my_put_nbr_float(a, 6);
}

int condition_f(const char *format, va_list list, int i)
{
    if (format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        int a = i + my_nbrlen(precision) + 2;
        if (format[a] == 'f' || format[a] == 'F')
            return my_put_nbr_float(va_arg(list, double), precision);
        return 0;
    }
    if (format[i + 1] == ' ' && (format[i + 2] == 'f' || format[i + 2] == 'F'))
        return condition_f_space(format, list, i);
    if (format[i + 1] == 'L' && (format[i + 2] == 'f' || format[i + 2] == 'F'))
        return my_put_nbr_float(va_arg(list, long double), 6);
    if (format[i + 1] == '#' && (format[i + 2] == 'f' || format[i + 2] == 'F'))
        return my_put_nbr_float(va_arg(list, double), 6);
    if (format[i + 1] == 'f' || format[i + 1] == 'F')
        return my_put_nbr_float(va_arg(list, double), 6);
    return 0;
}
