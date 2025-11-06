#include <stdio.h>

void f(void);
void g(void);

int main(void) {
    f();
    return 0;
}

void f(void) {
    g();
    printf("line %d\t function %s\n", __LINE__, __FUNCTION__);
}

void g(void) {
    printf("line %d\t function %s\n", __LINE__, __FUNCTION__);
}