#include <stdio.h>

int combination(int, int);

int main(void) {
    int n,r;
    n = 5;
    r = 2;
    printf("combination(%d,%d) = %d", n, r, combination(n,r));
    return 0;
}

int combination(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    }else if (n > 0) {
        return combination(n-1,r-1) + combination(n-1,r);
    }else{
        return 1;
    }
}