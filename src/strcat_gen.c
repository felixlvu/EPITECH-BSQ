/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "mybsq.h"

char *my_strcat_len(char *dest, char *src, Bsq *bsq1)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[bsq1->gen_mapp] = src[i];
        bsq1->gen_mapp++;
        i++;
    }
    dest[bsq1->gen_mapp] = '\n';
    bsq1->gen_mapp++;
    return (dest);
}

int my_strcat_next(int i, char *src)
{
    if (src[i] == '\0') {
        i = 0;
    }
    return i;
}

char *my_strcat_bsq(char *dest, char *src, Bsq *bsq1, int taille)
{
    int i = 0;
    for (int j = 0; j != taille; j++) {
        for (int pass = 0; pass < taille; pass++) {
            i = my_strcat_next(i, src);
            dest[bsq1->gen_mapp] = src[i];
            bsq1->gen_mapp++;
            i++;
        }
    dest[bsq1->gen_mapp] = '\n';
    bsq1->gen_mapp++;
    }
    return (dest);
}
