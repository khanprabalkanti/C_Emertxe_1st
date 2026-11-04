#include <stdio.h>
int main()
{
    int n, temp, lar, digit;
    printf("Enter number: ");
a:
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Error! Enter number above 0: ");
        goto a;
    }
    temp = n;
    while (temp)
    {
        temp /= 10;
        digit = temp % 10;
        if (digit > lar)
        {
            lar = digit;
        }
    }
    printf("Largest = %d\n", lar);
    return 0;
}