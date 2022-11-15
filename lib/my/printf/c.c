/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_c(const char *format, va_list list, int i)
{
        if (format[i] == '%' && format[i + 1] == 'c')
                return my_putchar(va_arg(list, int));
        return 0;
}
