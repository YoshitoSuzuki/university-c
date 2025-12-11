#include "student.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numberOfStudents;
	printf("input the number of students: ");
	scanf("%d", &numberOfStudents);
	Student *students = malloc(sizeof(Student) * numberOfStudents);

	inputStudents(students, numberOfStudents);
	printStudents(students, numberOfStudents);
	double average = averageScore(students, numberOfStudents);
	const Student *topStudent = findTopStudent(students, numberOfStudents);

	printf("Average score: %.0f\n", average);
	printf("Top student name and score: %s, %d\n", topStudent->name,
		 topStudent->score);
	free(students);
	return 0;
}