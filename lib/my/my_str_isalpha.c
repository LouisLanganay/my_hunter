/*
** EPITECH PROJECT, 2022
** task12
** File description:
** task12
*/

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            " ";
        else
            return 0;
    }
    return 1;
}
