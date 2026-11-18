/* 17. WAP to check if any digit number is armstrong or not. */
#include <stdio.h>
int main()
{
    int n, temp, count = 0, digit, sum = 0;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    temp = n;
    while(temp > 0)
    {
        temp /= 10;
        count++;
    }
    temp = n;
    while(temp > 0)
    {
        int prod = 1;
        digit = temp % 10;
        for(int i = 1; i <= count; i++)
        {
            prod *= digit;
        }
        sum += prod;
        temp /= 10;
    }
    if(sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}