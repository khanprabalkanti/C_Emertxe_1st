#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Enter a natural number!\n");
        return 1;
    }
    while (n > 9)
    {
        sum = 0;
        int temp = n;
        while (temp)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        n = sum;
        printf("%d\n", sum);
    }
    if(sum == 1)
        printf("Magic Number\n");
    else
        printf("Not Magic Number\n");

    return 0;
}