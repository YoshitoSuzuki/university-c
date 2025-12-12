#include "header.h"
#include <stdio.h>
#include <stdlib.h>

NSQUARE *InitializeStruct(int n) {
  NSQUARE *s = (NSQUARE *)malloc(sizeof(NSQUARE));
  s->num = n;
  s->value = n * n;
  return s;
}