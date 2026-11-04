#include<stdio.h>
int main()
{
    int n, rev_num = 0, count = 0, temp, sq_n, result = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    if(n <= 0)
    {
        printf("Enter a natural number.\n");
        return 1;
    }
    while(temp)
    {
        temp /= 10;
        count++;
    }
    sq_n = n * n;
    printf("Square = %d\n", sq_n);
    for(int i = 1; i <= count; i++)
    {
        rev_num = rev_num * 10 + (sq_n % 10);
        sq_n /= 10;
    }
    while(rev_num)
    {
        result = result * 10 + (rev_num % 10);
        rev_num /= 10;
    }
    n == result ? printf("Automorphic Number\n") : printf("Not Automorphic Number\n");

    return 0;
}