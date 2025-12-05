#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(void) {
    structExample x;
    x.a = (char *)malloc(sizeof(char) * LENGTH);
    strcpy(x.a, "ABC");
    x.b = 2;
    x.c = 3.54;

    printf("x.a = %s\t", x.a);
    printf("x.b = %d\t", x.b);
    printf("x.c = %lf\n", x.c);

    free(x.a);

    return 0;
}
