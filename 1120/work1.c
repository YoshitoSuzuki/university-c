#include <stdio.h>
#include <stdlib.h>

int *f(int arraySize) {
    int *y = malloc(sizeof(int) * arraySize);
    for (int n=0; n<arraySize; n++) {
        y[n] = 3 * (n + 1);
    }
    return y;
}

int main(void) {
    int size = 5;
    int *result = f(size);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += result[i];
    }
    printf("Sum = %d\n", sum);
    free(result);
    return 0;
}