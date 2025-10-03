#include<stdio.h>
#include<math.h>


int main(){
    int n;
    scanf("%d",&n);

    int dec = 0;

    for (int po = 1; n > 0; po *= 2){
        dec += (n % 10) * po;
        n /= 10;
    }

    printf("%d", dec);

    return 0;
}