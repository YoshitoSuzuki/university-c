#include <stdio.h>
#include <time.h>

int main(void) {
    time_t curTime;
    printf("size of (time_t) = %d\n", sizeof(time_t));
    printf("size of (int) = %d\n", sizeof(int));
    printf("size of (unsigned long) = %d\n", sizeof(unsigned long));

    printf("\n");

    curTime = time(NULL);
    printf("%ld\n", curTime);
    printf("%s", ctime(&curTime));
    printf("\n");

    curTime = 0;
    printf("%ld\n", curTime);
    printf("%s", ctime(&curTime));

    return 0;
}