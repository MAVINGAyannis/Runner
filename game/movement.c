/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** movement.c
*/
#include "../my_runner.h"

void reset_player(v_v *vector, s_s *sprite)
{
    vector->receipt.y = 600;
    sprite->what_sprite = 0;
    vector->double_click = 0;
    vector->rest = 12;
}

void receipt_player(s_s *sprite, v_v *vector)
{
    sprite->what_sprite = 2;
    vector->receipt.y += 6;
    vector->jump.y += 6;
}

void jump_player(v_v *vector)
{
    vector->receipt.y -= 30;
    vector->jump.y -= 30;
}

int jumping(s_s *sprite, v_v *vector, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed && vector->rest == 1)
        vector->double_click = 1;
    if (vector->double_click == 0) {
        if (event.type == sfEvtMouseButtonPressed || vector->rest == 0) {
            sprite->what_sprite = 1;
            vector->rest = 0;
            while (vector->jump.y > 300) {
                jump_player(vector);
                return (0);
            }
        }
    }
    vector->rest = 1;
    while (vector->jump.y < 600) {
        receipt_player(sprite, vector);
        return (0);
    }
    reset_player(vector, sprite);
    return (0);
}

void movement(s_s *sprite, v_v *vector, sfEvent event)
{
    natural_move(vector);
    jumping(sprite, vector, event);
}