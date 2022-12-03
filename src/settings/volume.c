/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** volume.c
*/

#include "../../includes/hunter.h"

void set_musics_volume(csfml_struct *csfml_options,
game_struct *game,
vandal_sounds_s *vandal_sounds,
birds_list *birds)
{
    sfMusic_setVolume(vandal_sounds->shoot_sound1, game->general_vol);

    sfMusic_setVolume(game->intro_sound, game->general_vol);
    sfMusic_setVolume(game->b_click, game->general_vol);
    sfMusic_setVolume(game->b_hover, game->general_vol);
}
