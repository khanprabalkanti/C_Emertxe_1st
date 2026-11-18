/* 11.  WAP to print 2 power series. */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter limit: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input!\n");
        return 1;
    }
    int res = 1;
    for(int i = 1; i <= n; i++)
    {
        printf("%d\t", res *= 2);
    }
    printf("\n");
    return 0;
}