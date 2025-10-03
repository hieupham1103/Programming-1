#include<stdio.h>
#include<math.h>


int main(){
    int year, week, day;
    scanf("%d %d %d",&year, &week, &day);

    int total_days = year * 365 + week * 7 + day;
    printf("%d", total_days);

    return 0;
}