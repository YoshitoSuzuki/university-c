#include <stdio.h>

int main(void) {
    char s[] = "ABCDEFGHIJ";
    char *p = "ABCDEFGHIJ";
    printf("文字列p = %s\n", p);
    printf("pの先頭アドレス = %p\n", p);
    printf("\"ABCDEFGHIJ\"のアドレス%p\n", "ABCDEFGHIJ");

    p = "KLMNOPQRST";
    printf("文字列p = %s\n", p);
    printf("pの先頭アドレス = %p\n", p);
    
    return 0;
}