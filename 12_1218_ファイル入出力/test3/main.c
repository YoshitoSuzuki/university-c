#include <stdio.h>

int main(void) {
    char x[] = {'a', 'b', 'c', 'd'};
    int y[] = {1, 2, 3, 4};

    FILE *fp;
    fp = fopen("test.tsv", "w");

    for (int n=0; n<4; n++) {
        fprintf(fp, "%c\t%d\n", x[n], y[n]);
    }

    fclose(fp);

    FILE *fp2;
    fp2 = fopen("test.tsv", "a");
    fprintf(fp2, "%c\t%d\n", x[3], y[3]);
    fclose(fp2);

    return 0;
}