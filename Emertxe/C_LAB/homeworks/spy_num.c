#include <stdio.h>
int main()
{
    int n, sum = 0, product = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Enter a natural number!\n");
        return 1;
    }
    while (n)
    {
        sum += n % 10;
        product *= n % 10;
        n /= 10;
    }
    if (sum == product)
        printf("Spy Number\n");
    else
        printf("Not a Spy Number\n");

    return 0;
}