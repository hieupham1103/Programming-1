#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;
    int counter = 0;

    for (int i = 0; i < n - 2; i++) {
        if ((s[i] == 't' || s[i] == 'T') &&
            (s[i + 1] == 'h' || s[i + 1] == 'H') &&
            (s[i + 2] == 'e' || s[i + 2] == 'E')) {
            counter++;
        }
    }

    printf("The frequency of the word \'the\' is: %d\n", counter);


    return 0;
}