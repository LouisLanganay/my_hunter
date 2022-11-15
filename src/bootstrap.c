/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** bootstrap
*/

#include "../includes/my.h"
#include "../includes/hunter.h"

void create_window(csfml_struct *csfml_options)
{
    if (!csfml_options->window || csfml_options->texture)
        return 84;
    sfRenderWindow_setFramerateLimit(csfml_options->window, 30);
    sfSprite_setTexture(csfml_options->sprite, csfml_options->texture, sfTrue);
    sfSprite_scale(csfml_options->sprite, (sfVector2f){0.1, 0.1});
    while (sfRenderWindow_isOpen(csfml_options->window)) {
        sfRenderWindow_pollEvent(csfml_options->window, &csfml_options->event);
        if (csfml_options->event.type == sfEvtClosed)
            sfRenderWindow_close(csfml_options->window);
        sfRenderWindow_clear(csfml_options->window, sfBlack);
        sfRenderWindow_drawSprite(csfml_options->window, csfml_options->sprite,
        NULL);
        sfRenderWindow_display(csfml_options->window);
    }
}

void destroy_window(csfml_struct *csfml_options)
{
    sfSprite_destroy(csfml_options->sprite);
    sfTexture_destroy(csfml_options->texture);
    sfRenderWindow_destroy(csfml_options->window);    
}

csfml_struct init_struct(csfml_struct *csfml_options)
{
    csfml_options->mode = (sfVideoMode){800, 600, 32};
    csfml_options->window = sfRenderWindow_create(csfml_options->mode,
    "SFML window", sfResize | sfClose, 0);
    csfml_options->texture = sfTexture_createFromFile("./assets/image.png",
    NULL);
    csfml_options->sprite = sfSprite_create();
    csfml_options->event;
}

int main(void)
{
    csfml_struct *csfml_options = malloc(sizeof(csfml_struct));
    init_struct(csfml_options);
    create_window(csfml_options);
    destroy_window(csfml_options);
    free(csfml_options);
    return 0;
}