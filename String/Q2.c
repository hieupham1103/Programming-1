#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;
    printf("The characters of the string in reverse are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c ", s[i]);
    }
    return 0;
}