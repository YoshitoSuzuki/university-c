#include <stdio.h>

int main(void) {
    int x = 10;
    int y = x;
    int *p = &x;
    printf("x = %d, y = %d, *p = %d\n", x, y, *p);
    x = 20;
    printf("x = %d, y = %d, *p = %d\n", x, y, *p);
    *p = 30;
    printf("x = %d, y = %d, *p = %d\n", x, y, *p);
}