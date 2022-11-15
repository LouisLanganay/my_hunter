/*
** EPITECH PROJECT, 2022
** task16
** File description:
** task16
*/

int my_str_isprintable(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] >= 32 && str[i] <= 126)
            " ";
        else
            return 0;
    }
    return 1;
}
