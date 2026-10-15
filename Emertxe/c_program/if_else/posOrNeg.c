/*
Description: Program to check whether a number is positive, negative, or zero using if-else-if.
Date and Day: 14-10-2026, Wednesday
Sample I/P: -5
Sample O/P: Negative
 */
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Positive\n");
    }
    else if (num < 0)
    {
        printf("Negative\n");
    }
    else
    {

        printf("Zero\n");
    }
    return 0;
}
