#include <stdio.h>
#define N 10

int main(void) {

    FILE *fp1 = fopen("inputFile.csv", "w");
    FILE *fp2 = fopen("inputFile.tsv", "w");

    for (int i=0; i<N; i++) {
        fprintf(fp1, "%c, %d, %lf\n", 'a'+i, i, i*1.1);
        fprintf(fp2, "%c\t%d\t%lf\n", 'a'+i, i, i*1.1);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}