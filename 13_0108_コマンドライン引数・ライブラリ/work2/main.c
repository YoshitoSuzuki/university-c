#include <stdio.h>
#include <math.h>

int main(void) {
    int N = 100;
    double x, y;

    double xmin = 0;
    double xmax = 6;
    double deltax = (xmax - xmin) / (double)N;

    FILE *fp = fopen("sincurve.csv", "w");
    for (int n=0; n<N; n++) {
        x = deltax * n;
        y = sin(x);
        fprintf(fp, "%lf, %lf\n", x, y);
    }
    fclose(fp);
    return 0;
}