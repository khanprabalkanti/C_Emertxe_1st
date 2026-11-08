#include<stdio.h>
int main()
{
    int num, product = 1, digit;
    printf("Enter number: ");
    if(scanf("%d", &num) != 1 || num < 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    while(num > 0)
    {
        digit = num % 10;
        if(digit)
        {
            product *= digit;
        }
        num /= 10;
    }
    printf("Product of non-zero digit: %d\n", product);
    return 0;
}