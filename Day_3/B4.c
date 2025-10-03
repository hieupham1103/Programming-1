#include<stdio.h>
#include<math.h>


int main(){
    int day;
    scanf("%d",&day);

    int year = day / 365;
    day %= 365;
    int week = day / 7;
    day %= 7;
    printf("%d year, %d week, %d day", year, week, day);
    
    return 0;
}