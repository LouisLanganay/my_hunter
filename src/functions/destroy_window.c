/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** destroy_window.c
*/

#include "../includes/hunter.h"

void destroy_other(csfml_struct *csfml_options,
birds_list *birds,
game_struct *game,
vandal_sounds_s *vandal_sounds)
{
    sfSprite_destroy(csfml_options->sprite);
    sfTexture_destroy(csfml_options->texture);
    sfSprite_destroy(game->crosshair_sprite);
    sfTexture_destroy(game->crosshair_texture);
    sfMusic_destroy(vandal_sounds->shoot_sound1);
    sfMusic_destroy(vandal_sounds->shoot_sound2);
    sfMusic_destroy(vandal_sounds->shoot_sound3);
    sfMusic_destroy(vandal_sounds->shoot_sound4);
    sfMusic_destroy(vandal_sounds->shoot_sound5);
    sfMusic_destroy(game->intro_sound);
    sfText_destroy(game->text);
    sfText_destroy(game->text2);
    sfFont_destroy(game->font);
    sfSprite_destroy(game->btn->startb_sprite);
    sfTexture_destroy(game->btn->startb_texture);
    sfTexture_destroy(csfml_options->vandal_texture);
    sfSprite_destroy(csfml_options->vandal_sprite);
    sfRenderWindow_destroy(csfml_options->window);
}

void destroy_window(csfml_struct *csfml_options,
birds_list *birds,
game_struct *game,
vandal_sounds_s *vandal_sounds)
{
    birds_list *bird = birds;
    for (int i = 0; i < 10; i++) {
        sfSprite_destroy(bird->sprite);
        sfTexture_destroy(bird->texture);
        sfMusic_destroy(bird->dead_sound);
        sfMusic_destroy(bird->spawn_sound);
        bird = bird->next;
    }
    destroy_other(csfml_options, birds, game, vandal_sounds);
}
