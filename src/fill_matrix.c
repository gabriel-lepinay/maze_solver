/*
** EPITECH PROJECT, 2022
** fill_matrix.c
** File description:
** Source code to fill matrix
*/
#include "fill_matrix.h"

int fill_char(char **maze, int row, int col)
{
    if (maze[row][col] == '.')
        return (1);
    else if (maze[row][col] == '#')
        return (0);
    else
        return (-1);
}

int fill_line(char **maze, int **matrix, int row, int nb_cols)
{
    int nb;

    for (int cols = 0; cols < nb_cols; cols++) {
        if ((nb = fill_char(maze, row, cols)) == -1)
            return (-1);
        else
            matrix[row][cols] = nb;
    }
    return (0);
}

int fill_matrix(char **maze, int **matrix, int nb_rows, int nb_cols)
{
    if (error_handling_maze(maze, nb_rows, nb_cols) == 1)
        return (-1);
    for (int rows = 0; rows < nb_rows; rows++) {
        if (fill_line(maze, matrix, rows, nb_cols) == -1)
            return (-1);
    }
    return (0);
}
