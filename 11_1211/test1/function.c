#include "header.h"
#include <stdio.h>

NSQUARE InitializeStruct(int n) {
  NSQUARE s;
  s.num = n;
  s.value = n * n;
  return s;
}