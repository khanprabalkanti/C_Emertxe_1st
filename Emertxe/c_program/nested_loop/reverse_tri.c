#include <stdio.h>
int main()
{
    int line;
    printf("Enter Line: ");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1;j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}