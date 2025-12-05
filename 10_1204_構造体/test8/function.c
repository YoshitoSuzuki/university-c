#include <stdio.h>
#include "header.h"

void PrintStruct(structExample s) {
    printf("a = %c\n", s.a);
    printf("b = %d\n", s.b);
    printf("c = %lf\n", s.c);
    return;
}