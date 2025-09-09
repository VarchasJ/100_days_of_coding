//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>

int main() {
    char binary[33], onesComplement[33];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        if (binary[i] == '0')
            onesComplement[i] = '1';
        else
            onesComplement[i] = '0';
    }
    onesComplement[len] = '\0';

    printf("%s\n", onesComplement);

    return 0;
}