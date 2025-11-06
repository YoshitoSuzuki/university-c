#include <stdio.h>
#define N 10

int get_max(int [], int);

int main(void) {
    int x[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("max = %d\n", get_max(x, N));
    return 0;
}

int get_max(int x[], int len) {
    if (len == 1) {
        return x[0];
    }else if (x[len-1] >= get_max(x, len-1)) {
        return x[len-1];
    }else {
        return get_max(x, len-1);
    }
}