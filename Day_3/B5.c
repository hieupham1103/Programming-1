#include<stdio.h>
#include<math.h>


int main(){
    int n;
    scanf("%d",&n);

    int roman[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (n > 0){
        while (n >= roman[i]){
            printf("%s", symbol[i]);
            n -= roman[i];
        }
        i++;
    }

    
    return 0;
}