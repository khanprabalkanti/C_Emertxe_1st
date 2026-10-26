#include<stdio.h>
int main()
{
    int a = 5, b = 0;
    if(a && b++)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf("a = %d b = %d\n", a, b);
    return 0;
}