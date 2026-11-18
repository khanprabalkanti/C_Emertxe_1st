/* 9.  WAP to check if the number is in range or not like 0 to 100, -50 to 70. */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    if(n >= -50 && n <= 70)
        printf("Entered number is in the range\n");
    else
        printf("Entered number is not in the range\n");
    return 0;
}