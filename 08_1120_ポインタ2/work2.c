#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int N = 4, M = 3;
    int **x;
    x = (int **)malloc(sizeof(int *)*M);
    for (int m = 0; m<M; m++) {
        x[m] = (int *)malloc(sizeof(int)*N);
        for (int n=0;n<N;n++) {
            x[m][n] = n + m*N;
            if (x[m][n] <= 9) {
                printf(" ");
            }
            printf("%d ", x[m][n]);
        }
        printf("\n");
    }
}