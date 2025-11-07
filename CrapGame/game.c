#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int roll_dice(){
    return (rand() % 6) + 1;
}

int main(){
    srand((unsigned int)time(NULL));
    int score = 0;
    for (int turn = 1; 1; turn++){
        int die1 = roll_dice();
        int die2 = roll_dice();
        int sum = die1 + die2;
        if (turn == 1){
            printf("=== Turn %d ===\n", turn);
        }
        else{
            printf("\n=== Turn %d - Sum of previous point %d ===\n", turn, score);
        }
        printf("You rolled: %d + %d = %d\n", die1, die2, sum);

        if (turn == 1 && (sum == 7 || sum == 11)){
            printf("You win!\n");
            break;
        }
        else if (turn == 1 && (sum == 2 || sum == 3 || sum == 12)){
            printf("!You lose!\n");
            break;
        }
        else{
            if (turn > 1){
                if (sum == 11 || sum == 2 || sum == 3 || sum == 12){
                    continue;
                }
                else if (sum == 7){
                    printf("Final score: %d\n", score);
                    return 0;
                }
                else{
                    score += sum;
                }
            }
            else{
                score = sum;
            }
        }
    }
    return 0;
}