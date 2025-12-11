#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  NSQUARE **x = (NSQUARE **)malloc(sizeof(NSQUARE *) * N);

  for (int n = 0; n < N; n++) {
    x[n] = InitializeStruct(n);
    printf("%d\t%d\n", x[n]->num, x[n]->value);
  }
  for (int n = 0; n < N; n++) {
    free(x[n]);
  }
  free(x);
  return 0;
}