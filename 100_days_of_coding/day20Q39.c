//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int number, rem, product = 1, Odd = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;
    while (temp > 0) {
        rem = temp % 10;
        if (rem % 2 != 0) {
            product *= rem;
            Odd = 1;
        }
        temp /= 10;
    }

    if (!Odd) {
        product = 1; 
    }

    printf("The product of odd digits is %d\n", product);

    return 0;
}