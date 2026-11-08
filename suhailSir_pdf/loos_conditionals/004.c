/* 4.  WAP to print N natural number. */
#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    if(scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    int i = 1;
    b:
    printf("%d ", i);

    if(i < n)
    {
        i++;
        goto b;
    }
    printf("\n");
    return 0;
}