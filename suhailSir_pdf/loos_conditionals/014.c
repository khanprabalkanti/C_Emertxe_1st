/* 14. WAP to check if a year is leap or not. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter year: ");
    if(scanf("%d", &n) != 1 || n < 1000)
    {
        printf("Invalid inpur!\n");
        return 1;
    }
    if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
    {
        printf("Leap year.\n");
    }
    else
        printf("Not a Leap year.\n");
    
    return 0;
}