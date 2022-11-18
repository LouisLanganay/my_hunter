/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** check_arguments
*/

#include "../includes/my.h"

int check_arguments(int ac, char **av)
{
    if (ac > 1)
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_printf("--------------------\n");
            my_printf("USAGE: ./my_hunter\n");
            my_printf("--------------------\n");
            return 1;
        }
    return 0;
}
