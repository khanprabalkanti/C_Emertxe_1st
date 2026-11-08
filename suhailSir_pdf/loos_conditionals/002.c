/* 2.  WAP to check the number is +ve/-ve/0. */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (num <= 0)
    {
        if (num == 0)
        {
            printf("Zero.\n");
        }
        else
        {
            printf("%d is a -ve number.\n", num);
        }
    }
    else
        printf("%d is a +ve number.\n", num);

    return 0;
}