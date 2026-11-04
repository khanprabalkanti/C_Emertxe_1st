#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                printf("  ");
            else
            {
                if (j % 2)
                    printf("1 ");
                else
                    printf("0 ");
            }
        }
        for (int k = 1; k < i; k++)
        {
            if (k % 2)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    return 0;
}