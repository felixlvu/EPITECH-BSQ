/*
** EPITECH PROJECT, 2022
** open
** File description:
** open
*/

#include "my.h"
#include "mybsq.h"

int my_atoi(char* str)
{
    int res = 0;

    for (int i = 0; str[i] != '\n'; ++i)
        res = res * 10 + str[i] - '0';

    return res;
}
