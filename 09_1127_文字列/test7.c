#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LENGTH 30

int main() {
    char s1[] = "abcdefghij";
    char s2[] = "ABCDEFGHIJ";

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    char *s3;
    s3 = strcpy(s1, s2);

    printf("s1 = %s\n", s1);
    printf("s3 = %s\n", s3);

    printf("s1のアドレス = %p\n", s1);
    printf("s2のアドレス = %p\n", s2);
    printf("s3のアドレス = %p\n", s3);
}