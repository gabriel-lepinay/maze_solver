/*
** EPITECH PROJECT, 2022
** display
** File description:
** Source code to display things
*/
#include <unistd.h>

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