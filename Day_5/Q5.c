#include<stdio.h>
#include<math.h>

const int ninf = -1e9;

int cal(int n){
    if (n == 0){
        return ninf;
    }
    int x;
    scanf("%d",&x);
    return fmax(x, cal(n - 1));
}

int main(){
    int n;
    scanf("%d",&n);
    int res = cal(n);

    printf("%d", res);
    return 0;
}