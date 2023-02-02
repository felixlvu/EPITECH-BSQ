/*
** EPITECH PROJECT, 2022
** open
** File description:
** open
*/

#include "my.h"
#include "mybsq.h"

int move_string_next(int taille, int val, int temp, Bsq *bsq1)
{
    if (temp < val) {
        bsq1->lenght = taille;
        bsq1->poss = bsq1->pass;
        taille++;
    }
    return taille;
}

char *move_string(char buffer[], Bsq *bsq1)
{
    int i = 0;
    int taille = 1;
    int val = 0;
    int temp = 0;

    while (buffer[i] != '\0') {
        val = find_square(buffer, i, taille, bsq1);
        if ((taille * taille) == val) {
            bsq1->pass = i;
            taille = move_string_next(taille, val, temp, bsq1);
        } else {
            i++;
        }
        if (temp < val) {
            temp = val;
        }
    }
    print_square(buffer, bsq1);
    return buffer;
}

void destroy_strucut(char *buffer, Bsq *bsq1)
{
    free(buffer);
    free(bsq1);
}

int fs_open_next(char buffer[], int line, Bsq *bsq1, struct stat *sfile)
{
    line = my_atoi(buffer);

    bsq1->lenghtf = sfile->st_size;
    bsq1->lenghtsize = (sfile->st_size / line);

    return line;
}

int fs_open(char const *filepath)
{
    Bsq *bsq1 = malloc(sizeof(Bsq));
    int fd = open(filepath, O_RDONLY);
    struct stat sfile;
    stat(filepath, &sfile);
    char *buffer = malloc(sizeof(char) * (sfile.st_size + 1));

    for (int i = 0; i <= sfile.st_size; i++)
        buffer[i] = 0;
    if (fd == -1)
        return 84;
    fd = read(fd, buffer, sfile.st_size);
    if (fd == -1 || sfile.st_size == 0)
        return 84;
    buffer[sfile.st_size] = '\0';
    int line = fs_open_next(buffer, line, bsq1, &sfile);
    move_string(buffer, bsq1);
    int size_len = my_strlen_bsq(buffer);
    write(1, buffer + size_len, my_strlen(buffer) - size_len);
    destroy_strucut(buffer, bsq1);
    return (0);
}
