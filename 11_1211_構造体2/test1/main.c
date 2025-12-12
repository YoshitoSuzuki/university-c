#include "header.h"
#include <stdio.h>

int main(void) {
  NSQUARE x[N];
  for (int n = 0; n < N; n++) {
    x[n] = InitializeStruct(n);
    printf("%d\t%d\n", x[n].num, x[n].value);
  }
  return 0;
}