#include <stdio.h>
#include <string.h>


int main(void) {
    char s1[][5] = {"ABC", "DE", "F"};
    char *s2[] = {"ABC", "DE", "F"};
    for (int n=0; n<3; n++) {
        printf("%lu\t%lu\n", strlen(s1[n]), strlen(s2[n]));
    }
    return 0;
}