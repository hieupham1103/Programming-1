#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[1000];
    printf("Input a string: ");
    scanf("%s", s);
    
    char *ptr = s;
    int length = 0;
    while (*ptr != '\0') {
        printf("%d %c\n",length, *ptr);
        length++;
        ptr++;
    }
    

    printf("The length of %s is: %d\n", s, length);
    
    return 0;
}