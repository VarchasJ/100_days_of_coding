//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main(){

int seconds=0;
int hours=0;
int minutes=0;
printf("Enter time in seconds:");
scanf("%d", &seconds);
hours= seconds/3600;
minutes= (seconds % 3600)/60;
printf("The time in hours:minutes:seconds format is: %d:%d:%d\n", hours, minutes, seconds % 60);



return 0;

}
