/* 
*Name - Prabal Kanti khan
*Date - 29-10-2026
*Description - Find the middle number from 3 numbers. Take inputs from user.
*Sample I/P - 10 20 30
*Sample O/P - 20
*/
#include<stdio.h>
int main()
{
    int n1, n2, n3, middle;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1 > n2)
    {
        if(n2 > n3){
            middle = n2;
        }
        else
        {
            if(n1 > n3)
            {
                middle = n3;
            }
            else
            {
                middle = n1;
            }
        }
    }
    else
    {
        if(n2 < n3)
        {
            middle = n2;
        }
        else
        {
            if(n3 > n1)
            {
                middle = n3;
            }
            else
            {
                middle = n1;
            }
        }
    }
    printf("Middle = %d\n", middle);
    return 0;
}