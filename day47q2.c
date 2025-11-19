//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

int main() {
    char str[1000], longest[1000], current[1000];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            current[j++] = str[i];
            currLen++;
        } else {
            current[j] = '\0';  

            if (currLen > maxLen) {
                maxLen = currLen;
                int k = 0;
                while (current[k] != '\0') {
                    longest[k] = current[k];
                    k++;
                }
                longest[k] = '\0';
            }

            
            j = 0;
            currLen = 0;
        }
        i++;
    }

    printf("%s", longest);

    return 0;
}
