/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"


int condition_u_space(const char *format, va_list list, int i)
{
    int x = i + 1;
    while (format[x] == ' ')
        x++;
    if (format[x] == 'u')
        return my_put_unsignednbr(va_arg(list, unsigned int), 1);
    return 0;
}

int condition_u(const char *format, va_list list, int i)
{
    if (format[i] == '%' && format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        if (format[i + my_nbrlen(precision) + 2] == 'u')
            return my_put_unsignednbr(va_arg(list, unsigned int), precision);
        return 0;
    }
    if (format[i + 1] == ' ')
        return condition_u_space(format, list, i);
    if (format[i + 1] == '+' && format[i + 2] == 'u')
        return my_put_unsignednbr(va_arg(list, unsigned int), 1);
    if (format[i + 1] == 'h' && format[i + 2] == 'u')
        return my_put_unsignednbr(va_arg(list, unsigned int), 1);
    if (format[i + 1] == 'l' && format[i + 2] == 'u')
        return my_put_unsignednbr(va_arg(list, unsigned long int), 1);
    if (format[i + 1] == 'u')
        return my_put_unsignednbr(va_arg(list, unsigned int), 1);
    return 0;
}
