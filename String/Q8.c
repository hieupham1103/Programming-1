#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;
    int volwel = 0, consonant = 0;
    for (int i = 0; i < n; i++) {
        char ch = tolower(s[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                volwel++;
            } else {
                consonant++;
            }
        }
    }
    printf("Number of vowel in the string is: %d\n", volwel);
    printf("Number of consonant in the string is: %d\n", consonant);
    
    return 0;
}