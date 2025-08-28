//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>


int main(){
char random;

printf("Enter a character: ");
scanf("%s", &random);

switch (random) {
   case 'A' ... 'Z':
   printf("Uppercase alphabet");
   break;
   case 'a' ... 'z':
   printf("Lowercase alphabet");
   break;
   case '0' ... '9':
   printf("Digit\n");
   break;
   default:
   printf("Special Character");
}
    return 0;
}