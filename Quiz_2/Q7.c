#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rolledice(){
    return (rand() % 6) + 1;
}

int main(){
    int frequency[13] = {0};
    int dice1, dice2, sum;
    int rolls = 5000;
    
    srand(time(NULL));
    
    for(int i = 0; i < rolls; i++){
        dice1 = rolledice();
        dice2 = rolledice();
        sum = dice1 + dice2;
        // if ((i + 1) % 1000 == 0){
        //     printf("Roll %d: Dice1 = %d, Dice2 = %d, Sum = %d\n", i + 1, dice1, dice2, sum);
        // }
        frequency[sum]++;
    }
    for(int i = 2; i <= 12; i++){
        printf("Points: %d\t Frequency: %d\n", i, frequency[i]);
    }
    
    return 0;
}
