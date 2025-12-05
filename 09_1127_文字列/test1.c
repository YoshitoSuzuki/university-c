#include <stdio.h>

int main(void) {
    char x = 'a'; // 文字
    char y [] = "a"; // 文字列
    int z = 97;
    printf("x = %c\t x = %d\t sizeof(x) = %lu\n", x, x, sizeof(x));
    printf("y = %s\t y = %d %d\t sizeof(y) = %lu\n", y, y[0], y[1], sizeof(y));
    printf("z = %c\n", z);
    char w[4];
    w[0] = 'A';
    w[1] = 'B';
    w[2] = 'C';
    w[3] = '\0';
    printf("%s\n", w);
    return 0;
}