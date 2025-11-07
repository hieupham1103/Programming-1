#include<stdio.h>
#include<math.h>


int main(){
    int n;
    printf("Input the size of the square matrix: ");
    scanf("%d",&n);

    int a[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Element - [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i][i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the main diagonal elements: %d\n", sum);
    return 0;
}