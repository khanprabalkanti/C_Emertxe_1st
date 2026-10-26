#include <stdio.h>
int main()
{
    int n, temp, mod, sum = 0, num;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Enter a valid natural number. Negative number is not allowed!\n");
        return 1;
    }
    num = n;
    while (n != 1)
    {
        temp = n;
        sum = 0;
        while (temp > 0)
        {
            mod = temp % 10;
            sum += (mod * mod);
            printf("%d\n", sum);
            temp /= 10;
        }
        n = sum;
    }
    if(n == 1)
    {
        printf("%d is a Happy Number.\n", num);
    }
    else
    {
        printf("%d is not a Happy Number.\n", num);
    }
    
    return 0;
}