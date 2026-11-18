/* 15. WAP to check if a number is prime or not. */
#include <stdio.h>
int main()
{
    int n, flag = 0;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input!\n");
        return 1;
    }
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
        }
    }
    if(flag)
        printf("Not Prime\n");
    else
        printf("Prime\n");
    return 0;
}