/* 19. WAP to check if a number is perfect or not. */
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input\n");
        return 1;
    } 
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    if(sum == n)
        printf("Perfect Number.\n");
    else
        printf("Not Perfect number\n");
    return 0;
}
