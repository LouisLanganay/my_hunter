/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** mouse_style.c
*/

#include "../../includes/hunter.h"

void mouse_style(csfml_struct *csfml_options, game_struct *game)
{
    int count = 0;
    count += game->btn->exitb_hovered;
    count += game->btn->game_hovered;
    count += game->btn->startb_hovered;
    count += game->btn->closeb_hovered;
    count += game->btn->arrow_hovered;
    count += game->btn->slider_hovered;
    if (count != 0)
        sfRenderWindow_setMouseCursor(csfml_options->window,
            csfml_options->cursor_hand);
    else
        sfRenderWindow_setMouseCursor(csfml_options->window,
            csfml_options->cursor_arrow);
}
