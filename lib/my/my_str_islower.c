/*
** EPITECH PROJECT, 2022
** task14
** File description:
** task14
*/

int my_str_islower(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            " ";
        else
            return 0;
    }
    return 1;
}
