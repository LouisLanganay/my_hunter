/*
** EPITECH PROJECT, 2022
** my_strcontain
** File description:
** Check if a string contain a certain character
*/

#include "my.h"

/**
 * @brief Check if a string contain a certain character
 *
 * @param str Our string
 * @param c Our character
 * @return int Return 1 if yes, 0 if no
 */

int my_strcontain(char *str, char my_char)
{
    int contain = 0;
    for (int i = 0; str[i] != '\0' && contain != 1; i++) {
        if (str[i] == my_char)
            contain = 1;
    }
    return contain;
}
