/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_n(const char *format, va_list list, int i, int count)
{
    if (format[i] == '%' && format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        if (format[i + my_nbrlen(precision) + 2] == 'n') {
            int *ptr = va_arg(list, int *);
            *ptr = count;
            return 0;
        }
    }
    if (format[i] == '%' && format[i + 1] == 'l') {
        if (format[i] == '%' && format[i + 2] == 'n') {
            long int *ptr2 = va_arg(list, long int *);
            *ptr2 = count;
        }
    } else {
        if (format[i] == '%' && format[i + 1] == 'n') {
            int *ptr2 = va_arg(list, int *);
            *ptr2 = count;
        }
    }
    return 0;
}
