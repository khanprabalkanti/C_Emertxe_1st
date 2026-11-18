/* 8. WAP to check if a number is strong or not. */
#include <stdio.h>
int main()
{
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input!\n");
        return 1;
    }
    temp = n;
    while(temp > 0)
    {
        digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if(sum == n)
        printf("Strong Number\n");
    else
        printf("Not Strong\n");
    return 0;
}