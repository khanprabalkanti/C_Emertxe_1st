#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 20;
    if (n1 || (n2 = 12))/* If the first condition is false then OR logic will check the 2nd one. So n2 = 12 will be executed. */
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf("n1 = %d n2 = %d\n", n1, n2);
    return 0;
}