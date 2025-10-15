//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/


#include <stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int sum=0;
    for(int i=1;i<=n;i++){
    sum = sum + (2*i - 1);
}


printf("sum is : %d\n", sum);
return 0;
}
