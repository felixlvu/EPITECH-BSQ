/*
** EPITECH PROJECT, 2022
** open
** File description:
** open
*/

#include "my.h"
#include "mybsq.h"

int my_strlen_bsq(char const *str)
{
    int x = 0;
    while (str[x] != '\n'){
        x = x + 1;
    }
    return (x + 1);
}
