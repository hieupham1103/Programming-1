#include<stdio.h>
#include<math.h>


int main(){
    int n;
    scanf("%d",&n);

    int n_inv = 0;
    int t = n;
    while (t > 0){
        n_inv = n_inv * 10 + t % 10;
        t /= 10;
    }
    printf("Reverse number: %d\n", n_inv);
    if (n_inv == n){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }

    return 0;
}