/* 7.  WAP to print sum of N natural numbers. */
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        sum += i + 1;
    }
    printf("Sum = %d\n", sum);
    return 0;
}