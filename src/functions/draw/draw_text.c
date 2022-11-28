/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_text
*/

#include "../../../includes/hunter.h"
#include "../../../includes/my.h"

void draw_score(csfml_struct *csfml_options, game_struct *game)
{
    char *str = my_int_to_str(game->score);
    sfText_setString(game->text, str);
    free(str);
    sfText_setColor(game->text, sfColor_fromRGB(152, 196, 200));
    sfText_setFont(game->text, game->font);
    sfText_setCharacterSize(game->text, 50);
    if (game->score > 9)
        sfText_setPosition(game->text, (sfVector2f){315, 190});
    else
        sfText_setPosition(game->text, (sfVector2f){325, 190});
    sfRenderWindow_drawText(csfml_options->window, game->text, NULL);
}

void draw_remaning(csfml_struct *csfml_options, game_struct *game)
{
    char *str = my_int_to_str(game->remaining - game->score);
    sfText_setString(game->text, str);
    free(str);
    sfText_setColor(game->text, sfColor_fromRGB(152, 196, 200));
    sfText_setFont(game->text, game->font);
    sfText_setCharacterSize(game->text, 50);
    if (game->remaining - game->score > 9)
        sfText_setPosition(game->text, (sfVector2f){510, 190});
    else
        sfText_setPosition(game->text, (sfVector2f){520, 190});
    sfRenderWindow_drawText(csfml_options->window, game->text, NULL);
}

void draw_text(csfml_struct *csfml_options, game_struct *game)
{
    draw_score(csfml_options, game);
    draw_remaning(csfml_options, game);
}
