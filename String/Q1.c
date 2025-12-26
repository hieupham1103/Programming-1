#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;
    printf("The characters of the string are:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", s[i]);
    }
    return 0;
}