//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/


#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the number a : ");
    scanf("%d", &a);
    printf("enter the number b : ");
    scanf("%d", &b);
    printf("enter the number c : ");
    scanf("%d", &c);
    printf("the largest number is : ");


    if(a>=b && a>=c){
        printf("a is the largest");
    }else if(b>=a && b>=c){
        printf("b is the largest");
    }else if(c>=b && c>=a){
        printf("c is the largest");
    }
    return 0;
}