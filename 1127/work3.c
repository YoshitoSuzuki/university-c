#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printSamePlace(char *str1, char *str2) {
    while(*str1 && *str2) {
        if(*str1 == *str2) {
            printf("%c", *str1);
        }
        str1++;
        str2++;
    }
    printf("\n");
}

char *connectStr(char *str1, char *str2) {
    char *newStr = (char *)malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));
    if(strcmp(str1, str2) <= 0) {
        strcpy(newStr, str1);
        strcat(newStr, str2);
    }else {
        strcpy(newStr, str2);
        strcat(newStr, str1);
    }
    return newStr;
}

int main(void) {
    char s1[] = "Apple";
    char s2[] = "Application";
    printSamePlace(s1, s2);
    char *newS = connectStr(s1, s2);
    printf("%s\n", newS);
    free(newS);
    return 0;
}