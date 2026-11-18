/* 20. WAP to print prime up to limit L.  */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    for(int i = 2; i <= n; i++)
    {
        int flag = 0;
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
                flag = 1;
        }
        if(flag == 0)
            printf("%d\t", i);
    }
    printf("\n");
    return 0;
}