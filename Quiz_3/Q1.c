#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char str[100];
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    char *ptr = str;
    while (*ptr != '\n' && *ptr != '\0') {
        // printf("-%c\n", *ptr);
        len++;
        ptr++;
    }

    printf("Length of the string: %d\n", len);
    
    return 0;
}