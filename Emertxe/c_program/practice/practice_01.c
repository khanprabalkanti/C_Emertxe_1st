#include <stdio.h>
int main()
{
    int n1 = 10, n2 = 20;
    if (n1 || (n2 = 12))/* If first logic is true OR logic doesn't check the 2nd condition. So n2 will remain same, n2 = 20. If n1 is true, n2 = 12 will never be executed. */ 
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf("n1 = %d n2 = %d\n", n1,n2);
    return 0;
}