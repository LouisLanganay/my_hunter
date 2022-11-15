/*
** EPITECH PROJECT, 2022
** my_contain_alpha
** File description:
** my_contain_alpha
*/

int my_contain_alpha(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            return 1;
    }
    return 0;
}
