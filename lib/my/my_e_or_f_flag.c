/*
** EPITECH PROJECT, 2022
** my e or f flag
** File description:
** choose between e or f flag according to the precision
*/

#include "my.h"

int my_e_or_f_flag(double nb, char c, int precision)
{
    char c1 = 'e';

    if (c == 'G')
        c1 = 'E';
    if (precision > (6 || -6))
        return (my_put_nbr_scientific(nb, c1, precision));
    else
        return (my_put_nbr_float(nb, precision));
}
