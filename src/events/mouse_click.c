/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** mouse_click.c
*/

#include "../../includes/hunter.h"

void mouse_click(csfml_struct *csfml_options)
{
    sfVector2i position = sfMouse_getPositionRenderWindow(csfml_options->window);
    printf("Mouse x=%i y=%i\n", position.x, position.y);
}