#include<stdio.h>
#include<math.h>

int main(){
    int num_rows;
    
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &num_rows);
    
    for(int row = 0; row < num_rows; row++){
        for(int col = 0; col <= row; col++){
            
            int coefficient = 1;
            
            if(col == 0 || col == row){
                coefficient = 1;
            }
            else{
                coefficient = 1;
                for(int k = 1; k <= col; k++){
                    coefficient = coefficient * (row - k + 1) / k;
                }
            }
            
            printf("%6d", coefficient);
        }
        
        printf("\n");
    }
    
    return 0;
}
