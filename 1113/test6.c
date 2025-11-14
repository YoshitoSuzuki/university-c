#include <stdio.h>

int main(void) {
    int x[] = {100, 101, 102, 103, 104};
    int *p = x;
    for (int n =0; n<5; n++) {
        printf("%x[%d] = %p\t x[%d] = %d\t", n, &x[n], n , x[n]);
        printf("(p + %d) = %p\t * (p + %d) = %d\n", n, p+n, n, *(p+n));
    }
}