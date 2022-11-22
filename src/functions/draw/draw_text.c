/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_text
*/

#include "../../../includes/hunter.h"
#include "../../../includes/my.h"

void draw_text(csfml_struct *csfml_options, game_struct *game)
{
    char *str = my_int_to_str(game->score);
    sfText_setString(game->text, str);
    free(str);

    if (game->score > 9)
        sfText_setPosition(game->text, (sfVector2f){315, 190});
    else 
        sfText_setPosition(game->text, (sfVector2f){325, 190});
    sfRenderWindow_drawText(csfml_options->window, game->text, NULL);
}