/*
** EPITECH PROJECT, 2022
** task08
** File description:
** task08
*/

char *my_strupcase(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }
    return str;
}
