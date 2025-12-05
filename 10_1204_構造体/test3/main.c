#include <stdio.h>
#include "header.h"

int main(void) {
    structExample x[N];
    x[0].a = 'A';
    x[0].b = 1;
    x[0].c = 2.4;
    x[1].a = 'B';
    x[1].b = 3;
    x[1].c = 3.1;

    for (int n=0; n<N; n++) {
        printf("x[%d].a = %c\t", n, x[n].a);
        printf("x[%d].b = %d\t", n, x[n].b);
        printf("x[%d].c = %lf\n", n, x[n].c);
    }
    return 0;
}