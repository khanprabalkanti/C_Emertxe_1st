#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a valid number. Negative number & zero are not allowed.\n");
        return 1;
    }

    while(i < n)
    {
        if(!(n % i))
        {
            sum+=i;
            printf("%d\n", i);
        }
        i++;
    }
    printf("sum=%d\n", sum);
    if(sum < n)
    {
        printf("%d is a Deficient number.\n", n);
    }
    else if(sum == n)
    {
        printf("%d is a Perfect number.\n", n);
    }
    else
    {
        printf("%d is an Abundant number.\n", n);
    }
    return 0;
}