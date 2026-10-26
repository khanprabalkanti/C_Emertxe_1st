#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Enter a valid natural number. Negative number & zero are not allowed.\n");
        return 1;
    }
    for(int i = 1; i < n; i++)
    {
        if(!(n % i))
        {
            sum+=i;
            printf("%d\n",i);
        }
    }
    printf("%d\n",sum);
    if(sum > n)
    {
        printf("%d is an Abundant number.\n", n);
    }
    else
    {
        printf("%d is not an Abundant number.\n", n);
    }
    return 0;
}