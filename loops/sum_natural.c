/* Print the sum of first n natural numbers, also print them reversal. */
#include <stdio.h>
int main()
{
    int n, sum = 0;
    float avg;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Enter a valid natural number!\n");
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    avg = (float)sum / n;
    printf("Sum = %d\nAverage = %g\n", sum, avg);
    printf("Reversal: ");
    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}