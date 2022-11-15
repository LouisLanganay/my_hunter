/*
** EPITECH PROJECT, 2022
** task13
** File description:
** task13
*/

int my_str_isnum(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] >= 48 && str[i] <= 57)
            " ";
        else
            return 0;
    }
    return 1;
}
