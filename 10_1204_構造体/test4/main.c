#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(void) {
    structExample *x = malloc(sizeof(structExample));
    x -> a = 'A';
    x -> b = 2;
    x -> c = 3.54;

    printf("x->a = %c\t", x->a);
    printf("x->b = %d\t", x->b);
    printf("x->c = %lf\n", x->c);

    printf("(*x).a = %c\t", (*x).a);
    printf("(*x).b = %d\t", (*x).b);
    printf("(*x).c = %lf\n", (*x).c);

    free(x);

    return 0;
}