/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MYBSQ_H
    #define MYBSQ_H

typedef struct {
    int lenght;
    int poss;
    int lenghtf;
    int lenghtsize;
    int pass;
    int gen_mapp;
}Bsq;

    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>

    int gen_map(char *line, char *filepath);
    char *move_string(char buffer[], Bsq *bsq1);
    char *my_strcat_bsq(char *dest, char *src, Bsq *bsq1, int taille);
    char *my_strcat_len(char *dest, char *src, Bsq *bsq1);
    int find_square(char buffer[], int i, int taille, Bsq *bsq1);
    int my_strlen_bsq(char const *str);
    int main(int arc, char *arv[]);
    int my_atoi(char* str);
    int fs_open(char const *filepath);
    char *print_square(char buffer[], Bsq *bsq1);
#endif
