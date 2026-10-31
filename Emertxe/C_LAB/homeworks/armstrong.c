#include <stdio.h>
int main()
{
    int n, sum = 0, digit, temp, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    if (n <= 0)
    {
        printf("Enter a natural number!\n");
        return 1;
    }
    while (temp)
    {
        temp /= 10;
        count++;
    }
    temp = n;
    for (int j = 1; j <= count; j++)
    {
        int pow = 1;
        digit = temp % 10;
        for (int i = 1; i <= count; i++)
        {
            pow *= digit;
        }
        sum += pow;
        printf("sum = %d\n", sum);
        temp /= 10;
    }

    if (n == sum)
    {
        printf("Entered Number is a Armstrong Number\n");
    }
    else
    {
        printf("Entered Number is not a Armstrong Number\n");
    }
    return 0;
}