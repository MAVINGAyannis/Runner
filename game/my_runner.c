/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** my_runner
*/
#include "../my_runner.h"

void recobstacle(s_s *sprite)
{
    sprite->cissor_obstacle++;
    if (sprite->cissor_obstacle == 14)
        sprite->cissor_obstacle = 0;
}

void print_obstacle(s_s *sprite, sfRenderWindow *window)
{
    sfIntRect rect2 = {290 * sprite->cissor_obstacle, 0, 290, 150};
    recobstacle(sprite);
    sfSprite_setTextureRect(sprite->spriteobstacle, rect2);
    sfSprite_setTextureRect(sprite->spriteobstacle2, rect2);
    sfRenderWindow_drawSprite(window, sprite->spriteobstacle, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteobstacle2, NULL);
}

int display_hero(sfRenderWindow *window, s_s *sprite, t_t *texture)
{
    print_obstacle(sprite, window);
    if (sprite->what_sprite == 1) {
        sfSprite_setTexture(sprite->spritejump, texture->texturejump, sfTrue);
        sfRenderWindow_drawSprite(window, sprite->spritejump, NULL);
        return (0);
    } else if (sprite->what_sprite == 2) {
        sfSprite_setTexture(sprite->spritereceipt,
        texture->texturereceipt, sfTrue);
        sfRenderWindow_drawSprite(window, sprite->spritereceipt, NULL);
        return (0);
    }
    sfIntRect rect1 = {300 * sprite->cissor_hero, 0, 300, 301};
    rechero(sprite);
    sfSprite_setTextureRect(sprite->spriteskin1, rect1);
    sfRenderWindow_drawSprite(window, sprite->spriteskin1, NULL);
    return (0);
}

sfMusic *initialise_variable(s_s *sprite, v_v *vector, sfMusic *sound)
{
    //sound = sfMusic_createFromFile("music/music_digimon.wav");
    //sound = create_music(sound);
    sprite->cissor_hero = 0;
    sprite->cissor_obstacle = 0;
    vector->rest = 12;
    sprite->what_sprite = 0;
    vector->double_click = 0;
    return (sound);
}

int main(void)
{
    sfRenderWindow *window;
    sfEvent event;
    t_t *texture = malloc(sizeof(t_t));
    s_s *sprite = malloc(sizeof(s_s));
    v_v *vector = malloc(sizeof(v_v));
    sfVideoMode mode = {1920, 1080, 32};
    //sfWindow_setFramerateLimit(&window, 100);
    sound = initialise_variable(sprite, vector, sound);

    window = sfRenderWindow_create(mode, "Game.", sfDefaultStyle, NULL);
    init(texture, sprite, vector);
    sfSprite_setTexture(sprite->spriteskin1, texture->textureskin1, sfTrue);
    while (sfRenderWindow_isOpen(window)) {
        //loose_end(vector, sound, window);
        set(window, sprite, vector, texture);
        movement(sprite, vector, event);
        display_hero(window, sprite, texture);
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event))
            close_end(window, event, sound);
    }
}
