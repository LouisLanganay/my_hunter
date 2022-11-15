/*
** EPITECH PROJECT, 2022
** flag printf
** File description:
** flag
*/

#include <stdarg.h>
#include "../my.h"

int condition_g(const char *format, va_list list, int i)
{
    if (format[i] == '%' && format[i + 1] == '.') {
        int precision = my_getnbr(format + i);
        if (format[i + my_nbrlen(precision) + 2] == 'g')
            return my_e_or_f_flag(va_arg(list, double), 'g', precision);
        if (format[i + my_nbrlen(precision) + 2] == 'G')
            return my_e_or_f_flag(va_arg(list, double), 'G', precision);
        return 0;
    }
    if (format[i] == '%' && format[i + 1] == 'g')
        return my_e_or_f_flag(va_arg(list, double), 'g', 6);
    if (format[i] == '%' && format[i + 1] == 'G')
        return my_e_or_f_flag(va_arg(list, double), 'G', 6);
    return 0;
}
