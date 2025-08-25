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