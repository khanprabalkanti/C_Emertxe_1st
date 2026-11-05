#include<stdio.h>
int main()
{
    int n, sum = 0, count = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("Excluded : %d\n", i);
            count++;
            continue;
        }
        sum += i;
    }
    printf("----------------\n");
    printf("Sum = %d\n", sum);
    printf("----------------\n");
    printf("Excluded %d numbers.\n", count);
    return 0;
}