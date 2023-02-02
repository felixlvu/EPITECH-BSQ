/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "mybsq.h"

int fs_open_gen(char *buffer, Bsq *bsq1, int line)
{
    int taille = my_strlen(buffer);
    bsq1->lenghtf = taille;
    bsq1->lenghtsize = (taille / line);
    move_string(buffer, bsq1);
    int size_len = my_strlen_bsq(buffer);
    write(1, buffer + size_len, my_strlen(buffer) - size_len);
    return (0);
}

int my_isnbr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }
    return 1;
}


int error(char *line, char *filepath)
{
    if (my_strlen(filepath) == 0)
        return 84;
    if (my_isnbr(line) == 0)
        return 84;
    for (int i = 0; filepath[i] != '\0'; i++) {
        if (filepath[i] != '.' && filepath[i] != 'o')
            return 84;
    }
    return 0;
}

int gen_map(char *line, char *filepath)
{
    Bsq *bsq1 = NULL;
    char *buffer = NULL;
    int taille = 0;
    int taille_buff = 0;

    if (error(line, filepath) == 84)
        return 84;
    taille = my_getnbr(line);
    taille_buff = (taille * (taille + 1)) + (my_strlen(line) + 1);
    bsq1 = malloc(sizeof(Bsq));
    bsq1->gen_mapp = 0;
    buffer = malloc(sizeof(char) * (taille_buff + 1));
    for (int l = 0; l <= taille_buff; l++)
        buffer[l] = '\0';
    my_strcat_len(buffer, line, bsq1);
    my_strcat_bsq(buffer, filepath, bsq1, taille);
    fs_open_gen(buffer, bsq1, taille);
    free(buffer);
    free(bsq1);
    return 0;
}
