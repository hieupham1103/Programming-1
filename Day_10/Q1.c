#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        sum += x;
    }

    double average = (double)sum / n;
    printf("Average: %.2f\n", average);
    printf("Sum: %d\n", sum);
    return 0;
}