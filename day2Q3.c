//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main() {

   int lenght= 0;
   int breadth=0;
    int area=0;
    int perimeter=0;

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d, %d", &lenght, &breadth);
    area = lenght * breadth;
    perimeter = 2 * (lenght + breadth);
    printf("The are and perimeter of the rectangle are: %d, %d\n", area, perimeter);


    return 0;

}