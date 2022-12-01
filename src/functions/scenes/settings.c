/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** settings.c
*/

#include "../../../includes/hunter.h"

void settings_draw(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->scenes->settings_sprite,
        game->scenes->settings_texture, sfTrue);
    sfSprite_setPosition(game->scenes->settings_sprite, (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->scenes->settings_sprite, NULL);

    draw_exit_button(csfml_options, game);
    draw_close_button(csfml_options, game);
    draw_slider(csfml_options, game);
    draw_arrow_button(csfml_options, game);
    draw_croshair(csfml_options, game);
}
