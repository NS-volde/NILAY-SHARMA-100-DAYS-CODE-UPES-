//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

int main() {
    char str[1000];
    int start = 0, end = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        
        if (str[i] != ' ' && str[i] != '\n') {
            start = i;

            
            while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
                i++;
            }

            end = i - 1;

            
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }
        }

        i++;
    }

    printf("%s", str);

    return 0;
}
