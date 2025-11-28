#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter array size (N>=100) ");
    scanf("%d", &n);
    printf("The original array\n");
    
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        *(a + i) = rand() % 100;
        printf("%d ", *(a + i));
    }

    int k;
    printf("\nEnter a value (from 1 to 50) to be deleted: ");
    scanf("%d", &k);

    int *b = (int *)malloc(n * sizeof(int));
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (*(a + i) != k) {
            *(b + idx++) = *(a + i);
        }
    }
    printf("The new array:\n");
    for (int i = 0; i < idx; i++) {
        printf("%d ", *(b + i));
    }
    printf("\nThere are %d values of %d being deleted from the original array\n", n - idx, k);
    
    free(a);
    free(b);
    
    return 0;
}