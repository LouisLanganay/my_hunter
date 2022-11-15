/*
** EPITECH PROJECT, 2022
** my_putstr_error
** File description:
** my_putstr_error
*/

#include "my.h"

/**
 * @brief Display a string in error output
 * 
 * @param str Our string
 * @return int Printed characters count
 */

int my_putstr_error(char const *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        my_putchar_error(str[i]);
    }
    return (0);
}
