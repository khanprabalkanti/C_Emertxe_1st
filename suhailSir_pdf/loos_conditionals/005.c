/* 5.  Find Largest/Smallest of two numbers. */
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter 2 numbers: \n");
    if(scanf("%d%d", &n1, &n2) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if(n1 > n2)
    {
        printf("%d is greater than %d\n", n1, n2);
    }
    else
    {
        printf("%d is lesser than %d\n", n1, n2);
    }
    return 0;
}