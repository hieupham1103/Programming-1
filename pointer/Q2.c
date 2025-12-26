#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    printf("Enter a size of array: ");
    scanf("%d", &n);

    char **a = (char **)malloc(n * sizeof(char *));
    char **ptr;

    for (ptr = a; ptr < a + n; ptr++) {
        *ptr = (char *)malloc(100 * sizeof(char));
        printf("Enter element a[%ld] = : ", ptr - a);
        scanf("%s", *ptr);
    }

    for (ptr = a; ptr < a + n; ptr++) {
        printf("%s ", *ptr);
    }
    printf("\n\n");
    
    char k[100];
    printf("Enter a search key: ");
    scanf("%s", k);

    for (ptr = a; ptr < a + n; ptr++) {
        if (strcmp(*ptr, k) == 0) {
            printf("The search key is in the position %ld\n", ptr - a);
            for (ptr = a; ptr < a + n; ptr++) {
                free(*ptr);
            }
            free(a);
            return 0;
        }
    }
    
    printf("The search key was not found in the array\n");
    
    // Free memory
    for (ptr = a; ptr < a + n; ptr++) {
        free(*ptr);
    }
    free(a);
    
    return 0;
}