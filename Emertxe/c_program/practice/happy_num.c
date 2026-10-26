#include<stdio.h>
int main()
{
    int n, temp,digit, sum = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a valid natural number. Negative number & zero are not allowed.\n");
        return 1;
    }
    while(n != 1)
    {
        sum = 0;
        temp = n;
        while(temp > 0)
        {
            digit = temp % 10;
            printf("%d\n", digit);
            sum += (digit*digit);
            printf("%d\n", sum);
            temp/=10;
        }
        n = sum;
    }
    if(sum)
    {
        printf("Happy Number.\n");
    }
    else
    {
        printf("Not a Happy Number.\n");
    }
    return 0;
}