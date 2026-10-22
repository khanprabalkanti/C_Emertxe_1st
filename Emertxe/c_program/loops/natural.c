#include<stdio.h>
int main()
{
    int limit, i;
    printf("Enter limit: ");
    scanf("%d", &limit);
    if(limit <= 0)
    {
        printf("Enter a natural number! \n");
        return 1;
    }
    for(i = 1; i<=limit; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}