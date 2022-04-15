/*
** EPITECH PROJECT, 2022
** structures
** File description:
** Header
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct coord_s{
    int x;
    int y;
} coord_t;

typedef struct matrix_s{
    int nb_cols;
    int nb_rows;
    coord_t coords;
    int **matrix;
    int **sol_matrix;
} matrix_t;

#endif /*STRUCT_H_*/
