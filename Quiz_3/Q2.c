#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int n;
    printf("Enter a size of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    int k;
    printf("Enter a search key: ");
    scanf("%d", &k);
    int found = -1;

    for (int i = 0; i < n; i++){
        if (a[i] == k){
            found = i;
            break;
        }
    }

    if (found == -1){
        printf("Not found\n");
    } else {
        printf("The search key is in the position %d\n", found + 1);
    }

    return 0;
}