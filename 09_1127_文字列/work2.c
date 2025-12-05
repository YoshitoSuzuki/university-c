#include <stdio.h>
#include <stdlib.h>

void strConnect (char *str1, char *str2) {
    while (*str1) {
        printf("%c", *str1);
        str1++;
    }
    while (*str2) {
        printf("%c", *str2);
        str2++;
    }
    printf("\n");
}

int main(void) {
    char *s1 = "Suzuki";
    char *s2 = "Yoshito";
    strConnect(s1,s2);
    return 0;
}