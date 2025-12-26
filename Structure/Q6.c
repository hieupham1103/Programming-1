#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_number;
    float mark;
};

void printAboveGrade(struct Student students[], int n, float mark) {
    for (int i = 0; i < n; i++) {
        if (students[i].mark > mark) {
            printf("%s - roll number: %d - mark: %.2f\n", students[i].name, students[i].roll_number, students[i].mark);

        }
    }
}

struct Student findHighestMarks(struct Student students[], int n) {
    int maxid = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].mark > students[maxid].mark) {
            maxid = i;
        }
    }
    return students[maxid];
}

int main() {
    int n = 10;

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and mark of %d student: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_number, &students[i].mark);
    }

    float mark;
    printf("Enter specified grade to filter: ");
    scanf("%f", &mark);

    printAboveGrade(students, n, mark);
    struct Student topStudent = findHighestMarks(students, n);
    printf("Student with highest mark: %s - roll number: %d - mark: %.2f\n", topStudent.name, topStudent.roll_number, topStudent.mark);
    return 0;
}
