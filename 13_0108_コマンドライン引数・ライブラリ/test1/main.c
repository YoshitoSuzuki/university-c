#include <stdio.h>


// a.out 1 2.4 filename.txt

// argv[0] = a.out\0
// argv[1] = 1\0
// ...

// argcは実行ファイル含めた引数の数

int main(int argc, char ** argv) {
    printf("argc = %d\n", argc);
    for (int n=0; n<argc; n++) {
        printf("argv[%d] = %s\n", n, argv[n]);
    }
    return 0;
}