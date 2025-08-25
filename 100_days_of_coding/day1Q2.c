#include <stdio.h>

int main() {

 int a=0;
 int b=0;
 int sum=0;
 int product=0;
 int difference=0;
 int quotient=0;

 printf("Enter two integers: ");
 scanf("%d,%d", &a, &b);
sum= a + b;
product= a * b;
difference= a - b;
quotient= a / b;
printf("The sum,product,difference and quotient of the two integers are: %d, %d, %d, %d\n", sum, product, difference, quotient);




    return 0;
}