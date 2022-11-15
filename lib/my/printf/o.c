/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_o_unsigned(const char *format, va_list list, int i)
{
    unsigned long int a = va_arg(list, unsigned long int);
    return my_putnbr_base(a, "01234567", 1);
}

int condition_o_hash(const char *format, va_list list, int i)
{
    unsigned int a = va_arg(list, unsigned int);
    if (a == 0)
        return my_putnbr_base(a, "01234567", 1);
    return my_putchar('0') + my_putnbr_base(a, "01234567", 1);
}

int condition_o_space(const char *format, va_list list, int i)
{
    int x = i + 1;
    while (format[x] == ' ')
        x++;
    if (format[x] == 'o')
        return my_putnbr_base(va_arg(list, unsigned int), "01234567", 1);
    return 0;
}

int condition_o(const char *format, va_list list, int i)
{
    if (format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        if (format[i + my_nbrlen(precision) + 2] == 'o')
            return my_putnbr_base(va_arg(list, signed int),
            "01234567", precision);
    }
    if (format[i + 1] == 'h' && format[i + 2] == 'o')
        return my_putnbr_base(va_arg(list, unsigned int), "01234567", -1);
    if (format[i + 1] == ' ')
        return condition_o_space(format, list, i);
    if (format[i + 1] == '#' && format[i + 2] == 'o')
        return condition_o_hash(format, list, i);
    if (format[i + 1] == 'l' && format[i + 2] == 'o')
        return condition_o_unsigned(format, list, i);
    if (format[i + 1] == 'o')
        return my_putnbr_base(va_arg(list, unsigned int), "01234567", 1);
    return 0;
}
