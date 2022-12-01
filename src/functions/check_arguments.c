/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** check_arguments
*/

#include "../includes/my.h"
#include "../includes/hunter.h"

int check_arguments(int ac, char **av, game_struct *game)
{
    for (int i = 0; i < ac; i++) {
        if (my_strcmp(av[i], "-h") == 0) {
            my_printf("--------------------\n");
            my_printf("USAGE: ./my_hunter\n");
            my_printf("\nFLAGS:\n");
            my_printf("\t-h: display this help\n");
            my_printf("\t--skip-intro: skip the intro\n");
            my_printf("--------------------\n");
            return 1;
        }
        if (my_strcmp(av[i], "--skip-intro") == 0) {
            game->skip_intro = 1;
            return 0;
        }
    }
    return 0;
}
