#include <stdio.h>
#include "header.h"

int main(void) {
    int x[N];
    for (int i=0;i<N;i++){
        printf("点数を入力してください.(%d/%d 人目): \n", i+1,N);
        scanf("%d", &x[i]);
    }

    calcDeviation(x,N);

    for(int i=0;i<N;i++){
        printf("%d人目: %d\n", i+1, x[i]);
    }
    return 0;
}