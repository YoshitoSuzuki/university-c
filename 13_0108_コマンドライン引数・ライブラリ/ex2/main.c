#include <stdio.h>
#include <string.h>

// --------
struct book {
    int year;
    int month;
    int day;
    int hour;
    char title[100];
    int number;
};

void main () {
    struct book zousho01;

    // ----------
    zousho01.year = 2026;
    zousho01.month = 1;
    zousho01.day = 8;
    zousho01.hour = 13;
    strcpy(zousho01.title, "パンどろぼう");
    zousho01.number = 101;

    printf("%04d %02d %02d %02d")
}