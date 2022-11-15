/*
** EPITECH PROJECT, 2022
** my_nbrlen
** File description:
** mini printf
*/

#include <stdio.h>

int my_unsignednbrlen(unsigned int nb)
{
    int length = 1;

    while (nb > 9) {
        nb = nb / 10;
        length++;
    }
    return length;
}
