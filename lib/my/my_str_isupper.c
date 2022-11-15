/*
** EPITECH PROJECT, 2022
** task15
** File description:
** task15
*/

int my_str_isupper(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            " ";
        else
            return 0;
    }
    return 1;
}
