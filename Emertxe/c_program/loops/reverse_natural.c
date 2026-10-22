#include<stdio.h>
int main()
{
    int limit, i;
    printf("Enter limit: ");
    scanf("%d", &limit);
    for(i=limit; i>=1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}