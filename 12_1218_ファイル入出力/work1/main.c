#include <stdio.h>

int main(void) {
    char x[] = {'a', 'b', 'c', 'd'};

    FILE *fp;
    fp = fopen("test.tsv", "w");

    for (int n=0; n<4; n++) {
        fprintf(fp, "%c\t%c\n", x[n], x[n]-32);
    }

    fclose(fp);

    FILE *fp2;
    fp2 = fopen("test.tsv", "a");
    fprintf(fp2, "%c\t%c\n", x[3], x[3]-32);
    fclose(fp2);

    return 0;
}