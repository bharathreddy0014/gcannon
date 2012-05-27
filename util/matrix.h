/*
 * =====================================================================================
 *
 *       Filename:  matrix.h
 *
 *    Description:  Utility functions for matrices
 *
 *        Version:  1.0
 *       Compiler:  gcc
 *
 *         Author:  Jorge Ramirez <jorgeramirez1990@gmail.com>
 *
 * =====================================================================================
 */
#include <stdio.h>

struct struct_matrix {
    int nrow;
    int ncol;
    int **data;
};

typedef struct struct_matrix Matrix; 

void create_matrix(Matrix *m, int nrow, int ncol);
void populate_matrix(Matrix *m);
void print_matrix(Matrix *m, char iden);
//void rsync_submatrix(Matrix *mat, Matrix *sub, int id, int push, int P, int Q, int M,  int SIZE);
//void rsync_local(Matrix *mat, Matrix *sub, int row, int col, int push);
//void matrix_product(Matrix *c, Matrix *a, Matrix *b);
