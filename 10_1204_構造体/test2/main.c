#include <stdio.h>
#include <math.h>
#include "header.h"

int main(void) {
    structExample x = {'x', 3, M_PI};
    printf("x.a = %c\t x.b = %d\t x.c = %lf\n", x.a, x.b, x.c);
}