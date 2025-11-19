//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>

int main() {
    char str[1000];
    int i, j, k;

    scanf("%s", str);

    
    int len = 0;
    while (str[len] != '\0')
        len++;

    
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {

            
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            
            if (!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }

    return 0;
}
