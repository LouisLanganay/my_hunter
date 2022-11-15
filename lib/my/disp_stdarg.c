/*
** EPITECH PROJECT, 2022
** disp_stdarg.c
** File description:
** bootstrap
*/

#include <stdarg.h>
#include "my.h"

void disp_stdarg(char *s, ...)
{
    va_list list;
    va_start(list, s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'c')
            my_putchar(va_arg(list, int));
        if (s[i] == 'i')
            my_put_nbr(va_arg(list, int), -1);
        if (s[i] == 's')
            my_putstr(va_arg(list, char *), -1);
        my_putchar('\n');
    }
    va_end(list);
}
