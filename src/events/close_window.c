/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** close_window.c
*/

#include "../../includes/hunter.h"

void close_window(csfml_struct *csfml_options)
{
    sfRenderWindow_close(csfml_options->window);
}
