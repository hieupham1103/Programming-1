#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int n, int ascending){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (ascending){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else{
                if(arr[j] < arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}


int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    int b[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }

    int c[2*n];
    for (int i = 0; i < n; i++){
        c[2*i] = a[i];
        c[2*i + 1] = b[i];
    }
    bubbleSort(c, 2 * n, 1);

    return 0;
}