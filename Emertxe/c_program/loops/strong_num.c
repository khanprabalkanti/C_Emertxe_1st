#include<stdio.h>
int main()
{
    int n, sum = 0, digit, temp;
    scanf("%d", &n);
    temp = n;
    if(n < 0)
    {
        printf("Enter a natural number!\n");
        return 1;
    }
    while(n)
    {
        int fact = 1;
        digit = n % 10;
        printf("%d\n", digit);
        for(int i = 2; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        printf("%d\n", sum);
        n /= 10;
    }
    if(temp == sum)
    {
        printf("Strong Number\n");
    }
    else
    {
        printf("Not a Strong Number\n");
    }
    return 0;
}