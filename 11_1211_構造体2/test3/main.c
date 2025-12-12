#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  PERSON p = initializePerson(1.2, 2.8, 3.5, 0.1, 0);
  double cur_t = p.time_;
  while (cur_t < MAXTIME) {
    printPosition(p);
    move(&p);
    cur_t = p.time_;
    if (p.pos_.x_ < 0 || p.pos_.x_ >= Xmax || p.pos_.y_ < 0 ||
        p.pos_.y_ >= Ymax) {
      break;
    }
  }
}