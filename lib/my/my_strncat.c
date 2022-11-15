/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** my_strncat
*/

int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int destlen = my_strlen(dest);
    int i = 0;
    while (src[i] != '\0' && i < nb) {
        dest[i + destlen] = src[i];
        i++;
    }
    dest[i + destlen] = '\0';
    return dest;
}
