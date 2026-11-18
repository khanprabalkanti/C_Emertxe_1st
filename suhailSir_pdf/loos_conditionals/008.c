/* 8.  WAP to find the factorial of a given number.  */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input!\n");
        return 1;
    }
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%d\n", fact);
    return 1;
}
