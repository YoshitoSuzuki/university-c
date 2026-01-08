#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    time_t seed = time(NULL);

    srand(seed);

    for (int i=0; i<40; i++) {
        printf("%10d", rand());
    }
    printf("\n");

    return 0;
}