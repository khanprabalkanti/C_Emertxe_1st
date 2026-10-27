#include<stdio.h>
int main()
{
    int i = 10;
    do
    {
        printf("hello -> %d\n", i);
        i++;
    } while (i<5);
    printf("outside the loop -> %d\n", i);
    

    return 0;
}