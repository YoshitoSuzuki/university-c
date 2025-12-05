#include "header.h"

int main(void) {
   
    double S = 0.0;
    for (int i=1; i<=N; i++) {
        S += f(i) + g(i);
        printf("S = %lf, (N = %d)\n", S, i);
    }
    // f(n) + g(n) = n^2 + 3n + 1
    // S = 1/3 * N (N + 2)(N + 4)
    // N = 10 の時、S = 560
    printf("Final S = %lf\n", S);
    return 0;
}