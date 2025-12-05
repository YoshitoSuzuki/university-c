#include <stdio.h>

int f(int);
int main(void) {
    printf("%d\n", f(10));
    return 0;
}

int f(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * f(n-1);
    }
}