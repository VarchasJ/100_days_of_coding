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