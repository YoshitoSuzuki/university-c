#include <stdio.h>
#include "header.h"

int main(void) {
    structExample x;

    x.a = 'A';
    x.b = 2;
    x.c = 3.54;

    PrintStruct(x);

    return 0;
}