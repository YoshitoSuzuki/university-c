#include <stdio.h>

int f(int);

int main(void) {
    int n = 5;
    printf("n = %d, f(n) = %d", n, f(5));
    return 0;
}

int f(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }else if (n > 0) {
        return f(n-1) + f(n-2);
    }else {
        return 1;
    }
}