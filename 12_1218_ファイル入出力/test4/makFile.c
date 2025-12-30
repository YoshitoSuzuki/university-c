#include <stdio.h>

int main(void) {
    FILE *fp1 = fopen("inputFile.csv", "w");
    FILE *fp2 = fopen("inputFile.tsv", "w");

    char x[] = {'a', 'b', 'c', 'd'};
    int y[] = {1, 2, 3, 4};
    double z[] = {1.1, 2.2, 3.3, 4.4};

    for (int i=0; i<4; i++) {
        fprintf(fp1, "%c,%d,%.1f\n", x[i], y[i], z[i]);
        fprintf(fp2, "%c\t%d\t%.1f\n", x[i], y[i], z[i]);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}