/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_game_struct.c
*/

#include "../../includes/hunter.h"

buttons_struct init_buttons_struct_arrow(game_struct *game)
{
    game->btn->arrow_texture = sfTexture_createFromFile(
        "assets/gui/ab.png", NULL);
    game->btn->arrow_sprite = sfSprite_create();
    game->btn->arrow_rect = (sfIntRect){0, 0, 25, 50};
}

buttons_struct init_buttons_struct(game_struct *game)
{
    game->btn->startb_texture = sfTexture_createFromFile("assets/gui/sb.png",
        NULL);
    game->btn->startb_rect = (sfIntRect){0, 0, 366, 74};
    game->btn->startb_sprite = sfSprite_create();
    game->btn->startb_hovered = 0;
    game->btn->exitb_texture = sfTexture_createFromFile("assets/gui/eb.png",
        NULL);
    game->btn->exitb_rect = (sfIntRect){0, 0, 395, 74};
    game->btn->exitb_sprite = sfSprite_create();
    game->btn->exitb_hovered = 0;
    game->btn->closeb_texture = sfTexture_createFromFile("assets/gui/cb.png",
        NULL);
    game->btn->closeb_rect = (sfIntRect){0, 0, 352, 74};
    game->btn->closeb_sprite = sfSprite_create();
    game->btn->closeb_hovered = 0;
    game->btn->slider_texture = sfTexture_createFromFile(
        "assets/gui/slider.png", NULL);
    game->btn->slider_sprite = sfSprite_create();
    init_buttons_struct_arrow(game);
}

scenes_struct init_scenes_struct(game_struct *game)
{
    game->scenes->range_texture = sfTexture_createFromFile(
        "assets/gui/rangebg.png", NULL);
    game->scenes->range_sprite = sfSprite_create();
    game->scenes->settings_texture = sfTexture_createFromFile(
        "assets/gui/settingsbg.png", NULL);
    game->scenes->settings_sprite = sfSprite_create();
    sfSprite_setScale(game->scenes->settings_sprite, (sfVector2f){0.5, 0.5});
}

game_struct init_game_struct(game_struct *game)
{
    game->intro_sound = sfMusic_createFromFile("sounds/musics/intro.ogg");
    game->crosshair_texture = sfTexture_createFromFile("assets/c2.png", NULL);
    game->crosshair_sprite = sfSprite_create();
    game->btn = malloc(sizeof(buttons_struct));
    init_buttons_struct(game);
    game->b_click = sfMusic_createFromFile("sounds/gui/button2.ogg");
    game->b_hover = sfMusic_createFromFile("sounds/gui/button1.ogg");
    game->scenes = malloc(sizeof(scenes_struct));
    init_scenes_struct(game);
    game->started = 0;
    game->text = sfText_create();
    game->text2 = sfText_create();
    game->font = sfFont_createFromFile("fonts/valorant.ttf");
    game->paused = 0;
    game->score = 0;
    game->remaining = 20;
    game->general_vol = 100;
}
