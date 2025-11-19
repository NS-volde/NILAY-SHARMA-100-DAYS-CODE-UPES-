//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>

int main() {
    char str1[1000], str2[1000], concat[2000];
    int i = 0, j = 0, len1 = 0, len2 = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    
    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

   
    for (i = 0; i < len1; i++)
        concat[i] = str1[i];
    for (j = 0; j < len1; j++)
        concat[i + j] = str1[j];
    concat[i + j] = '\0';

 
    int found = 0;
    for (i = 0; concat[i] != '\0'; i++) {
        int k = i, m = 0;

        while (concat[k] == str2[m] && str2[m] != '\0') {
            k++;
            m++;
        }

        if (m == len2) {  
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
