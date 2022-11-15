/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** bootstrap
*/

#include "../includes/my.h"
#include "../includes/hunter.h"

csfml_struct init_struct(csfml_struct *csfml_options)
{
    csfml_options->mode = (sfVideoMode){800, 600, 32};
    csfml_options->window = sfRenderWindow_create(csfml_options->mode,
    "SFML window", sfResize | sfClose, 0);
    csfml_options->texture = sfTexture_createFromFile("./assets/image.png",
    NULL);
    csfml_options->sprite = sfSprite_create();
    csfml_options->clock = sfClock_create();
    csfml_options->event;
}

int main(void)
{
    csfml_struct *csfml_options = malloc(sizeof(csfml_struct));
    init_struct(csfml_options);
    create_window(csfml_options);
    destroy_window(csfml_options);
    free(csfml_options);
    return 0;
}