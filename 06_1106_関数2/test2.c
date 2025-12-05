#include <stdio.h>
#define N 10

void f(/* const */ int x[], int len) {
    for (int n=0;n<len;n++) {
        x[n] = 2*x[n];
    }
}

int main(void) {
    int x[N];
    for (int n=0;n<N;n++) {
        x [n] = n;
    }
    for (int n=0;n<N;n++) {
        printf("x[%d] = %d\n", n ,x[n]);
    }
    printf("\n");
    f(x,N);
    for (int n=0;n<N;n++) {
        printf("x[%d] = %d\n", n, x[n]);
    }
}