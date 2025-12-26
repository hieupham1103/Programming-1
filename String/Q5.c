#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;

    int st;
    printf("Input the position to start extract: ");
    scanf("%d", &st);
    int len;
    printf("Input the length to: ");
    scanf("%d", &len);

    printf("The substring retrived from the string is: ");
    for (int i = st; i < st + len && i < n; i++) {
        printf("%c", s[i]);
    }

    return 0;
}