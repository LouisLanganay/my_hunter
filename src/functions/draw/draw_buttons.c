/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_buttons.c
*/

#include "../../../includes/hunter.h"

void draw_arrow_button(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->btn->arrow_sprite,
        game->btn->arrow_texture, sfTrue);
    sfSprite_setTextureRect(game->btn->arrow_sprite,
        game->btn->arrow_rect);
    sfSprite_setScale(game->btn->arrow_sprite, (sfVector2f){0.55, 0.55});
    sfSprite_setPosition(game->btn->arrow_sprite, (sfVector2f){715, 218});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->arrow_sprite, NULL);
}

void draw_resume_button(csfml_struct *csfml_options, game_struct *game)
{
    if (game->paused == 1) {
        sfSprite_setTexture(game->btn->startb_sprite,
            game->btn->startb_texture, sfTrue);
        sfSprite_setTextureRect(game->btn->startb_sprite,
            game->btn->startb_rect);
        sfSprite_setPosition(game->btn->startb_sprite, (sfVector2f){255, 420});
        sfRenderWindow_drawSprite(csfml_options->window,
            game->btn->startb_sprite, NULL);
    }
}

void draw_exit_button(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->btn->exitb_sprite,
        game->btn->exitb_texture, sfTrue);
    sfSprite_setTextureRect(game->btn->exitb_sprite,
        game->btn->exitb_rect);
    sfSprite_setPosition(game->btn->exitb_sprite, (sfVector2f){240, 510});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->exitb_sprite, NULL);
}

void draw_close_button(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->btn->closeb_sprite,
        game->btn->closeb_texture, sfTrue);
    sfSprite_setTextureRect(game->btn->closeb_sprite,
        game->btn->closeb_rect);
    sfSprite_setPosition(game->btn->closeb_sprite, (sfVector2f){260, 420});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->closeb_sprite, NULL);
}

void draw_slider(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->btn->slider_sprite,
        game->btn->slider_texture, sfTrue);
    sfSprite_setScale(game->btn->slider_sprite, (sfVector2f){0.3, 0.3});
    int c_pos = (game->general_vol * (797 - 452)) / 100 + 445;
    sfSprite_setPosition(game->btn->slider_sprite, (sfVector2f){c_pos, 120});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->slider_sprite, NULL);
}
