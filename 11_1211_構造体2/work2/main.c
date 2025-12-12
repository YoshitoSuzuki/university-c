#include "header.h"
#include <stdio.h>

int main(void) {
    double a_x, a_y, b_x, b_y;
    printf("Enter the element values of the vector: \n");
    printf("a_x: ");
    scanf("%lf", &a_x);
    printf("a_y: ");
    scanf("%lf", &a_y);
    printf("b_x: ");
    scanf("%lf", &b_x);
    printf("b_y: ");
    scanf("%lf", &b_y);
    
    Triangle t = initializeTriangle(a_x, a_y, b_x, b_y);

    printVec(&t.a);
    printVec(&t.b);

    calcArea(&t);
    printArea(&t);

    return 0;
}