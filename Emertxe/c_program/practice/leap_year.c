#include<stdio.h>
int main()
{
    int year;
    printf("Enter a valid year: ");
    scanf("%d", &year);
    if(year <= 0)
    {
        printf("Year can't be Negative or zero!\n");
        return 1;
    }
    if((!(year % 4) && (year % 100)) || !(year % 400))
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not Leap year\n");
    }
    return 0;
}