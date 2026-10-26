#include<stdio.h>
int main()
{
    int a = 0, b = 20;
    if(a && (b=5))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf("a=%d b=%d\n", a,b);
    return 0;
}