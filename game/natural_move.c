/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** C Graphical programming module
*/

#include "../my_runner.h"

void speed_object(v_v *vector)
{
    vector->ground.x -= 20;
    vector->ground2.x -= 20;
    vector->obstacle.x -= 20;
    vector->obstacle2.x -= 20;
    vector->back3.x -= 0.50;
    vector->back33.x -= 0.50;
    vector->back2.x -= 0.30;
    vector->back22.x -= 0.30;
    vector->back1.x -= 0.20;
    vector->back11.x -= 0.20;
    vector->moon.x -= 0.010;
    vector->sky.x -= 0.005;
    vector->sky2.x -= 0.005;
}

void repeat_object(v_v *vector)
{
    if (vector->ground.x <= -1920)
        vector->ground.x = 1920;
    if (vector->ground2.x <= -1920)
        vector->ground2.x = 1920;
    if (vector->obstacle.x <= -1920)
        vector->obstacle.x = 1920;
    if (vector->obstacle2.x <= -1920)
        vector->obstacle2.x = 1920;
    if (vector->back3.x <= -1920)
        vector->back3.x = 1920;
    if (vector->back33.x <= -1920)
        vector->back33.x = 1920;
}

void repeat_object_2(v_v *vector)
{
    if (vector->back2.x <= -1920)
        vector->back2.x = 1920;
    if (vector->back22.x <= -1920)
        vector->back22.x = 1920;
    if (vector->back1.x <= -1920)
        vector->back1.x = 1920;
    if (vector->back11.x <= -1920)
        vector->back11.x = 1920;
    if (vector->sky.x <= -1920)
        vector->sky.x = 1920;
    if (vector->sky2.x <= -1920)
        vector->sky2.x = 1920;
}

void natural_move(v_v *vector)
{
    speed_object(vector);
    repeat_object(vector);
    repeat_object_2(vector);
}
