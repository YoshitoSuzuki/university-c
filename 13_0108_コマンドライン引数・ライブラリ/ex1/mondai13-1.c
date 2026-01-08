#include <stdio.h>
#include <stdlib.h>

int main() {
    int no;
    int mat[50];
    int i, j, tmp;

    printf("\n");
    printf("\nデータの数(2~50)を入れてください n=");
    scanf("%d", &no);

    printf("\n -----発生した乱数---------");
    for (i=0; i<no; i++) {
        mat[i] = rand();
        if ((i % 5) == 0)
            printf("\n");
        printf("%15d", mat[i]);
    }
    printf("\n");

    for (i=0; i<no; i++) {
        for (j=i+1; j<no; j++) {
            if (mat[i] < mat[j]) {
                tmp = mat[j];
                mat[j] = mat[i];
                mat[i] = tmp;
            }
        }
    }
    
    printf("\n -----並べ替え後の乱数---------");
    for (i=0; i<no; i++) {
        if ((i % 5) == 0)
            printf("\n");
        printf("%15d", mat[i]);
    }
    printf("\n -----おしまい---------");

    printf("\n");

    return 0;
}