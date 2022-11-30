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
    vandal_sounds->shoot_sound2 = sfMusic_createFromFile(
        "./sounds/vandal/vandal2.ogg");
    vandal_sounds->shoot_sound3 = sfMusic_createFromFile(
        "./sounds/vandal/vandal3.ogg");
    vandal_sounds->shoot_sound4 = sfMusic_createFromFile(
        "./sounds/vandal/vandal4.ogg");
    vandal_sounds->shoot_sound5 = sfMusic_createFromFile(
        "./sounds/vandal/vandal5.ogg");
    vandal_sounds->count = 0;
}
