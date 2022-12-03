/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_vandal_sounds.c
*/

#include "../../includes/hunter.h"

vandal_sounds_s init_vandal_sounds(vandal_sounds_s *vandal_sounds)
{
    vandal_sounds->shoot_sound1 = sfMusic_createFromFile(
        "./sounds/vandal/vandal1.ogg");
}
