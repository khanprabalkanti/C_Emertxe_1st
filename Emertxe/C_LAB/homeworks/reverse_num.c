#include<stdio.h>
int main()
{
    //Without storing reverse number inside a variable
    /* int n, re_digit;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a natural number!\n");
        return 1;
    }
    printf("Reverse : ");
    while(n)
    {
        re_digit = n % 10;
        printf("%d", re_digit);
        n /= 10;
    }
    printf("\n"); */

    //Storing reverse number inside a variable
    int n, re_digit, re_num = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a natural number!\n");
        return 1;
    }
    while(n)
    {
        re_digit = (n % 10);
        re_num = (re_num * 10) +  re_digit;
        n /= 10;
    }
    printf("Reverse: %d\n", re_num);

    return 0;
}