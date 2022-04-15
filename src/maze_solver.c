/*
** EPITECH PROJECT, 2022
** maze_solver
** File description:
** Source code to solve a int maze
*/
#include "maze_solver.h"

int is_valid(matrix_t *matrix_data, int x, int y)
{
    if (x >= 0 && x < matrix_data->nb_cols &&
            y >= 0 && y < matrix_data->nb_rows &&
            matrix_data->matrix[y][x] == 1) {
        return (1);
    }
    return (0);
}

int solve_condition(matrix_t *matrix_data, int x, int y)
{
    if (x == matrix_data->nb_cols - 1 && y == matrix_data->nb_rows - 1 &&
            matrix_data->matrix[y][x] == 1) {
        matrix_data->sol_matrix[y][x] = 1;
        return (1);
    }
    return (0);
}

int solve_until(matrix_t *matrix_data, int x, int y)
{
    if (solve_condition(matrix_data, x, y) == 1)
        return (0);
    if (is_valid(matrix_data, x, y) == 1) {
        if (matrix_data->sol_matrix[y][x] == 1)
            return (1);
        matrix_data->sol_matrix[y][x] = 1;
        if (solve_until(matrix_data, x + 1, y) == 0)
            return (0);
        if (solve_until(matrix_data, x, y + 1) == 0)
            return (0);
        if (solve_until(matrix_data, x - 1, y) == 0)
            return (0);
        if (solve_until(matrix_data, x, y - 1) == 0)
            return (0);
        matrix_data->sol_matrix[y][x] = 0;
        return (1);
    }
    return (1);
}

int maze_solver(matrix_t *matrix_data)
{
    if (solve_until(matrix_data, 0, 0) == 1) {
        my_putstr("no solution found\n");
        return (1);
    }
    return (0);
}
