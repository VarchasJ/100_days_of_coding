//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/



#include <stdio.h>


int main(){

int number1 =0;
int number2=0;
printf("Enter two integers:");
scanf("%d, %d", &number1, &number2);
printf("After swap: %d %d\n", number2, number1);



    return 0;
}