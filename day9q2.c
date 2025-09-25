/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:    
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/



#include<stdio.h>
int main(){
    int number;
    printf("enter the number : ");
    scanf("%d", &number);
    printf("Grade is : %d\n", number);


    if(number <= 100 && number >= 90){
        printf("GRADE A\n");
    }else if(number <= 89 && number >= 80){
        printf("GRADE B\n");
    }else if(number <= 79 && number >= 70){
        printf("GRADE C\n");
    }else if(number <=69 && number >= 60){
        printf("GRADE D\n");
    }else if(number < 60){
        printf("GRADE F\n");
    }
    return 0;
}