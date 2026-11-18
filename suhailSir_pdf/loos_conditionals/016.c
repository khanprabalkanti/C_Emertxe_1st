/* 16. WAP to check if a 3-digit number is armstrong or not. */
#include <stdio.h>
int main()
{
    int n, temp, count = 0, digit, sum = 0;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1 || n < 100 || n > 999)
    {
        printf("Invalid input\n");
        return 1;
    }
    temp = n;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}