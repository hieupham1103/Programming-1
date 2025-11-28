#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter a size of array: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element a[%d] = : ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    int k;
    printf("Enter a search key: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            printf("The search key is in the position %d\n", i);
            return 0;
        }
    }
    
    return 0;
}