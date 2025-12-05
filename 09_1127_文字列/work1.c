#include <stdio.h>

int strlength(char str[]) {
    int len = 0;
    while(str[len]) {
        len++;
    }
    return len;
}

void printReverse (char str []) {
    for(int i=strlength(str)-1; i>=0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}


int main(void) {
    char name[] = "Suzuki";
    printReverse(name);
    return 0;
}