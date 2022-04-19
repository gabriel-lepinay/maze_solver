/*
** EPITECH PROJECT, 2022
** free_str_tab
** File description:
** Source code to free a tab of integer
*/

#include <stdlib.h>
#include <stddef.h>

void free_str_tab(char **tab)
{
    for (int row = 0; tab[row] != NULL; row++) {
            free(tab[row]);
        }
    free(tab);
}