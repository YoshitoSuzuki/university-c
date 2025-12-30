#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *x;
    x = (int *)malloc(sizeof(int));
    if (x == NULL) {
        fprintf(stderr, "メモリを確保できません\n");
        exit(1);
    }

    FILE *fp;
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "ファイルを読み込めません\n");
        exit(1);
    }

    fclose(fp);
    free(x);
    return 0;
}