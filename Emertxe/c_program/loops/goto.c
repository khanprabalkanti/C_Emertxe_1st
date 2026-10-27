#include<stdio.h>
int main()
{
    int limit, i = 1;
    scanf("%d", &limit);

    label:
    printf("%d ", i++);
    if (limit >= i)
    {
        goto label;
    }
    
    return 0;
}