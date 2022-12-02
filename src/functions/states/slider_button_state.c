/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** slider_button.c
*/

#include "../../../includes/hunter.h"

void sliderb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM)
{
    if (posM.x > 452 && posM.x < 797 && posM.y > 120 && posM.y < 134) {
        if (sfMouse_isButtonPressed(sfMouseLeft) != 1){
            game->btn->slider_hovered = 0;
            return;
        }
        game->general_vol = 100 * (posM.x - 452) / (797 - 452);
        game->btn->slider_hovered = 1;
    } else {
        game->btn->slider_hovered = 0;
    }

}
