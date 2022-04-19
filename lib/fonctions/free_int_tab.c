/*
** EPITECH PROJECT, 2022
** free_int_tab
** File description:
** Source code to free a tab of integer
*/

#include <stdlib.h>

void free_int_tab(int **tab, int nb_rows)
{
    for (int row = 0; row < nb_rows; row++) {
            free(tab[row]);
        }
    free(tab);
}