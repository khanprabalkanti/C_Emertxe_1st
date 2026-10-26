#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    if(a && (b = 12))/* Here, as AND logic check both variables to be true, b = 12 will be always executed */
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf("n1 = %d n2 = %d\n", a,b);
    return 0;
}