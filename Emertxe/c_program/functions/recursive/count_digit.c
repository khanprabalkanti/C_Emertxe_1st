#include <stdio.h>
int count_digit(int n)
{
    if(n <= 9 && n >= -9)
        return 1;

        return 1 + count_digit(n / 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", count_digit(n));
}