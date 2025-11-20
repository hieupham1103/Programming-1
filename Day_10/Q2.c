#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    float max1 = -1e9;
    float max2 = -1e9;
    for(int i = 1; i <= n; i++){
        float x;
        scanf("%f", &x);
        if (x >= max1){
            max2 = max1;
            max1 = x;
        }
        else if (x > max2){
            max2 = x;
        }
    }

    printf("Largest: %f\n", max1);
    printf("Second Largest: %f\n", max2);


    return 0;
}