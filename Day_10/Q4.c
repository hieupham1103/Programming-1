#include <stdio.h>

int main() {
    int arr[5];
    int p, i, j;
    
    printf("Enter the five elements of the array = ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the times of permutation p = ");
    scanf("%d", &p);
    
    p = p % 5;
    
    for (i = 0; i < p; i++) {
        int temp = arr[4];
        for (j = 4; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    
    printf("Cyclically permuted numbers are given = ");
    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
