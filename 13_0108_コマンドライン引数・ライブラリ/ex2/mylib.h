#ifndef MYLIB_H

#define MYLIB_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
} Date;

struct book {
    Date today;
    char title[100];
    int number;
};



#endif