#include<stdio.h>
#include<math.h>

int cal(int n){
    if (n == 0){
        return 0;
    }
    return n % 10 + cal(n / 10);
}

int main(){
    int n;
    scanf("%d",&n);
    int res = cal(n);
    printf("%d", res);
    return 0;
}