#include <stdio.h>

#define MAXSTRLENGTH 32

int strlength(char str[]) {
    int len = 0;
    while(str[len]) {
        len++;
    }
    return len;
}

int main(void) {
    char s[MAXSTRLENGTH] = "ABCDEFGHIJ";
    printf("%d\n", strlength(s));
    printf("%lu\n", sizeof(s));
    return 0;

}