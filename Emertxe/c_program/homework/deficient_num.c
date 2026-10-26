#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Enter a valid natural number. Negative number is not allowed!\n");
        return 1;
    }
    for(int i = 1; i < n; i++)
    {
        if(!(n % i))
        {
            sum+=i;
            printf("Divisor = %d\n", i);
        }
    }
    if(sum < n)
    {
        printf("Sum < number = %d < %d\n", sum, n);
        printf("Deficient Number.\n");
    }
    else
    {
        printf("Sum >= number = %d >= %d\n", sum, n);
        printf("Not a Deficient Number.\n");
    }
    return 0;
}