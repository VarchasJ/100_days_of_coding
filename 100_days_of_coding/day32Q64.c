/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);

    int freq[10] = {0};


    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;

    int maxFreq = 0, mostFrequentDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }
    }
    printf("%d\n", mostFrequentDigit);
    return 0;
}