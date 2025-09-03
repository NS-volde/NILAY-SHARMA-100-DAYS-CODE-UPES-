//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/


#include <stdio.h>
int main(){
    int a,b;
    printf("enter the side a : ");
    scanf("%d", &a);
    printf("enter the side b : ");
    scanf("%d", &b);
    printf("THE AREA IS : %d \n", a*b);
    printf("THE PERIMETER IS : %d \n", 2*(a+b));
    return 0;
}