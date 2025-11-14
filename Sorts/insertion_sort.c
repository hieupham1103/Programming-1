#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void insertionSort(int arr[], int n, int ascending){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        
        if(ascending){
            while(j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j--;
            }
        }
        else{
            while(j >= 0 && arr[j] < key){
                arr[j + 1] = arr[j];
                j--;
            }
        }
        arr[j + 1] = key;
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

    insertionSort(a, n, 1);
    
    return 0;
}
