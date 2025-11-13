//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, swapped;
    int digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;  

    
    while (temp > 0) {
        first = temp;   
        temp /= 10;
        digits++;
    }


    if (digits == 1) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    int middle = (num % (int)pow(10, digits - 1)) / 10;

 
    swapped = last * pow(10, digits - 1) + middle * 10 + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
