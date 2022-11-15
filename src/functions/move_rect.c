/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** move_rect.c
*/

#include "../../includes/hunter.h"

void move_rect(csfml_struct *csfml_options)
{
    csfml_options->count_fps = 0;
    if (csfml_options->rect.left >= csfml_options->rect.width * 2)
        csfml_options->rect.left = 0;
    else
        csfml_options->rect.left = csfml_options->rect.left + 110;
}