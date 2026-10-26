#include <stdio.h>
int main()
{
    int n, temp, flag = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a valid natural number. Negative number & zero are not allowed.\n");
        return 1;
    }
    temp = n;
    while(temp > 0)
    {
        if(!(temp % 10))
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
        temp/=10;
    }
    if(flag)
    {
        printf("%d is a duck number.\n", n);
    }
    else
    {
        printf("%d is not a duck number.\n", n);
    }
    return 0;
}