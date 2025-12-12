#include "student.h"
#include <stdio.h>
#include <stdlib.h>

void inputStudents(Student *students, int n) {
  for (int i = 0; i < n; i++) {
    printf("input the %d -th student info:\n", i + 1);
    printf("name: ");
    scanf("%s", students[i].name);
    printf("score: ");
    scanf("%d", &students[i].score);
  }
}

void printStudents(const Student *students, int n) {
  printf("***************student info.: ***************\n");
  for (int i = 0; i < n; i++) {
    printf("name: %s, score: %d\n", students[i].name, students[i].score);
  }
  printf("*********************************************\n");
}

double averageScore(const Student *students, int n) {
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += students[i].score;
  }
  return sum / n;
}

const Student *findTopStudent(const Student *students, int n) {
  const Student *topStudent = &students[0];
  for (int i = 1; i < n; i++) {
    if (students[i].score > topStudent->score) {
      topStudent = &students[i];
    }
  }
  return topStudent;
}