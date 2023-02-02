/*
** EPITECH PROJECT, 2022
** open
** File description:
** open
*/

#include "my.h"
#include "mybsq.h"

int print_x(char buffer[], int i, int count)
{
    if (buffer[i] == '.') {
        buffer [i] = 'x';
        count++;
    }
    return count;
}

char *print_square(char buffer[], Bsq *bsq1)
{
    int i = bsq1->poss;
    int taille = bsq1->lenght;
    int count = 0;

    for (int j = 0; j != taille; j++) {
        for (int k = 0; k != taille; k++) {
            count = print_x(buffer, i, count);
        i++;
        }
    i = i + bsq1->lenghtsize - (count / (j + 1));
    }
    return buffer;
}
