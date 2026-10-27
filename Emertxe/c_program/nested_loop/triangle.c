#include <stdio.h>
int main()
{
    int line, count=1;
    printf("Enter Line: ");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1;j <= i; j++)
        {
            printf("%d ", count++);
        }
        printf("\n");
    }
    return 0;
}