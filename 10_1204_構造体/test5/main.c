#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(void) {
    structExample *x = malloc(sizeof(structExample) * N);

    x -> a = 'A';
    x -> b = 2;
    x -> c = 3.54;

    (x+1) -> a = 'B';
    (x+1) -> b = 4;
    (x+1) -> c = 1.28;

    for (int n=0; n<N; n++) {
        printf("x[%d].a = %c\t", n, x[n].a);
        printf("x[%d].b = %d\t", n, x[n].b);
        printf("x[%d].c = %lf\n", n, x[n].c);
    }
    free(x);
    return 0;
}