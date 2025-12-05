#include <stdio.h>
#include <math.h>
#include "header.h"


int main(void) {
    struct structName x;
    structExample y;
    x.a = 'x';
    x.b = 3;
    x.c = 2.5;
    y.a = 'y';
    y.b = 9;
    y.c = M_PI;
    printf("x.a = %c, x.b = %d, x.c = %lf\n", x.a, x.b, x.c);
    printf("y.a = %c, y.b = %d, y.c = %lf\n", y.a, y.b, y.c);
    return 0;
}