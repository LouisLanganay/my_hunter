/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter header
*/

#ifndef _HUNTER_H__
    #define _HUNTER_H__

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Time.h>
    #include <time.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>

    typedef struct vandal_sounds_s {
        sfMusic* shoot_sound1;
        sfMusic* shoot_sound2;
        sfMusic* shoot_sound3;
        sfMusic* shoot_sound4;
        sfMusic* shoot_sound5;
        int count;
    } vandal_sounds_s;

    typedef struct buttons_struct {
        sfTexture* startb_texture;
        sfSprite* startb_sprite;
        sfIntRect startb_rect;
        int startb_hovered;
        sfTexture* exitb_texture;
        sfSprite* exitb_sprite;
        sfIntRect exitb_rect;
        int exitb_hovered;
        sfTexture* closeb_texture;
        sfSprite* closeb_sprite;
        sfIntRect closeb_rect;
        int closeb_hovered;
        sfTexture* slider_texture;
        sfSprite* slider_sprite;
        int slider_hovered;
        sfTexture* arrow_texture;
        sfSprite* arrow_sprite;
        sfIntRect arrow_rect;
        int arrow_hovered;
        sfTexture* game_texture;
        sfSprite* game_sprite;
        sfIntRect game_rect;
        int game_hovered;
    } buttons_struct;

    typedef struct scenes_struct {
        sfTexture* range_texture;
        sfSprite* range_sprite;
        sfTexture* settings_texture;
        sfSprite* settings_sprite;
    } scenes_struct;

    typedef struct game_struct {
        sfMusic* intro_sound;
        sfTexture* crosshair_texture;
        sfSprite* crosshair_sprite;
        sfColor* crosshair_color;
        scenes_struct *scenes;
        buttons_struct *btn;
        sfMusic* b_click;
        sfMusic* b_hover;
        sfText* text;
        sfFont* font;
        sfText* text2;
        int skip_intro;
        int paused;
        int started;
        int score;
        int remaining;
        int general_vol;
    } game_struct;

    typedef struct birds_list {
        sfTexture* texture;
        sfIntRect rect;
        sfSprite* sprite;
        sfVector2f position;
        sfMusic* dead_sound;
        sfMusic* spawn_sound;
        int rect_count;
        int rect_speed;
        int direction;
        int alive;
        int bird_id;
        int type;
        struct birds_list* next;
    } birds_list;

    typedef struct csfml_struct {
        sfEvent event;
        sfIntRect rect;
        sfClock* clock;
        sfVideoMode mode;
        sfSprite* sprite;
        sfTexture* texture;
        sfTexture* intro_texture;
        sfSprite* intro_sprite;
        sfRenderWindow* window;
        sfTexture* vandal_texture;
        sfSprite* vandal_sprite;
        sfIntRect vandal_rect;
        sfCursor* cursor_arrow;
        sfCursor* cursor_hand;
    } csfml_struct;

    void create_window(csfml_struct *csfml_options,
                        birds_list *birds,
                        game_struct *game,
                        vandal_sounds_s *vandal_sounds);

    void destroy_window(csfml_struct *csfml_options,
    birds_list *birds,
    game_struct *game,
    vandal_sounds_s *vandal_sounds);

    void close_window(csfml_struct *csfml_options);

    void handle_events(csfml_struct *csfml_options,
                        birds_list *birds,
                        game_struct *game,
                        vandal_sounds_s *vandal_sounds);

    void mouse_click_left(csfml_struct *csfml_options,
                        birds_list *birds,
                        game_struct *game,
                        vandal_sounds_s *vandal_sounds);

    void bird_moovment(birds_list *bird,
    csfml_struct *csfml_options,
    game_struct *game);

    int check_arguments(int ac, char **av, game_struct *game);

    void game_events(birds_list *birds,
                    csfml_struct *csfml_options,
                    game_struct *game);

    void draw_text(csfml_struct *csfml_options, game_struct *game);

    void draw_croshair(csfml_struct *csfml_options, game_struct *game);

    void draw_vandal(csfml_struct *csfml_options, game_struct *game);

    void create_bird_list(birds_list **birds, game_struct *game);

    csfml_struct init_struct(csfml_struct *csfml_options);

    game_struct init_game_struct(game_struct *game);

    vandal_sounds_s init_vandal_sounds(vandal_sounds_s *vandal_sounds);

    void pause_game(csfml_struct *csfml_options, game_struct *game);

    void draw_resume_button(csfml_struct *csfml_options, game_struct *game);

    void draw_exit_button(csfml_struct *csfml_options, game_struct *game);

    void draw_arrow_button(csfml_struct *csfml_options, game_struct *game);

    void draw_close_button(csfml_struct *csfml_options, game_struct *game);

    void draw_slider(csfml_struct *csfml_options, game_struct *game);

    void draw_game_button(csfml_struct *csfml_options, game_struct *game);

    void start_button(csfml_struct *csfml_options,
        game_struct *game,
        sfVector2i posM);

    void exit_button(csfml_struct *csfml_options,
        game_struct *game,
        sfVector2i posM);

    void close_button(csfml_struct *csfml_options,
        game_struct *game,
        sfVector2i posM);

    void arrow_button(csfml_struct *csfml_options,
        game_struct *game,
        sfVector2i posM);

    void buttons_states(csfml_struct *csfml_options, game_struct *game);

    void enter_range_draw(csfml_struct *csfml_options, game_struct *game);

    void settings_draw(csfml_struct *csfml_options, game_struct *game);

    void set_musics_volume(csfml_struct *csfml_options,
        game_struct *game,
        vandal_sounds_s *vandal_sounds,
        birds_list *birds);

    void arrowb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM);

    void exitb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM);

    void closeb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM);

    void sliderb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM);

    void startb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM);

    void gameb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM);

    void mouse_style(csfml_struct *csfml_options, game_struct *game);

#endif
