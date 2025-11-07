#include<stdio.h>
#include<math.h>

void convertDays(int totalDays){
    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int weeks = remainingDays / 7;
    int days = remainingDays % 7;

    printf("%d days = %d years + %d weeks + %d days\n", totalDays, years, weeks, days);
}

int main(){
    int day;
    int years, weeks, days;
    
    scanf("%d", &day);
    
    convertDays(day);
    
    return 0;
}