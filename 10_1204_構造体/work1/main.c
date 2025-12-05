#include <stdio.h>
#include <string.h>
#include "student.h"


int main(void) {
    struct students student1;
    printf("学習番号下4桁を入力してください: ");
    scanf("%d", &student1.id);
    printf("名前を入力してください: ");
    scanf("%s", student1.name);
    printf("数学の点数を入力してください: ");
    scanf("%d", &student1.math);
    printf("英語の点数を入力してください: ");
    scanf("%d", &student1.english);
    printf("物理の点数を入力してください: ");
    scanf("%d", &student1.physics);

    double ave = (student1.math + student1.english + student1.physics) / 3.0;
    printf("%s(学習番号下4桁: %d)の3科目の平均点は、%lf点です\n", student1.name, student1.id, ave);
    return 0;
}