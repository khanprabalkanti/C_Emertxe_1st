#include <stdio.h>

int reverse(int n, int rev)
{
    if (n <= 0)
        return rev;
    rev = rev * 10 + (n % 10) ;
    return reverse(n / 10, rev);
}
int is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (is_prime(n))
        printf("%d", reverse(n, 0));
    else
        printf("prime numb");
    return 0;
}