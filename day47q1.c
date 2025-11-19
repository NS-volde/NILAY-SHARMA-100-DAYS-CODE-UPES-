//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq[26] = {0};
    int i, len1 = 0, len2 = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    
    if (len1 != len2) {
        printf("Not anagrams");
        return 0;
    }

    
    for (i = 0; i < len1; i++) {
        freq[str1[i] - 'a']++;
    }

    
    for (i = 0; i < len2; i++) {
        freq[str2[i] - 'a']--;
    }

   
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
