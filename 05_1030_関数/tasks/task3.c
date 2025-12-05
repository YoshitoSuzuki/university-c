#include <stdio.h>

int f(double x, double y) {
    x = x + y;
    return x*x;
}

int main(void) {
    double y = 6;
    double z, w;
    z = f(y, 1);
    w = f(6, 2);
    printf("%lf\n", y);
    printf("%lf\n", z);
    printf("%lf\n", w);
    return 0;
}