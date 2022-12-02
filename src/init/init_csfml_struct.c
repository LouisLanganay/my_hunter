/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_csfml_struct.c
*/

#include "../../includes/hunter.h"

csfml_struct init_struct(csfml_struct *csfml_options)
{
    csfml_options->mode = (sfVideoMode){880, 600, 32};
    csfml_options->window = sfRenderWindow_create(csfml_options->mode,
    "SFML window", sfTitlebar | sfClose, 0);
    csfml_options->texture = sfTexture_createFromFile("./assets/backv.png",
    NULL);
    csfml_options->sprite = sfSprite_create();
    csfml_options->clock = sfClock_create();
    csfml_options->event;
    csfml_options->vandal_texture = sfTexture_createFromFile(
    "./assets/gui/vandal.png", NULL);
    csfml_options->vandal_sprite = sfSprite_create();
    csfml_options->vandal_rect = (sfIntRect){0, 0, 913, 520};
    csfml_options->intro_texture = sfTexture_createFromFile(
        "./assets/gui/intro_back.png", NULL);
    csfml_options->intro_sprite = sfSprite_create();
    csfml_options->cursor_arrow = sfCursor_createFromSystem(sfCursorArrow);
    csfml_options->cursor_hand = sfCursor_createFromSystem(sfCursorHand);
    sfSprite_setTexture(csfml_options->intro_sprite,
        csfml_options->intro_texture, sfTrue);
    sfSprite_setScale(csfml_options->intro_sprite, (sfVector2f){0.6, 0.6});
}
