#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LENGTH 30

int main() {
    char s[LENGTH] = "\0";
    char *x = "ABC";

    strcat(s, x);
    printf("s = %s\n", s);
    strcat(s, "DEF");
    printf("s = %s\n", s);
    strcat(s, x);
    printf("s = %s\n", s);
}