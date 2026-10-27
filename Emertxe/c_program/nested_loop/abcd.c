#include <stdio.h>
int main()
{
    char ch = 'A';
    int line;
    printf("Enter Line: ");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1;j <= line; j++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}