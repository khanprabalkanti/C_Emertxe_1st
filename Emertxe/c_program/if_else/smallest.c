#include <stdio.h>
int main()
{
    int n1, n2, n3, small;
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 < n2)
    {
        if (n1 < n3)
        {
            small = n1;
        }
        else
        {
            small = n3;
        }
    }
    else
    {
        if (n2 < n3)
        {
            small = n2;
        }
        else
        {
            small = n3;
        }
    }
    printf("Smallest: %d\n", small);
    return 0;
}