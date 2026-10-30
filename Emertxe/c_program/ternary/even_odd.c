#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    n % 2 ? printf("Odd\n") : printf("Even\n");
    return 0;
}