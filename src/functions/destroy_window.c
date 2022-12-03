/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** destroy_window.c
*/

#include "../includes/hunter.h"

void destroy_other2(csfml_struct *csfml_options,
birds_list *birds,
game_struct *game,
vandal_sounds_s *vandal_sounds)
{
    sfMusic_destroy(game->b_click);
    sfMusic_destroy(game->b_hover);
    sfText_destroy(game->text);
    sfText_destroy(game->text2);
    sfFont_destroy(game->font);
    sfTexture_destroy(csfml_options->texture);
    sfSprite_destroy(csfml_options->sprite);
    sfTexture_destroy(csfml_options->vandal_texture);
    sfSprite_destroy(csfml_options->vandal_sprite);
    sfTexture_destroy(csfml_options->intro_texture);
    sfSprite_destroy(csfml_options->intro_sprite);
    sfCursor_destroy(csfml_options->cursor_arrow);
    sfCursor_destroy(csfml_options->cursor_hand);
    sfRenderWindow_destroy(csfml_options->window);
    sfClock_destroy(csfml_options->clock);
}

void destroy_other(csfml_struct *csfml_options,
birds_list *birds,
game_struct *game,
vandal_sounds_s *vandal_sounds)
{
    sfMusic_destroy(vandal_sounds->shoot_sound1);
    sfTexture_destroy(game->btn->arrow_texture);
    sfSprite_destroy(game->btn->arrow_sprite);
    sfTexture_destroy(game->btn->game_texture);
    sfSprite_destroy(game->btn->game_sprite);
    sfTexture_destroy(game->btn->startb_texture);
    sfSprite_destroy(game->btn->startb_sprite);
    sfTexture_destroy(game->btn->exitb_texture);
    sfSprite_destroy(game->btn->exitb_sprite);
    sfTexture_destroy(game->btn->closeb_texture);
    sfSprite_destroy(game->btn->closeb_sprite);
    sfTexture_destroy(game->btn->slider_texture);
    sfSprite_destroy(game->btn->slider_sprite);
    sfTexture_destroy(game->scenes->range_texture);
    sfSprite_destroy(game->scenes->range_sprite);
    sfTexture_destroy(game->scenes->settings_texture);
    sfSprite_destroy(game->scenes->settings_sprite);
    sfMusic_destroy(game->intro_sound);
    sfTexture_destroy(game->crosshair_texture);
    sfSprite_destroy(game->crosshair_sprite);
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
    destroy_other2(csfml_options, birds, game, vandal_sounds);
}
