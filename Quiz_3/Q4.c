#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct Student {
    char name[50];
    int roll_number;
    float mark;
};

void printAboveGrade(struct Student students[], int n, float grade) {
    printf("=== Students who scored more than %.2f ===\n", grade);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].mark > grade) {
            printf("Name: %s - Roll: %d - Mark: %.2f\n",
                students[i].name, students[i].roll_number, students[i].mark);
            found = 1;
        }
    }
    if (!found) {
        printf("Not found\n");
    }
}

struct Student findHighestMarks(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].mark > students[maxIndex].mark) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}

int main() {
    int n = 10;
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        
        printf("Enter name: ");
        scanf(" %s", students[i].name);
        
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        
        printf("Enter mark: ");
        scanf("%f", &students[i].mark);
    }

    float grade;
    printf("\nEnter the grade threshold: ");
    scanf("%f", &grade);
    printAboveGrade(students, n, grade);

    struct Student topStudent = findHighestMarks(students, n);
    printf("===== Student with highest mark =====\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_number);
    printf("Marks: %.2f\n", topStudent.mark);

    return 0;
}
