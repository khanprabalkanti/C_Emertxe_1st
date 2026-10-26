#include<stdio.h>
int main()
{
    int x = 5,y=5;
    printf("x=%d\n",x);
    if(x < 0 || (++x > 5))
    {
        printf("True\n");
        printf("x=%d\n",x);
    }
    else
    {
        printf("False\n");
    }
    printf("x=%d\n",x);
    printf("y=%d\n",y++);
    printf("y=%d\n",y);
    return 0;
}