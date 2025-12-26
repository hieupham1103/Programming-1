#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    printf("Input the string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s) - 1;
    printf("Input the substring to be searched: ");
    char sub[100];
    fgets(sub, sizeof(sub), stdin);
    int m = strlen(sub) - 1;
    int counter = 0;
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (s[i + j] != sub[j]) {
                break;
            }
        }
        if (j == m) {
            counter++;
        }
    }

    if (counter > 0) {
        printf("The substring is found %d times in the string.\n", counter);
    } else {
        printf("The substring does not exist in the string.\n");
    }


    return 0;
}