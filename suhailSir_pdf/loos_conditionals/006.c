/* 6.  Find Largest/Smallest of three numbers. */
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    if (scanf("%d%d%d", &n1, &n2, &n3) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%d is the largest number.\n", n1);
        }
        else
        {
            printf("%d is the largest number.\n", n3);
        }
    }
    else
    {
        if(n2 > n3)
        {
            printf("%d is the largest number.\n", n2);
        }
        else
        {
            printf("%d is the largest number.\n", n3);
        }
    }
    return 0;
}