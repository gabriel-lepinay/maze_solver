/*
** EPITECH PROJECT, 2022
** main
** File description:
** Header
*/

#ifndef MAIN_H_
    #define MAIN_H_
    #include <stddef.h>
    #include "structures.h"
    #include <stdlib.h>
    #include <unistd.h>

int my_putstr(char const *str);
int write_error(char const *str);
char **get_content_file(char *pathname);
int **init_matrix(char **maze, matrix_t *matrix_data);
int fill_matrix(char **maze, int **matrix, int nb_rows, int nb_cols);
int maze_solver(matrix_t *matrix_data);
void free_int_tab(int **tab, int nb_rows);
void free_str_tab(char **tab);
void display_solution(char **maze, int **matrix, int x, int y);
#endif /*MAIN_H_*/
