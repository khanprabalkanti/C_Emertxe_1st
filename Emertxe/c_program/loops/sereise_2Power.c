#include<stdio.h>
int main()
{
    int n, res = 1;
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d\t", res);
        res*=2;
    }
    return 0;
}
