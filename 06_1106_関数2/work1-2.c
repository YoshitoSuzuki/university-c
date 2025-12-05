#include <stdio.h>
#define N 10

void f(int [], int);
int sum(int [], int);
int get_max(int [], int);


int main(void) {
    int x[N];
    for (int n=0;n<N;n++) {
        x[n] = n * 3;
    }
    f(x,N);
    printf("Sum = %d\n", sum(x,N));
    printf("Max = %d\n", get_max(x,N));
    return 0;
}

void f(int x[], int len) {
    for (int n=0;n<len;n++) {
        printf("x[%d] = %d\n", n, x[n]);
    }
}


int sum(int x[], int len) {
    int s = 0;
    for (int i=0;i<len;i++) {
        s += x[i];
    }
    return s;
}

int get_max(int x[], int len) {
    int max = x[0];
    for (int i=1;i<len;i++) {
        if (x[i] > max) {
            max = x[i];
        }
    }
    return max;
}