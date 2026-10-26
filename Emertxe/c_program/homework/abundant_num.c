#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Enter a valid natural number. Negative number is not allowed!\n");
        return 1;
    }
    for(int i = 1; i < n; i++)
    {
        if(!(n % i))
        {
            sum+=i;
            printf("Divisor = %d\n",i);
        }
    }
    
    if(sum > n)
    {
        printf("Entered number < Divisors sum = %d < %d\n",n, sum);
        printf("Abundant Number.\n");
    }
    else
    {
        printf("Entered number > Divisors sum = %d > %d\n",n, sum);
        printf("Not an Abundant Number.\n");
    }
    return 0;
}