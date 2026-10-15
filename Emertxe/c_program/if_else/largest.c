/*
Description: Program to find the largest among three numbers using if-else statements.
Date and Day: 14-10-2026, Wednesday
Sample I/P: 10 25 18
Sample O/P: 25 is largest
 */
#include <stdio.h>
int main()
{
    int num1, num2, num3, largest;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        largest = num1;
    }
    else if (num2 > num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }
      printf("%d is largest\n", largest);
    return 0;
}