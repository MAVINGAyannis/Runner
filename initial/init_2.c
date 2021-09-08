/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_2.c
*/
#include "../my_runner.h"

void init_texture_2(t_t *texture)
{
    texture->textureground =
        sfTexture_createFromFile("initial/source/parallax/ground.png", NULL);
    texture->textureground2 =
        sfTexture_createFromFile("initial/source/parallax/ground.png", NULL);
    texture->textureobstacle =
        sfTexture_createFromFile("initial/source/obstacle.png", NULL);
    texture->textureobstacle2 =
        sfTexture_createFromFile("initial/source/obstacle.png", NULL);
    texture->texturemoon =
        sfTexture_createFromFile("initial/source/parallax/moon.png", NULL);
    texture->texturesky =
        sfTexture_createFromFile("initial/source/parallax/sky.png", NULL);
    texture->texturesky2 =
        sfTexture_createFromFile("initial/source/parallax/sky.png", NULL);
    texture->textureskin1 =
        sfTexture_createFromFile("initial/source/characters/pig.png", NULL);
    texture->texturejump =
        sfTexture_createFromFile("initial/source/characters/pig_2.png", NULL);
    texture->texturereceipt =
        sfTexture_createFromFile("initial/source/characters/pig_2.png", NULL);
}

void init_texture(t_t *texture)
{
    texture->textureback1 =
        sfTexture_createFromFile("initial/source/parallax/back/back1.png",
        NULL);
    texture->textureback11 =
        sfTexture_createFromFile("initial/source/parallax/back/back1.png",
        NULL);
    texture->textureback2 =
        sfTexture_createFromFile("initial/source/parallax/back/back2.png",
        NULL);
    texture->textureback22 =
        sfTexture_createFromFile("initial/source/parallax/back/back2.png",
        NULL);
    texture->textureback3 =
        sfTexture_createFromFile("initial/source/parallax/back/back3.png",
        NULL);
    texture->textureback33 =
        sfTexture_createFromFile("initial/source/parallax/back/back3.png",
        NULL);
}

void init_sprite(s_s *sprite)
{
    sprite->spriteback1 = sfSprite_create();
    sprite->spriteback11 = sfSprite_create();
    sprite->spriteback2 = sfSprite_create();
    sprite->spriteback22 = sfSprite_create();
    sprite->spriteback3 = sfSprite_create();
    sprite->spriteback33 = sfSprite_create();
    sprite->spriteground = sfSprite_create();
    sprite->spriteground2 = sfSprite_create();
    sprite->spriteobstacle = sfSprite_create();
    sprite->spriteobstacle2 = sfSprite_create();
    sprite->spritemoon = sfSprite_create();
    sprite->spritesky = sfSprite_create();
    sprite->spritesky2 = sfSprite_create();
    sprite->spriteskin1 = sfSprite_create();
    sprite->spritejump = sfSprite_create();
    sprite->spritereceipt = sfSprite_create();
}

void init_vector(v_v *vector)
{
    vector->moon.x = 1000;
    vector->moon.y = 0;
    vector->back1.x = 0;
    vector->back1.y = 110;
    vector->back11.x = 1920;
    vector->back11.y = 110;
    vector->back2.x = 0;
    vector->back2.y = 232;
    vector->back22.x = 1920;
    vector->back22.y = 232;
    vector->back3.x = 0;
    vector->back3.y = 522;
    vector->back33.x = 1920;
    vector->back33.y = 522;
    vector->ground.x = 0;
}

void init_vector_2(v_v *vector)
{
    vector->ground.y = 100;
    vector->ground2.x = 1920;
    vector->ground2.y = 100;
    vector->obstacle.x = 0;
    vector->obstacle.y = 730;
    vector->obstacle2.x = 1920;
    vector->obstacle2.y = 730;
    vector->sky.x = 0;
    vector->sky.y = 0;
    vector->sky2.x = 1920;
    vector->sky2.y = 0;
    vector->skin1.x = 200;
    vector->skin1.y = 600;
    vector->jump.x = 200;
    vector->jump.y = 600;
    vector->receipt.x = 200;
    vector->receipt.y = 600;
}