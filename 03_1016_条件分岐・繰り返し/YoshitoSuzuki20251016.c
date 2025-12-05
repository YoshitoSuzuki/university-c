# include <stdio.h>

int main(void) {

    int n = 0;
    
    int a = 6;
    int b = -2196;
    int c = 238728;
    int d = -6597360;

    long fn = a*n*n*n + b*n*n + c*n + d;

    while (fn || n > 200) {
        n++;
        fn = a*n*n*n + b*n*n + c*n + d;
    }

    printf("f(%d)=%ld\n", n, fn);
    printf("n=%dのとき、f(n)=0\n", n);

    return 0;
}