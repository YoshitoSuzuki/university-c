#include <stdio.h>

int main(void) {
    char x[] = {'a', 'b', 'c'};
    int y[] = {1, 2, 3};

    FILE *fp;
    fp = fopen("test.tsv", "w");

    for (int n=0; n<3; n++) {
        fprintf(fp, "%c\t%d\n", x[n], y[n]);
    }

    fclose(fp);

    return 0;
}