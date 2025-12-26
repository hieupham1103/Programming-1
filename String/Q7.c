#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;
    int alpha = 0, digit = 0, special = 0;

    for (int i = 0; i <= n; i++) {
        if (isalpha(s[i])) {
            alpha++;
        }
        else if (isdigit(s[i])) {
            digit++;
        }
        else {
            special++;
        }
    }

    printf("Number of Alphabets in the string is: %d\n", alpha);
    printf("Number of Digits in the string is: %d\n", digit);
    printf("Number of Special characters in the string is: %d\n", special);

    return 0;
}