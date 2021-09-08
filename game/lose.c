/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** lose.c
*/
#include "../my_runner.h"

void loose_end(v_v *vector, sfMusic *sound, sfRenderWindow *window)
{
    if (lose(vector) == 42) {
        destroy_sound(sound);
        sfRenderWindow_close(window);
    }
}

    void close_end(sfRenderWindow *window, sfEvent event, sfMusic *sound)
{
    if (event.type == sfEvtClosed) {
        destroy_sound(sound);
        sfRenderWindow_close(window);
    }
}

    int lose(v_v *vector)
{
    if (vector->skin1.y == 695 && vector->obstacle.x == vector->skin1.x
    && vector->jump.y == 695)
        return (42);
    if (vector->skin1.y == 695 && vector->obstacle2.x == vector->skin1.x
    && vector->jump.y == 695)
        return (42);
    return (0);
}