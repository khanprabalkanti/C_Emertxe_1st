/* Print all the odd numbers. */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Odd numbers till %d\n", n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}