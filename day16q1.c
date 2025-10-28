//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        int bit = n % 2;
        binary = bit * place + binary;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary: %d", binary);
    return 0;
}
