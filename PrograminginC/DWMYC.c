#include <stdio.h>
#include <string.h>

int main(){
       int days, months, years,weeks;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    months= days / 30;
    printf("The number of months in %d is: %d\n",days,months);
    printf("Enter the number of months: ");
    scanf("%d", &months);
    weeks = months* 4;
    printf("The number of weeks in %d is: %d\n", months, weeks);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    weeks= years * 52;
    printf("The number of weeks in %d is: %d\n", years, weeks);
    


    return 0;

}