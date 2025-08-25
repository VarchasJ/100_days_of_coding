//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>


int main() {

 int radius=0;
 int area=0;
 int circumference=0;

 printf("Enter the radius of the circle: ");
 scanf("%d", &radius);

  area= 3.14 * radius * radius;
    circumference= 2 * 3.14 * radius;
    printf("The area and circumference of the circle are: %d, %d\n", area, circumference);



    return 0;
}
