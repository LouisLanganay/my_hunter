/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** create_window.c
*/

#include "../../includes/hunter.h"

void set_textures(csfml_struct *csfml_options, birds_list *birds)
{
    birds_list *bird = birds;
    for (int i = 0; i < 10; i++) {
        bird->rect_count += 1;
        bird_moovment(bird, csfml_options);
        sfSprite_setTexture(bird->sprite, bird->texture, sfTrue);
        sfSprite_setTextureRect(bird->sprite, bird->rect);
        sfSprite_setPosition(bird->sprite, bird->position);
        bird = bird->next;
    }
}

void draw_birds(birds_list *birds, csfml_struct *csfml_options)
{
    birds_list *bird = birds;
    for (int i = 0; i < 10; i++) {
        if (bird->alive == 0)
            sfRenderWindow_drawSprite(csfml_options->window, bird->sprite,
            NULL);
        bird = bird->next;
    }
}

void set_background(csfml_struct *csfml_options)
{
    sfSprite_setTexture(csfml_options->sprite, csfml_options->texture, sfTrue);
    sfSprite_setPosition(csfml_options->sprite, (sfVector2f){0, 0});
    sfSprite_setScale(csfml_options->sprite, (sfVector2f){1.12, 1.12});
}

void create_window(csfml_struct *csfml_options, birds_list *birds)
{
    sfTime time;
    float seconds;
    if (!csfml_options->window)
        return;
    sfRenderWindow_setFramerateLimit(csfml_options->window, 60);
    set_background(csfml_options);
    set_textures(csfml_options, birds);
    while (sfRenderWindow_isOpen(csfml_options->window)) {
        time = sfClock_getElapsedTime(csfml_options->clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.01) {
            handle_events(csfml_options, birds);
            set_textures(csfml_options, birds);
            sfClock_restart(csfml_options->clock);
        }
        sfRenderWindow_clear(csfml_options->window, sfBlack);
        sfRenderWindow_drawSprite(csfml_options->window, csfml_options->sprite,
        NULL);
        draw_birds(birds, csfml_options);
        sfRenderWindow_display(csfml_options->window);
        //sfSleep(sfMilliseconds(10));
    }
}
