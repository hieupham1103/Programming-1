#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("Matrix 1:\n");
    int A[n][m];
    int B[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matrix 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Sum Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", A[i][j] + B[i][j]);
            if (j < m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }  
    
    return 0;
}
