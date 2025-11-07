#include<math.h>
#include<stdio.h>

int check(int n){
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ma = fmax(fmax(a, b), fmax(c, d));
    printf("The maximum value is: %d\n", ma);
    int mi = fmin(fmin(a, b), fmin(c, d));
    printf("The minimum value is: %d\n", mi);

    if (check(ma)){
        printf("The maximum number is prime.\n");
    }
    else{
        printf("The maximum number is not prime.\n");
    }

    if (check(mi)){
        printf("The minimum number is prime.\n");
    }
    else{
        printf("The minimum number is not prime.\n");
    }
    return 0;
}