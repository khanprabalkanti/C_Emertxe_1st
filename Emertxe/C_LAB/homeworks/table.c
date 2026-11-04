#include<stdio.h>
int main()
{
    int n, limit;
    printf("Enter a number: ");
    a:
    scanf("%d", &n);
    if(n < 2)
    {
        printf("Invalid Input! Enter above 1: ");
        goto a;
    }
    printf("Enter multiplication table: ");
    b:
    scanf("%d", &limit);
    if(limit < 2 || limit > 100)
    {
        printf("Invalid Input! Enter limit between 1 to 100: ");
        goto b;
    }
    printf("Table of %d limit upto %d\n", n, limit);
    for(int i = 2; i < limit + 1; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}