#include <stdio.h>
int is_prime(int);
int main()
{
    int n;
    scanf("%d", &n);

    if (is_prime(n))
    printf("Prime\n");
    else
    printf("Not Prime\n");

    return 0;
}

int is_prime(int n)
{
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}