#include<stdio.h>

struct person{
    char last_name[50];
    char first_name[50];
    int age;
    char nationality[50];
    float height;
    float weight;
    char job_title[50];
};

int main() {
    struct person p;
    
    printf("Enter last name: ");
    scanf("%s", p.last_name);
    printf("Enter first name: ");
    scanf("%s", p.first_name);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter nationality: ");
    scanf("%s", p.nationality);
    printf("Enter height: ");
    scanf("%f", &p.height);
    printf("Enter weight: ");
    scanf("%f", &p.weight);
    printf("Enter job title: ");
    scanf("%s", p.job_title);

    printf("\nPerson Details:\n");
    printf("Last Name: %s\n", p.last_name);
    printf("First Name: %s\n", p.first_name);
    printf("Age: %d\n", p.age);
    printf("Nationality: %s\n", p.nationality);
    printf("Height: %.2f cm\n", p.height);
    printf("Weight: %.2f kg\n", p.weight);
    printf("Job Title: %s\n", p.job_title);
   
    return 0;
}
