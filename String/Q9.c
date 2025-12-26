#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("After sorting the string appears like: %s", s);
    
    return 0;
}