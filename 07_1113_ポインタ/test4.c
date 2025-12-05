#include <stdio.h>


int main(void) {

    int *p;

    int n = 10;
    int m = 5;

    p = &n;
    n = m;
    m = *p;

    printf("n = %d, m = %d\n", n, m);
    return 0;
}