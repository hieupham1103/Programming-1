#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;
    printf("The given sentence is: %s\n", s);
    printf("After Case changed the string is: ");
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            printf("%c", s[i] + 32);
        }
        else if (islower(s[i])) {
            printf("%c", s[i] - 32);
        }
        else {
            printf("%c", s[i]);
        }
    }


    return 0;
}