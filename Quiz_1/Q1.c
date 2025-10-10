#include<stdio.h>
#include<math.h>

int main(){
    printf("Choose your color:\n 1. Red\n 2. Yellow\n 3. Green\n");

    int color;
    scanf("%d", &color);

    if (color == 1) {
        printf("Wait 20s");
    }
    else if (color == 2) {
        printf("Wait 5s");
    }
    else{
        printf("You can go");
    }
    return 0;
}