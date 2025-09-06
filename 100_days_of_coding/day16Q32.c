//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main(){

int num,reversed=0,original,rem;
printf("Enter a number:");
scanf("%d", &num);
for(num=original; num!=0; num=num/10){
    rem=num%10;
    reversed=reversed*10+rem;
}
if(original==reversed){
    printf("Palindrome\n");
}
else{
    printf("Not a palindrome\n");
}

    return 0;
}