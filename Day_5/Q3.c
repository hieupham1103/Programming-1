#include<stdio.h>
#include<math.h>

int cal(int n){
    int factorial = 1;
    for(int i = 1; i < n; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    scanf("%d",&n);

    int res = 0;
    for(int i = 1; i <= n; i++){
        res += cal(i);
    }
    printf("%d", res);
    return 0;
}