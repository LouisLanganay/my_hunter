/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_s(const char *format, va_list list, int i)
{
    if (format[i] == '%' && format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        if (format[i + my_nbrlen(precision) + 2] == 's')
            return my_putstr(va_arg(list, char *), precision);
        return 0;
    }
    if (format[i] == '%' && format[i + 1] == 's')
        return my_putstr(va_arg(list, char *), -1);
    if (format[i] == '%' && format[i + 1] == 'S')
        return my_putstr(va_arg(list, char *), -1);
    return 0;
}
