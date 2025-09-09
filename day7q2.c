//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/


#include <stdio.h>
int main(){
    char input;
    printf("enter the character : ");
    scanf("%c", &input);


    if(input == 'a'|| input == 'e'|| input == 'i' || input == 'o' || input == 'u' 
        || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U'){
        printf("vowel");
    }else{
        printf("consonant");
    }
    return 0;
}