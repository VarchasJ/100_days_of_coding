//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/




#include <stdio.h>

int main(){

int celsius=0;
int fahrenheit=0;
printf("Enter the temperature in celsius:");
scanf("%d", &celsius);
fahrenheit= (celsius * 9/5) +32;
printf("The temperature in fahrenheit is: %d\n", fahrenheit);
printf("Enter the temperatue in farenheit:");
scanf("%d", &fahrenheit);
celsius= (fahrenheit -32) * 5/9;
printf("The temperature in celsius is: %d\n", celsius);





    return 0;
}