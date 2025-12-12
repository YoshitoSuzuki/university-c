#ifndef HEADER_H
#define HEADER_H

#define deltat 0.1
#define MAXTIME 10
#define Xmax 100
#define Ymax 100

typedef struct position {
  double x_;
  double y_;
} POSITION;

typedef struct velocity {
  double x_;
  double y_;
} VELOCITY_;

typedef struct personInfo {
  POSITION pos_;
  VELOCITY_ v_;
  double time_;
} PERSON;

PERSON initializePerson(double x, double y, double vx, double vy, double t);
void printPosition(PERSON p);
void move(PERSON *p);

#endif