#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    
    printf("Enter two integers a and b: ");
    scanf("%d %d", &a, &b);
    
    if (a <= b) {
        printf("Even numbers from %d to %d: ", a, b);
        int sum = 0;
        int found_even = 0;
        
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
                sum += i;
                found_even = 1;
            }
        }
        
        if (found_even) {
            printf("\nSum of even numbers: %d\n", sum);
        } else {
            printf("\nNo even numbers found in the range.\nSum of even numbers: 0\n");
        }
    } else {
        printf("As a is greater than b so that we cannot calculate the sum.\n");
    }
    
    return 0;
}