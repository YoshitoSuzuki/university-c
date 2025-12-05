#include <stdio.h>
#include <string.h>

void printStrCmp(const char *s1, const char *s2) {
    if(strcmp(s1, s2) < 0) {
        printf("%s < %s\n", s1, s2);
    }else if(strcmp(s1, s2) == 0) {
        printf("%s = %s\n", s1, s2);
    }else if(strcmp(s1, s2) > 0) {
        printf("%s > %s\n", s1, s2);
    }
}

int main() {
    char s1[] = "ABC";
    char s2[] = "DEF";
    char s3[] = "ABCDEF";
    printStrCmp(s1, s1);
    printStrCmp(s1, s2);
    printStrCmp(s3, s1);
}