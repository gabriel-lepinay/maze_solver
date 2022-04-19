/*
** EPITECH PROJECT, 2022
** init_matrix
** File description:
** Source to init int matrix for rat in the maze algorithm
*/
#include "init_matrix.h"

int error_handling_maze(char **maze, int rows, int cols)
{
    if (maze[0][0] != '.' || maze[rows - 1][cols - 1] != '.') {
        return (1);
    }
    return (0);
}

int get_nb_rows(char **maze)
{
    int rows;

    for (rows = 0; maze[rows] != NULL; rows++);
    return (rows);
}

int get_nb_cols(char **maze)
{
    int rows;
    int counter;
    int last_value;

    last_value = strlen(maze[0]);
    for (rows = 0; maze[rows] != NULL; rows++) {
        counter = strlen(maze[rows]);
        if (last_value != counter)
            return (-1);
        last_value = counter;
    }
    return (counter);
}

void init_lines(int **matrix, int **solver_matrix, int rows, int cols)
{
    for (int y = 0; y < rows; y++) {
        matrix[y] = malloc(cols * sizeof(int));
        solver_matrix[y] = malloc(cols * sizeof(int));
        for (int x = 0; x < cols; x++) {
            matrix[y][x] = 0;
            solver_matrix[y][x] = 0;
        }
    }
}

int init_matrix(char **maze, matrix_t *matrix_data)
{
    int rows = get_nb_rows(maze);
    int cols = get_nb_cols(maze);
    int **matrix;
    int **solver_matrix;

    if (rows == -1 || cols == -1)
        return (-1);
    matrix = malloc(rows * sizeof(int *));
    solver_matrix = malloc(rows * sizeof(int *));
    init_lines(matrix, solver_matrix, rows, cols);
    matrix_data->nb_rows = rows;
    matrix_data->nb_cols = cols;
    matrix_data->matrix = matrix;
    matrix_data->sol_matrix = solver_matrix;
    return (0);
}