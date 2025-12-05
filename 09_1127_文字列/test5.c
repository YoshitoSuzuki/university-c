#include <stdio.h>

int strlength(char *str) {
    int len = 0;
    while (*str++) {
        len++;
    }
    return len;
}

int main(void) {
    char *s[] = {"ABC", "DE", "F"};
    for (int n=0; n<3; n++) {
        printf("%d\n", strlength(s[n]));
    }
    return 0;
}