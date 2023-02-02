/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "mybsq.h"

int main(int arc, char *arv[])
{
    int fd = 0;

    if (arc == 3) {
        fd = gen_map(arv[1], arv[2]);
    }
    if (arc == 2) {
        fd = fs_open(arv[1]);
    }
    if (arc != 2 && arc != 3) {
        my_printf("FAILURE\n");
        fd = 84;
    }
        return (fd);
}
