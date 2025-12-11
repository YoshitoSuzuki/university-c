#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50

typedef struct structName {
  char name[MAX_NAME_LENGTH];
  int score;
} Student;

void inputStudents(Student *students, int n);
void printStudents(const Student *students, int n);
double averageScore(const Student *students, int n);
const Student *findTopStudent(const Student *students, int n);

#endif