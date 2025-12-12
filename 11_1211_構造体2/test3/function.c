#include "header.h"
#include <stdio.h>
#include <stdlib.h>

PERSON initializePerson(double x, double y, double vx, double vy, double t) {
  PERSON p;
  p.pos_.x_ = x;
  p.pos_.y_ = y;
  p.v_.x_ = vx;
  p.v_.y_ = vy;
  p.time_ = t;
  return p;
}

void printPosition(PERSON p) {
  printf("time = %lf\t position = (%lf, %lf)\n", p.time_, p.pos_.x_, p.pos_.y_);
  return;
}

void move(PERSON *p) {
  p->pos_.x_ += deltat * p->v_.x_;
  p->pos_.y_ += deltat * p->v_.y_;
  p->time_ += deltat;
}