#include <stdio.h>

int f(double x) {
    x = x + 1;
    return x*x;
}

int main(void) {
    double y = 6;
    double z, w;
    z = f(y);
    w = f(6);
    printf("%lf\n", y);
    printf("%lf\n", z);
    printf("%lf\n", w);
    return 0;
}