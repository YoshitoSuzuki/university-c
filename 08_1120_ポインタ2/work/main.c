#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(void) {
    double **x = initializeMatrix(M, N);
    printMatrix(x, M, N);

    printf("-------------------------------------\n");

    for (int m=0;m<M;m++) {
        for (int n=0;n<N;n++) {
            x[m][n] = n + m*N;
        }
    }
    printMatrix(x, M, N);

    printf("-------------------------------------\n");

    x = transpose(x, M, N);
    printMatrix(x, N, M);
    return 0;
}