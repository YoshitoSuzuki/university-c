#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char x[][5] = {"ABC", "DE", "F"};
    char *y[] = {"ABC", "DE", "F"};
    char **z = (char **)malloc(sizeof(char *) * 3);
    z[0] = "ABC";
    z[1] = "DE";
    z[2] = "F";
    for(int n=0; n<3; n++) {
        printf("%s\n", x[n]);
        printf("%s\n", y[n]);
        printf("%s\n", z[n]);
    }
    printf("\n");
    return 0;
}


