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
    if (game->paused == 1) {
        closeb_state(csfml_options, game, posM);
        exitb_state(csfml_options, game, posM);
        sliderb_state(csfml_options, game, posM);
        arrowb_state(csfml_options, game, posM);
        return;
    }
    if (game->started == 0) {
        startb_state(csfml_options, game, posM);
        return;
    }
}
