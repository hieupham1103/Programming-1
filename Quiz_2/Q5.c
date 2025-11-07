#include<stdio.h>
#include<math.h>


int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    double mean = (double)sum / n;
    printf("Sum: %d\n", sum);
    printf("Mean: %f\n", mean);
    return 0;
}