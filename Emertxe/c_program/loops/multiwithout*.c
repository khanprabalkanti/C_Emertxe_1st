#include <stdio.h>
int main()
{
    int n1, n2, res = 0;
    scanf("%d%d", &n1, &n2);
    for (int i = 1; i <= n2; i++)
    {
        res = res + n1;
    }
    printf("Answer: %d\n", res);
    return 0;
}