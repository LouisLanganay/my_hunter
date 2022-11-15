/*
** EPITECH PROJECT, 2022
** task03
** File description:
** task03
*/

char *my_revstr(char *str)
{
    int length = 0;

    for (int i = 0 ; str[i] != '\0' ; i++){
        length++;
    }
    int str_bis[length];

    for (int i = 0 ; i < length ; i++){
        str_bis[i] = str[i];
    }
    for (int x = 0 ; x < length ; x++) {
        str[x] = str_bis[(length - 1 - x)];
    }
    return (str);
}
