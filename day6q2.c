//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/


#include <stdio.h>
int main(){
    int number;
    printf("enter the number : ");
    scanf("%d", &number);


    if (number>0){
        printf("the integer is positive");
    } else if(number==0){
        printf("the integer is 0");
    } else{
        printf("the integer is negative");
    }
    return 0;
}