/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** move_rect.c
*/

#include "../../includes/hunter.h"

void bird_moovment_annim(birds_list *bird)
{
    if (bird->rect.left >= bird->rect.width * 2)
        bird->rect.left = 0;
    else
        bird->rect.left = bird->rect.left + bird->rect.width;
    bird->rect_count = 0;
}

void bird_moovment_pos(birds_list *bird, csfml_struct *csfml_options)
{
    sfTime time = sfClock_getElapsedTime(csfml_options->clock);
    float seconds = time.microseconds / 1000000.0;
    if (bird->direction == 1) {
        sfSprite_setScale(bird->sprite, (sfVector2f){0.5f, 0.5f});
        sfSprite_setOrigin(bird->sprite, (sfVector2f){0, 0});
        bird->position.x += 200 * seconds;
    } else {
        sfSprite_setScale(bird->sprite, (sfVector2f){-0.5f, 0.5f});
        sfSprite_setOrigin(bird->sprite, (sfVector2f){110, 0});
        bird->position.x -= 200 * seconds;
    }
    if (bird->position.x >= csfml_options->mode.width)
        bird->direction = 0;
    if (bird->position.x <= 0)
        bird->direction = 1;
}

void bird_moovment(birds_list *bird, csfml_struct *csfml_options)
{
    if (bird->rect_count >= bird->rect_speed)
        bird_moovment_annim(bird);
    bird_moovment_pos(bird, csfml_options);
}
