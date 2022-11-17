/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** destroy_window.c
*/

#include "../includes/hunter.h"

void destroy_window(csfml_struct *csfml_options, bird_struct *bird)
{
    sfSprite_destroy(bird->sprite);
    sfTexture_destroy(bird->texture);

    sfSprite_destroy(csfml_options->sprite);
    sfTexture_destroy(csfml_options->texture);

    sfRenderWindow_destroy(csfml_options->window);    
}