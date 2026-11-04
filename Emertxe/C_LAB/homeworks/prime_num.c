#include<stdio.h>
int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    if(n <= 1)
    {
        printf("Not Prime number\n");
        return 1;
    }
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("Not Prime number\n");
    else
        printf("Prime Number\n");
    return 0;
}