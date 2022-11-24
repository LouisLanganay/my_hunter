/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_croshair.c
*/

#include "../../../includes/hunter.h"
#include "../../../includes/my.h"

void draw_croshair(csfml_struct *csfml_options, game_struct *game)
{
    sfRenderWindow_setMouseCursorVisible(csfml_options->window, sfFalse);
    sfSprite_setTexture(game->crosshair_sprite, game->crosshair_texture,
    sfTrue);
    sfSprite_setPosition(game->crosshair_sprite,
    (sfVector2f){sfMouse_getPositionRenderWindow(csfml_options->window).x,
    sfMouse_getPositionRenderWindow(csfml_options->window).y});
    sfRenderWindow_drawSprite(csfml_options->window, game->crosshair_sprite,
    NULL);
}
