#include <stdio.h>

int gcd (int, int);

int main(void) {
    int x,y;
    x = 221;
    y = 13;
    printf("%d,%dの最大公約数は、%d", x, y, gcd(x, y));
    return 0;
}

int gcd (int x, int y) {
    if (x % y == 0) {
        return y;
    }else {
        return gcd(y, x%y);
    }
}