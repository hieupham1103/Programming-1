#include<stdio.h>
#include<math.h>

int main(){
    int continue_program = 1;
    
    while(continue_program){
        printf("=== STUDENT GPA CALCULATOR ===\n");
        
        double math_grade, physic_grade, english_grade;
        
        printf("Enter Math grade (0-100): ");
        scanf("%lf", &math_grade);
        
        printf("Enter Physic grade (0-100): ");
        scanf("%lf", &physic_grade);
        
        printf("Enter English grade (0-100): ");
        scanf("%lf", &english_grade);
        
        double gpa = (math_grade * 2 + physic_grade + english_grade) / 4;
        
        printf("GPA: %.2f\n", gpa);
        
        char grade;
        printf("Classification: ");
        
        if(gpa >= 90){
            grade = 'A';
            printf("Excellent\n");
        }
        else if(gpa >= 80 && gpa < 90){
            grade = 'B';
            printf("Good\n");
        }
        else if(gpa >= 70 && gpa < 80){
            grade = 'C';
            printf("Fair\n");
        }
        else if(gpa >= 60 && gpa < 70){
            grade = 'D';
            printf("Average\n");
        }
        else if(gpa >= 50 && gpa < 60){
            grade = 'F';
            printf("Weak\n");
        }
        else{
            grade = 'X';
            printf("Fail\n");
        }
        
        printf("Grade: %c\n", grade);
        
        printf("\nDo you want to continue to read another grade? (1-Yes, 2-No): ");
        int choice;
        scanf("%d", &choice);
        
        if(choice == 1){
            printf("\n");
            continue_program = 1;
        }
        else{
            continue_program = 0;
            printf("Exit program...\n");
        }
    }
    
    return 0;
}
