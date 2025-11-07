#include<stdio.h>
#include<math.h>

int Dec2Bin(int n){
    int bin = 0, place = 1;
    while(n > 0){
        int rem = n % 2;
        bin += rem * place;
        n /= 2;
        place *= 10;
    }
    return bin;
}
int Bin2Dec(int n){
    int dec = 0, power = 1;
    while(n > 0){
        int digit = n % 10;
        dec += digit * power;
        n /= 10;
        power *= 2;
    }
    return dec;
}

int main(){
    int n;
    scanf("%d", &n);

    int n_bin = Dec2Bin(n);
    printf("Binary representation: %d \n", n_bin);
    int n_dec = Bin2Dec(n_bin);
    printf("Decimal representation: %d", n_dec);
    
    return 0;
}