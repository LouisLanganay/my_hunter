/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_p(const char *format, va_list list, int i)
{
    if (format[i] == '%' && format[i + 1] == 'p')
        return my_put_address((long long)va_arg(list, long long));
    return 0;
}
