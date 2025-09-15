//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

int main() {
    int n, i;
    float series_sum = 0.0f;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1) return 0;

    for (i = 1; i <= n; i++) {
        float term;
        if (i == 1)
            term = 1.0f;  // first term is 1
        else
            term = (2.0f * i - 1.0f) / (2.0f * i); // float division
        series_sum += term;
    }

    printf("Approximate sum: %.1f\n", series_sum);
    return 0;
}
