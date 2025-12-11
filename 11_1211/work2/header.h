#ifndef HEADER_H
#define HEADER_H

typedef struct vec {
    double x;
    double y;
} Vec;

typedef struct triangle {
    Vec a;
    Vec b;
    double area;
} Triangle;

Triangle initializeTriangle(double a_x, double a_y, double b_x, double b_y);
void printVed(const Vec *v);
void calcArea(Triangle *t);

#endif