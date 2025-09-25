//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>
int main(){
    int a,b;
    char OPERATOR;
    printf("enter the no. a : ");
    scanf("%d", &a);
    printf("enter the no. b : ");
    scanf("%d", &b);
    printf("enter the OPERATOR : ");
    scanf(" %c", &OPERATOR);

    switch(OPERATOR){
        case '+' : printf("the output is : %d\n", a + b);
                    break;
        case '-' : printf("the output is : %d\n", a - b);
                      break;
        case '*' : printf("the output is : %d\n", a * b);
                      break;
        case '/' : 
                    if (b!=0)
                        printf("the output is : %d\n", a / b);
                    else
                        printf("division by zero not allowed\n");
                    break;
        case '%' : 
                    if (b!=0)
                        printf("the output is : %d\n", a % b);
                    else
                        break;
        default: printf("invaild operator\n");
    }
    return 0;
}