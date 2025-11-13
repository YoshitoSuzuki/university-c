#include <math.h>

void calcDeviation(int *x, int num){
    double mu = 0;
    double o;
    double v = 0;

    for(int i=0;i<num;i++){
        mu += x[i];
    }
    mu /= num;
    
    for(int i=0;i<num;i++){
        v += (x[i] - mu) * (x[i] - mu);
    }
    v /= num;

    o = sqrt(v);

    for(int i=0;i<num;i++){
        double d = 10 * ((x[i] - mu)/ o) + 50;
        x[i] = d;
    }
}

