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

char alphabet[50];
printf("Enter an alphabet: ");
scanf("%s",alphabet);

if(alphabet[0]=='a' || alphabet[0]=='e' || alphabet[0]=='i' || alphabet[0]=='o' || alphabet[0]=='u' || alphabet[0]=='A' || alphabet[0]=='E' || alphabet[0]=='I' || alphabet[0]=='O' || alphabet[0]=='U'){
    printf("Vowel");}
    else{printf("consonant");}

    return 0;

}
