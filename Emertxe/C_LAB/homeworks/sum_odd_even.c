#include<stdio.h>
int main()
{
    int n, digit, odd_sum = 0, even_sum = 0;
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a natural number: \n");
        return 1;
    }
    while(n)
    {
        digit = n % 10;
        if(digit % 2)
            odd_sum += digit;
        else
            even_sum += digit;
        
        n /= 10;
    }
    printf("Even digits sum = %d\n", even_sum);
    printf("Odd digits sum = %d\n", odd_sum);
    return 0;
}