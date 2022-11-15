/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_b(const char *format, va_list list, int i)
{
    if (format[i] == '%' && format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        if (format[i + my_nbrlen(precision) + 2] == 'b')
            return my_putnbr_base(va_arg(list, unsigned int),
            "01", precision);
        return 0;
    }
    if (format[i] == '%' && format[i + 1] == 'b')
        return my_putnbr_base(va_arg(list, unsigned int),
            "01", 1);
    return 0;
}
