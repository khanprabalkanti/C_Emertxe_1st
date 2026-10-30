#include <stdio.h>
int main()
{
    int n ;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            if (i + j <= n)
                printf(" ");
            else
                printf("%c", ch++);
        }
        ch--;
        for (int k = i; k > 1; k--)
        {
            printf("%c", --ch);
        }
        printf("\n");
    }
}