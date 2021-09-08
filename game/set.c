/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** C Graphical programming module
*/
#include "../my_runner.h"

void setPosition(s_s *sprite, v_v *vector)
{
    sfSprite_setPosition(sprite->spriteback1, vector->back1);
    sfSprite_setPosition(sprite->spriteback11, vector->back11);
    sfSprite_setPosition(sprite->spriteback2, vector->back2);
    sfSprite_setPosition(sprite->spriteback22, vector->back22);
    sfSprite_setPosition(sprite->spriteback3, vector->back3);
    sfSprite_setPosition(sprite->spriteback33, vector->back33);
    sfSprite_setPosition(sprite->spriteground, vector->ground);
    sfSprite_setPosition(sprite->spriteground2, vector->ground2);
    sfSprite_setPosition(sprite->spriteobstacle, vector->obstacle);
    sfSprite_setPosition(sprite->spriteobstacle2, vector->obstacle2);
    sfSprite_setPosition(sprite->spritemoon, vector->moon);
    sfSprite_setPosition(sprite->spritesky, vector->sky);
    sfSprite_setPosition(sprite->spritesky2, vector->sky2);
    sfSprite_setPosition(sprite->spriteskin1, vector->skin1);
    sfSprite_setPosition(sprite->spritejump, vector->jump);
    sfSprite_setPosition(sprite->spritereceipt, vector->receipt);
}

void setDraw(sfRenderWindow *window, s_s *sprite)
{
    sfRenderWindow_drawSprite(window, sprite->spritesky, NULL);
    sfRenderWindow_drawSprite(window, sprite->spritesky2, NULL);
    sfRenderWindow_drawSprite(window, sprite->spritemoon, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteback1, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteback11, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteback2, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteback22, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteback3, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteback33, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteground, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteground2, NULL);
}

void setTexture(s_s *sprite, t_t *texture)
{
    sfSprite_setTexture(sprite->spritesky, texture->texturesky, sfTrue);
    sfSprite_setTexture(sprite->spritesky2, texture->texturesky2, sfTrue);
    sfSprite_setTexture(sprite->spritemoon, texture->texturemoon, sfTrue);
    sfSprite_setTexture(sprite->spriteback1, texture->textureback1, sfTrue);
    sfSprite_setTexture(sprite->spriteback11, texture->textureback11, sfTrue);
    sfSprite_setTexture(sprite->spriteback2, texture->textureback2, sfTrue);
    sfSprite_setTexture(sprite->spriteback22, texture->textureback22, sfTrue);
    sfSprite_setTexture(sprite->spriteback3, texture->textureback3, sfTrue);
    sfSprite_setTexture(sprite->spriteback33, texture->textureback33, sfTrue);
    sfSprite_setTexture(sprite->spriteground, texture->textureground, sfTrue);
    sfSprite_setTexture(sprite->spriteground2, texture->textureground2, sfTrue);
    sfSprite_setTexture(sprite->spriteobstacle,
    texture->textureobstacle, sfTrue);
    sfSprite_setTexture(sprite->spriteobstacle2,
    texture->textureobstacle2, sfTrue);
}

void rechero(s_s *sprite)
{
    sprite->cissor_hero++;
    if (sprite->cissor_hero == 10)
        sprite->cissor_hero = 0;
}

void set(sfRenderWindow *window, s_s *sprite, v_v* vector, t_t *texture)
{
    setPosition(sprite, vector);
    setTexture(sprite, texture);
    setDraw(window, sprite);
}
