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
    if (ascending){
        printf("Sorted array in ascending order (bubble sort): ");
    }
    else{
        printf("Sorted array in descending order (bubble sort): ");
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void sellectionSort(int arr[], int n, int ascending){
    for(int i = 0; i < n - 1; i++){
        int max_idx = i;
        for(int j = i + 1; j < n; j++){
            if (ascending){
                if(arr[j] < arr[max_idx]){
                    max_idx = j;
                }
            }
            else{
                if(arr[j] > arr[max_idx]){
                    max_idx = j;
                }
            }
        }
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
    if (ascending){
        printf("Sorted array in ascending order (selection sort):");
    }
    else{
        printf("Sorted array in descending order (selection sort):");
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
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n, 0);
    bubbleSort(a, n, 1);
    sellectionSort(a, n, 0);
    sellectionSort(a, n, 1);
    
    return 0;
}