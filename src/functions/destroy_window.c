/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** destroy_window.c
*/

#include "../includes/hunter.h"

void destroy_window(csfml_struct *csfml_options)
{
    sfSprite_destroy(csfml_options->sprite);
    sfTexture_destroy(csfml_options->texture);
    sfRenderWindow_destroy(csfml_options->window);    
}