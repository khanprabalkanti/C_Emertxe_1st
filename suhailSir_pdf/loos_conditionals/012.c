/* 12. WAP to print x^y. */
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number: ");
    if(scanf("%d%d", &x, &y) != 2 || x < 1)
    {
        printf("Invalid input!\n");
        return 1;
    }
    int res = 1;
    for (int i = 1; i <= y; i++)
    {
        res *= x;
    }
    printf("%d\n", res);
    return 0;
}