/* 1.  WAP to check even/odd. */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num < 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    if (num % 2)
    {
        printf("%d is a Odd number.\n", num);
    }
    else
    {
        printf("%d is a Even number.\n", num);
    }
    return 0;
}