#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main(void) {
    students student[NUM_STUDENTS];
    for(int i=0; i<NUM_STUDENTS; i++) {
        printf("%d人目の学生情報を入力してください。: \n", i+1);
        printf("名前: ");
        scanf("%s", student[i].name);
        printf("受講している科目の数: ");
        scanf("%d", &student[i].subjectCount);
        printf("受講している教科名を入力してください。: \n");
        for(int j=0; j<student[i].subjectCount; j++) {
            printf("%d番目の教科名: ", j+1);
            char subject[MAX_SUBJECTS_LONG];
            scanf("%s", subject);
            student[i].subjects[j] = malloc(sizeof(char) * strlen(subject) + 1);
            strcpy(student[i].subjects[j], subject);
        }
        printf("\n");
    }

    printf("---------------------------------\n");

    for(int i=0; i<NUM_STUDENTS; i++) {
        printf("学生名: %s\n", student[i].name);
        printf("受講している教科: \n");
        for(int j=0; j<student[i].subjectCount; j++) {
            printf("- %s\n", student[i].subjects[j]);
        }
        printf("\n");
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        for (int j = 0; j < student[i].subjectCount; j++) {
            free(student[i].subjects[j]);
        }
    }

    return 0;
}