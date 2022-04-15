/*
** EPITECH PROJECT, 2022
** main
** File description:
** Source code of the main
*/
#include "main.h"

int display_usage(void)
{
    my_putstr("USAGE:\n./solver <map>\n");
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac != 2) {
        write_error("No argument was found\nTry ./solver -h for help\n");
        return (1);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_usage();
        return (2);
    }
    return (0);
}

void display_char_solution(char **maze, int **matrix, int x, int y)
{
    if (matrix[y][x] == 1)
        write(1, "o", 1);
    else
        write(1, &maze[y][x], 1);
}

void display_solution(char **maze, int **matrix, int x, int y)
{
    for (int rows = 0; rows < y; rows++) {
        for (int cols = 0; cols < x; cols++) {
            display_char_solution(maze, matrix, cols, rows);
        }
        write(1, "\n", 1);
    }
}

int main(int ac, char **av)
{
    char **maze;
    matrix_t *matrix_data = malloc(sizeof(matrix_t));
    int err_h;

    if ((err_h = error_handling(ac, av)) == 1)
        return (84);
    if (err_h == 2)
        return (0);
    if ((maze = get_content_file(av[1])) == NULL)
        return (84);
    init_matrix(maze, matrix_data);
    if (fill_matrix(maze, matrix_data->matrix, matrix_data->nb_rows,
                        matrix_data->nb_cols) == -1) {
        write_error("Invalid maze\n");
        return (84);
    }
    maze_solver(matrix_data);
    display_solution(maze, matrix_data->sol_matrix, matrix_data->nb_cols,
                        matrix_data->nb_rows);
    return (0);
}
