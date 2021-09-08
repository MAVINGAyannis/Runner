/*
** EPITECH PROJECT, 2019
** my_runner.h
** File description:
** my_runner.h
*/
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct Texture
{
    sfTexture *textureback1;
    sfTexture *textureback11;
    sfTexture *textureback2;
    sfTexture *textureback22;
    sfTexture *textureback3;
    sfTexture *textureback33;
    sfTexture *textureground;
    sfTexture *textureground2;
    sfTexture *textureobstacle;
    sfTexture *textureobstacle2;
    sfTexture *texturemoon;
    sfTexture *texturesky;
    sfTexture *texturesky2;
    sfTexture *texturewood1;
    sfTexture *texturewood2;
    sfTexture *textureskin1;
    sfTexture *texturejump;
    sfTexture *texturereceipt;
};

typedef struct Texture t_t;

struct Sprite
{
    sfSprite *spriteback1;
    sfSprite *spriteback11;
    sfSprite *spriteback2;
    sfSprite *spriteback22;
    sfSprite *spriteback3;
    sfSprite *spriteback33;
    sfSprite *spriteground;
    sfSprite *spriteground2;
    sfSprite *spriteobstacle;
    sfSprite *spriteobstacle2;
    sfSprite *spritemoon;
    sfSprite *spritesky;
    sfSprite *spritesky2;
    sfSprite *spriteskin1;
    sfSprite *spriteskin2;
    sfSprite *spritejump;
    sfSprite *spritereceipt;
    int cissor_hero;
    int cissor_obstacle;
    int what_sprite;
};

typedef struct Sprite s_s;

struct Vector
{
    sfVector2f moon;
    sfVector2f back1;
    sfVector2f back11;
    sfVector2f back2;
    sfVector2f back22;
    sfVector2f back3;
    sfVector2f back33;
    sfVector2f ground;
    sfVector2f ground2;
    sfVector2f obstacle;
    sfVector2f obstacle2;
    sfVector2f sky;
    sfVector2f sky2;
    sfVector2f skin1;
    sfVector2f wood1;
    sfVector2f wood2;
    sfVector2f jump;
    sfVector2f receipt;
    int rest;
    int double_click;
};

typedef struct Vector v_v;

struct Window
{
    sfRenderWindow *window;
};

typedef struct Window w_w;

sfMusic *sound;

void speed_object(v_v *vector);

void repeat_object(v_v *vector);

void repeat_object_2(v_v *vector);

void setPosition(s_s *sprite, v_v *vector);

void setTexture(s_s *sprite, t_t *texture);

void rechero(s_s *sprite);

void init_texture (t_t *texture);

void init_texture_2(t_t *texture);

void init_sprite (s_s *sprite);

void init_vector (v_v *vector);

void init_vector_2 (v_v *vector);

void init (t_t *texture, s_s *sprite, v_v *vector);

void setDraw(sfRenderWindow *window, s_s *sprite);

void set(sfRenderWindow *window, s_s *sprite, v_v* vector, t_t *texture);

void natural_move(v_v *vector);

int jumping(s_s *sprite, v_v *vector, sfEvent event);

int lose(v_v *vector);

sfMusic *create_music(sfMusic *sound);

void destroy_sound(sfMusic *sound);

void close_end(sfRenderWindow *window, sfEvent event, sfMusic *sound);

void loose_end(v_v *vector, sfMusic *sound, sfRenderWindow *window);

void movement(s_s *sprite, v_v *vector, sfEvent event);