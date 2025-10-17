#include<stdio.h>
#include<math.h>


int main(){
    int n;
    scanf("%d",&n);
    int fibonacci_1 = 0, fibonacci_2 = 1, fibonacci_n;
    if(n == 0){
        fibonacci_n = 0;
    } else if(n == 1){
        fibonacci_n = 1;
    } else {
        for(int i = 2; i <= n; i++){
            fibonacci_n = fibonacci_1 + fibonacci_2;
            fibonacci_1 = fibonacci_2;
            fibonacci_2 = fibonacci_n;
        }
    }
    printf("%d", fibonacci_n);

    return 0;
}