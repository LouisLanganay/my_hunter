/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** pause_game.c
*/

#include "../../includes/hunter.h"

void pause_game(csfml_struct *csfml_options, game_struct *game)
{
    game->paused = game->paused == 0 ? 1 : 0;
    if (game->paused == 1) {
        sfMusic_stop(game->intro_sound);
        sfRenderWindow_setMouseCursorVisible(csfml_options->window, sfTrue);
    }
}
