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
        return my_putchar(' ');
    return 0;
}

int condition_di_plus(const char *format, va_list list, int i)
{
    int nbr = va_arg(list, int);
    if (nbr > 0)
        return my_putchar('+');
    return 0;
}

int condition_di(const char *format, va_list list, int i)
{

    return 0;
}
