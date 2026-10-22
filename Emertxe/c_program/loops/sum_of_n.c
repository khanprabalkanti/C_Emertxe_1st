#include <stdio.h>
int main()
{
    int n, sum = 0;
    float avg;
    scanf("%d", &n);
    if(n<0)
    {
        printf("Enter a valid natural number!\n");
        return 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    avg = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %g\n", avg);
    return 0;
}