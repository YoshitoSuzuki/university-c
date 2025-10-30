#include <stdio.h>
double f(double x);

int main(void) {
    double x = 3.0;
    double y, z, w;
    y = f(x);
    z = f(3.5);
    w = f(2.0) + f(y) + 1;
    printf("%f\n", y);
    printf("%f\n", z);
    printf("%f\n", w);
    return 0;
}

double f(double x) {
    return 4*x*x + 2*x + 9;
}