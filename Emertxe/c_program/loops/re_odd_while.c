#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    if(!(n%2))
    {
        n--;
    }
    i = n;
    while (i >= 1)
    {
        printf("%d ", i);
        i-=2;
    }
    printf("\n");
    return 0;
    
}