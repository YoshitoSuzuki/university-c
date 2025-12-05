#include <stdio.h>
#include <string.h>
#include "header.h"

int main(void) {
    structExample x;
    strcpy(x.a, "ABC");
    x.b = 2;
    x.c = 3.54;

    printf("x.a = %s\t", x.a);
    printf("x.b = %d\t", x.b);
    printf("x.c = %lf\n", x.c);

    return 0;
}