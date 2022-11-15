/*
** EPITECH PROJECT, 2022
** task10
** File description:
** task10
*/

char my_strupcase2(char *str, int i)
{
    if (str[i] >= 97 && str[i] <= 122)
        return (str[i] = str[i] - 32);
    if (str[i] >= 65 && str[i] <= 90)
        return (str[i] = str[i] + 32);
    return 0;
}

char *my_strcapitalize(char *str)
{
    my_strupcase2(str, 0);
    for (int i = 1 ; str[i] != '\0' ; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        if ((str[i - 1] >= 23 && str[i - 1] <= 47) || str[i - 1] == ';')
            my_strupcase2(str, i);
    }
    return str;
}
