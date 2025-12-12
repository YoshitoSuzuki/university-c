#include "header.h"
#include <stdio.h>

Triangle initializeTriangle(double a_x, double a_y, double b_x, double b_y) {
    Triangle t;
    t.a.x = a_x;
    t.a.y = a_y;
    t.b.x = b_x;
    t.b.y = b_y;
    return t;
}

void printVec(const Vec *v) {
    printf("Vector: (%lf, %lf)\n", v->x, v->y);
}

void calcArea(Triangle *t) {
    t->area = 0.5 * (t->a.x * t->b.y - t->a.y * t->b.x);
    if (t->area < 0) {
        t->area = -t->area;
    }
}

void printArea(const Triangle *t) {
    printf("Area: %lf\n", t->area);
}
