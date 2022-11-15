/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_x_hash(const char *format, va_list list, int i)
{
    char c = format[i + 2];
    unsigned int a = va_arg(list, unsigned int);
    if (a == 0)
        return my_putnbr_base(a,
        c == 'x' ? "0123456789abcdef" : "0123456789ABCDEF", 1);
    return my_putstr(c == 'x' ? "0x" : "0X", -1) + my_putnbr_base(a,
    c == 'x' ? "0123456789abcdef" : "0123456789ABCDEF", 1);
}

int condition_x_space(const char *format, va_list list, int i)
{
    int x = i + 1;
    char a = format[i + 2];
    while (format[x] == ' ')
        x++;
    if (format[i + 2] == 'x' || format[i + 2] == 'X')
        return my_putnbr_base(va_arg(list, unsigned int),
        a == 'x' ? "0123456789abcdef" : "0123456789ABCDEF", 1);
    return 0;
}

int condition_x_base(const char *format, va_list list, int i)
{
    if ((format[i + 1] == 'x' || format[i + 1] == 'X'))
        return my_putnbr_base(va_arg(list, unsigned int),
        format[i + 1] == 'x' ? "0123456789abcdef" : "0123456789ABCDEF", 1);
    return 0;
}

int condition_x_comma(const char *format, va_list list, int i)
{
    int precision = my_getnbr(format + i);
    char c = format[i + my_nbrlen(precision) + 2];
    if (c == 'x' || c == 'X')
        return my_putnbr_base(va_arg(list, unsigned int),
        c == 'x' ? "0123456789abcdef" : "0123456789ABCDEF", precision);
    return 0;
}

int condition_x(const char *format, va_list list, int i)
{
    if (format[i + 1] == '.')
        return condition_x_comma(format, list, i);
    if (format[i + 1] == 'l' && (format[i + 2] == 'x' || format[i + 2] == 'X')){
        char a = format[i + 2];
        return my_putnbr_base(va_arg(list, unsigned long int),
        a == 'x' ? "0123456789abcdef" : "0123456789ABCDEF", 1);
    }
    if (format[i + 1] == ' ')
        return condition_x_space(format, list, i);
    if (format[i + 1] == 'h')
        return condition_x_base(format, list, i + 1);
    if (format[i + 1] == '#' && (format[i + 2] == 'x' || format[i + 2] == 'X'))
        return condition_x_hash(format, list, i);
    return condition_x_base(format, list, i);
}
