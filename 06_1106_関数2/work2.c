#include <stdio.h>

int power(int, int);

int main(void) {
    int x, y;
    x = 2;
    y = 5;
    printf("%d^%d = %d\n", x, y, power(x, y));
    return 0;
}

int power(int a,int n) {
    if (n == 0) {
        return 1;
    }else if (n > 0) {
        return a * power(a, n-1);
    }else {
        return 1;
    }
}