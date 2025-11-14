#include <stdio.h>

int f(int *x) {
    *x *= 2;
}

int main(void) {
    int x = 1;
    for (int i=0; i<10; i++) {
        f(&x);
        printf("%d\n", x);
    }
    return 0;
}

