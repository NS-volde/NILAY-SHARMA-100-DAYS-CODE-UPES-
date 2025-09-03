//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/


#include <stdio.h>
int main(){
    int a;
    printf("enter the input : ");
    scanf("%d", &a);
    printf("the output is : %d", (a*9/5) + 32);
}