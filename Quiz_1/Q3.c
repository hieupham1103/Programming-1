#include<stdio.h>
#include<math.h>

int main(){
    int pos_counter = 0;
    int neg_counter = 0;

    for (int i = 1; i <= 12; i++) {
        int x;
        printf("Enter number %d: ", i);
        scanf("%d", &x);
        if (x > 0) {
            pos_counter++;
        }
        else if (x < 0) {
            neg_counter++;
        }
    }

    printf("Positive numbers: %d\n", pos_counter);
    printf("Negative numbers: %d\n", neg_counter);

    return 0;
}