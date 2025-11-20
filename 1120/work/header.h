#ifndef HEADER_H
#define HEADER_H

#define M 3
#define N 4

double **initializeMatrix(int numrow, int numcol);
void printMatrix(double **x, int numrow, int numcol);
double **transpose(double **x, int numrow, int numcol);

#endif