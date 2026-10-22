#include<stdio.h>
int main()
{
    int limit, i;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    if(!(limit % 2))
        limit--;
    for(i = limit; i>=1; i= i-2)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}