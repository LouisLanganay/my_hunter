/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_di_space(const char *format, va_list list, int i)
{
    int a = va_arg(list, int);
    if (a > 0)
        return my_putchar(' ') + my_put_nbr(a, -1);
    return my_put_nbr(a, -1);
}

int condition_di_plus(const char *format, va_list list, int i)
{
    int nbr = va_arg(list, int);
    if (nbr > 0)
        return my_putchar('+') + my_put_nbr(nbr, -1);
    return my_put_nbr(nbr, -1);
}

int condition_di(const char *format, va_list list, int i)
{
    if (format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        int a = i + my_nbrlen(precision) + 2;
        if (format[a] == 'd' || format[a] == 'i')
            return my_put_nbr(va_arg(list, int), precision);
        return 0;
    }
    if (format[i + 1] == '+' && my_strcontain("di", format[i + 2]) == 1)
        return condition_di_plus(format, list, i);
    if (format[i + 1] == ' ' && (format[i + 2] == 'd' || format[i + 2] == 'i'))
        return condition_di_space(format, list, i);
    if (format[i + 1] == 'l' && (format[i + 2] == 'd' || format[i + 2] == 'i'))
        return my_put_nbr_long(va_arg(list, long int), -1);
    if (format[i + 1] == 'h' && (format[i + 2] == 'd' || format[i + 2] == 'i'))
        return my_put_nbr(va_arg(list, int), -1);
    if (format[i + 1] == 'd' || format[i +1] == 'i')
        return my_put_nbr(va_arg(list, int), -1);
    return 0;
}
