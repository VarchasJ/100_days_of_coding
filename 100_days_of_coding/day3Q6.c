//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/




#include <stdio.h>



int main(){
int number1 =0;
int number2=0;

printf("Enter two integers:");
scanf("%d, %d", &number1, &number2);
printf("Before swap: %d %d\n", number1, number2);
printf("After swap: %d %d\n", number2, number1);





    return 0;
}