/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** mouse_click.c
*/

#include "../../includes/hunter.h"

void mouse_click_left(csfml_struct *csfml_options)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(csfml_options->window);
    printf("Mouse x=%i y=%i\n", pos.x, pos.y);

    while (csfml_options->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_pollEvent(csfml_options->window, &csfml_options->event);
    }
}