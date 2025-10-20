# include <stdio.h>

int q1(void);
int q2(void);
int q3(void);
int q4(void);
int q4_printSpace(int n);
int test(void);

int main(void) {
    test();
    return 0;
}

int q1(void) {
    int Z;
    printf("Enter an integer: ");
    scanf("%d", &Z);
    if(Z % 2) {
        printf("Odd\n");
    }else{
        printf("Even\n");
    }
    return 0;
}

int q2(void) {

    int Z2;
    printf("Enter an integer: ");
    scanf("%d", &Z2);
    
    int divider[] = {2,3};

    if(!(Z2 % 2)) {
        if(!(Z2 % 3)) {
            printf("%d is divisible by 2 and 3\n", Z2);
        }else{
            printf("%d is divisible by 2 but not by 3\n", Z2);
        }
    }else if(!(Z2 % 3)) {
        printf("%d is divisible by 3 but not by 2\n", Z2);
    }else{
        printf("%d is not divisible by 2 nor by 3\n", Z2);
    }

    return 0;
}

int q3(void) {
    int Z3;
    printf("Enter an integer: ");
    scanf("%d", &Z3);
   
    for(int adding=1; adding <=2; adding++) {
        int i =0;
        int z3 = Z3;
        printf("------\n");
        while(z3 > 0) {
            printf("%d\n", i);
            i += adding;
            z3 -= adding;
        }
    }
    return 0;
}

int q4(void) {
    
    return 0;
}

int q4_printSpace(int n) {
    for(int i=0; i<n; i++) {
        printf(" ");
    }
    return 0;
}


int test(void) {
    int i,j,height;
    int stars, spaces, base_width;
    scanf("%d", &height);

    for(i=0; i<height; i++) {
        for(j=0; j<i; j++) {
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");


    base_width = 2*height -1;
    for(i=0; i<height; i++) {
        stars = 2*i+1;
        spaces = (base_width - stars)/2;
        for(j=0; j<spaces; j++) {
            printf(" ");
        }
        for(j=0;j<stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}