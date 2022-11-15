/*
** EPITECH PROJECT, 2022
** task07
** File description:
** task07
*/

#include "my.h"

int print_nbr_long(long int nb)
{
    int character = 0;

    if (nb < 10) {
        my_putchar(nb + '0');
        return 0;
    } else if (nb > 9) {
        print_nbr_long(nb / 10);
        character = nb % 10;
        my_putchar(character + '0');
        return 0;
    }
    return 0;
}

int my_put_nbr_long(long int nb, int precision)
{
    int nbr_len = 0;
    int j = 0;

    if (precision == 0 && nb == 0)
        return 0;
    if (nb < 0){
        my_putchar('-');
        j++;
        nb = -nb;
    }
    nbr_len = my_nbrlen(nb);
    for (int i = precision; i > nbr_len; i--)
        j += my_putchar('0');
    if (nb == -2147483648)
        return my_putstr("2147483648", -1);
    print_nbr_long(nb);
    return nbr_len + j;
}
