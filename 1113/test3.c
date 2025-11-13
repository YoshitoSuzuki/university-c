#include <stdio.h>

int main(void) {
    int n = 10;

    int *p;

    p = &n;
    printf("&n=%p\t n = %d\n", &n, n);
    printf("p=%p\t *p = %d\n", p, *p);
    printf("&p=%p\t p = %p\n", &p, p);
}