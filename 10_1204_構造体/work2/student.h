#ifndef STUDENT_H
#define STUDENT_H

#define NUM_STUDENTS 2
#define MAX_SUBJECTS 10
#define MAX_SUBJECTS_LONG 20

typedef struct structName {
    char name[50];
    char *subjects[MAX_SUBJECTS];
    int subjectCount;
} students;

#endif