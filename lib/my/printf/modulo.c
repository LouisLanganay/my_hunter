/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_modulo(const char *format, va_list list, int i)
{
    if (format[i] == '%' && format[i + 1] == '%')
        return my_putchar('%');
    return 0;
}
