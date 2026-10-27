#include<stdio.h>
int main()
{
    int n,flag = 0;
    scanf("%d", &n);
    if(!(n > 1))
    {
        printf("Invalid input.\n");
        return 1;
    }
    for(int i = 2; i*i <= n; i++)
    {
        if(!(n%i))
        {
            flag++;
            break;
        }
    }
    if(flag)
        printf("Not Prime Number\n");
    else
        printf("Prime Number\n");
    return 0;
}