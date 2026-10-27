#include <stdio.h>
int main()
{
    char ch;
    int size, line;
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter Line: ");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}