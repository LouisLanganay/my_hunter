/*
** EPITECH PROJECT, 2022
** task07
** File description:
** task07
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    if (n == 0)
        return 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1) {
        i++;
    }
    return s1[i] - s2[i];
}
