/*
** EPITECH PROJECT, 2022
** open
** File description:
** open
*/

#include "my.h"
#include "mybsq.h"

int find_square_next(char buffer[], int i, int a)
{
    if (buffer[i] == '.') {
        a++;
    } else {
        return 0;
    }

    return a;
}

int find_square(char buffer[], int i, int taille, Bsq *bsq1)
{
    int a = 0;

    for (int j = 0; j != taille && i < bsq1->lenghtf; j++) {
        for (int k = 0; k != taille && i < bsq1->lenghtf; k++) {
            a = find_square_next(buffer, i, a);
            i++;
        }
        i = i + bsq1->lenghtsize - (a / (j + 1));
    }
    return a;
}
