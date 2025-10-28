//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int a, b, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    for (int i = max; ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break; 
        }
    }

    printf("LCM = %d\n", lcm);

    return 0;
}

