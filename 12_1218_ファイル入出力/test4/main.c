#include <stdio.h>

int main(void) {

    FILE *fp1 = fopen("inputFile.csv", "r");
    FILE *fp2 = fopen("inputFile.tsv", "r");
    
    char x;
    int y;
    double z;

    while (fscanf(fp1, "%c, %d, %lf\n", &x, &y, &z) == 3) {
        printf("%c\t%d\t%lf\n", x, y, z);
    }

    fclose(fp1);

    while (fscanf(fp2, "%c\t%d\t%lf\n", &x, &y, &z) == 3) {
        printf("%c\t%d\t%lf\n", x, y, z);
    }

    fclose(fp2);

    return 0;
}