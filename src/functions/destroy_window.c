/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** destroy_window.c
*/

#include "../includes/hunter.h"

void destroy_window(csfml_struct *csfml_options, birds_list *birds)
{
    birds_list *bird = birds;
    for (int i = 0; i < 10; i++) {
        sfSprite_destroy(bird->sprite);
        sfTexture_destroy(bird->texture);
        sfMusic_destroy(bird->dead_sound);
        bird = bird->next;
    }
    sfSprite_destroy(csfml_options->sprite);
    sfTexture_destroy(csfml_options->texture);
    sfRenderWindow_destroy(csfml_options->window);
}
