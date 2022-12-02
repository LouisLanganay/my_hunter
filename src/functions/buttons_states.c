/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** buttons_states.c
*/

#include "../../includes/hunter.h"

void buttons_states(csfml_struct *csfml_options, game_struct *game)
{
    sfVector2i posM = sfMouse_getPositionRenderWindow(csfml_options->window);
    mouse_style(csfml_options, game);
    if (game->paused == 1) {
        closeb_state(csfml_options, game, posM);
        exitb_state(csfml_options, game, posM);
        sliderb_state(csfml_options, game, posM);
        arrowb_state(csfml_options, game, posM);
        game->btn->startb_hovered = 0;
        game->btn->game_hovered = 0;
        return;
    }
    if (game->started == 0) {
        startb_state(csfml_options, game, posM);
        gameb_state(csfml_options, game, posM);
        game->btn->closeb_hovered = 0;
        game->btn->exitb_hovered = 0;
        game->btn->arrow_hovered = 0;
        game->btn->slider_hovered = 0;
        return;
    }
}
