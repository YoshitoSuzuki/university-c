#include <stdio.h>

int main(void) {
    int n = 10;
    printf("%p, %lubyte, n= %d\n", &n, sizeof(n), n);
    return 0;
}