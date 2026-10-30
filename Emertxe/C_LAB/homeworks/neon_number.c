#include<stdio.h>
int main()
{
    int n, sum = 0, sq_n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a natural number.\n");
        return 1;
    }
    sq_n = n * n;
    while(sq_n)
    {
        sum += sq_n % 10;
        sq_n /= 10;
    }
    if(n == sum)
    {
        printf("Neon Number.\n");
    }
    else
    {
        printf("Not a Neon Number.\n");
    }

    return 0;
}