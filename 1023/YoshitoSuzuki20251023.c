#include <stdio.h>
#define M 2
#define K 3
#define N 2


int main(void) {
    int A[M][K] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };

    int B[K][N] = {
        {1, 2}, 
        {3, 4}, 
        {5, 6}
    };

    int AB[M][N];

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            AB[i][j] = 0;
            for (int k=0; k<K; k++) {
                AB[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            printf("%d ", AB[i][j]);
        }
        printf("\n");
    }

    return 0;
}