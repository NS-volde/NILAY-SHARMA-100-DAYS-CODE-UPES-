//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);


    int product=1;
    int i=2;
    while(i<=n){
        product = product * i;
        i++;
    }
    printf("the factorial of number is : %d", product);

    return 0;

}
