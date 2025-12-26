#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


struct Person {
    char lastName[50];
    char firstName[50];
    int age;
    char nationality[50];
    float height;
    float weight;
    char jobTitle[100];
};

int main() {
    struct Person p;

    printf("Enter last name: ");
    scanf("%s", p.lastName);

    printf("Enter first name: ");
    scanf("%s", p.firstName);

    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter nationality: ");
    scanf("%s", p.nationality);

    printf("Enter height (in cm): ");
    scanf("%f", &p.height);

    printf("Enter weight (in kg): ");
    scanf("%f", &p.weight);

    printf("Enter job title: ");
    scanf(" %[^\n]", p.jobTitle);

    printf("\n===== Person Information =====\n");
    printf("Last Name: %s\n", p.lastName);
    printf("First Name: %s\n", p.firstName);
    printf("Age: %d\n", p.age);
    printf("Nationality: %s\n", p.nationality);
    printf("Height: %.2f cm\n", p.height);
    printf("Weight: %.2f kg\n", p.weight);
    printf("Job Title: %s\n", p.jobTitle);

    return 0;
}
