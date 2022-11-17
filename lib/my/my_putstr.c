/*
** EPITECH PROJECT, 2022
** task02
** File description:
** task02
*/

#include <unistd.h>

#include "my.h"

int my_putchar_print(char const *str, int i)
{
    int count = 0;
    if ((str[i] < 32 || str[i] >= 127) && str[i] != 10) {
        count += my_putchar('\\');
        if (str[i] < 8)
            count += my_putstr("00", -1);
        if (str[i] > 8 && str[i] < 32)
            count += my_putchar('0');
        count += my_putnbr_base(str[i], "01234567", -1);
    } else {
        count += my_putchar(str[i]);
    }
    return count;
}

/**
 * @brief Print a string of characters
 *
 * @param str Our string of characters
 * @param precision Our numbers of char we want to print
 * @return int Number of characters printed
 */
int my_putstr(char const *str, int precision)
{
    int count = 0;
    if (precision < 0)
        for (int i = 0; str[i] != '\0'; i++)
            count += my_putchar_print(str, i);
    else
        for (int i = 0; str[i] != '\0' && i < precision; i++)
            count += my_putchar_print(str, i);
    return (count);
}
