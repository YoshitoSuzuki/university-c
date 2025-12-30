#include <stdio.h>

int main(void) {
    FILE *fp;
    fp = fopen("test.txt", "a");

    for (int i=0; i<10; i++) {
        fprintf(fp, "test\n");
    }

    fclose(fp);

    return 0;
}