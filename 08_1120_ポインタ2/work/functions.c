#include <stdio.h>
#include <stdlib.h>
#include "header.h"

double **initializeMatrix(int numrow, int numcol) {
    double **array = (double **)malloc(sizeof(double *) * numrow);
    for (int row=0; row<numrow; row++) {
        array[row] = (double *)malloc(sizeof(double) * numcol);
        for (int col=0; col<numcol; col++) {
            array[row][col] = 0.0;
        }
    }
    return array;
}

void printMatrix(double **x, int numrow, int numcol) {
    for (int row=0; row<numrow; row++) {
        for (int col=0; col<numcol; col++) {
            printf("%lf ", x[row][col]);
        }
        printf("\n");
    }
}

double **transpose(double **x, int numrow, int numcol) {
    double **transposed_array = initializeMatrix(numcol, numrow);
    for (int row=0; row<numcol; row++) {
        for (int col=0; col<numrow; col++) {
            transposed_array[row][col] = x[col][row];
        }
    }
    return transposed_array;
}