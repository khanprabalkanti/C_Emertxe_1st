#include <stdio.h>
int square(int);
int main()
{
    int n, result;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    result = square(n);
    printf("Result : %d\n", result);
    return 0;
}

int square(int n)
{
    return n * n;
}