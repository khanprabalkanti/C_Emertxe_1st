#include <stdio.h>
int main()
{
    int n;
    printf("Enter upto limit: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not Prime number\n");
        return 1;
    }
    for (int j = 2; j <= n; j++)
    {
        int flag = 0;
        for (int i = 2; i * i <= j; i++)
        {
            if (j % i == 0)
            {
                flag++;
                break;
            }
        }
        if (!flag)
            printf("%d, ", j);
    }
    printf("\n");
    return 0;
}