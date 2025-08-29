//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main(){
int a,b,c;
printf("Enter coefficients a, b and c: ");
scanf("%d,%d,%d", &a, &b, &c);
printf("Your equation is: %d^2 + %dx + %d\n",a,b,c);
int D=pow(b,2)-4*a*c;
if(D>0){
    printf("Roots are real and different\n");
}else if(D==0){
    printf("Roots are real and same\n");
}else{printf("Roots are complex\n");}
{
    /* code */
}






   return 0;
}