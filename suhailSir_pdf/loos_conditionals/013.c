/* 13. WAP to find combination nCr. */
#include<stdio.h>
int main()
{
    int n, r;
    printf("Enter total number of available items & number of item you want to choose: ");
    if(scanf("%d%d", &n, &r) != 2 || n < 1 || r < 1)
    {
        printf("Invalid input!\n");
        return 1;
    }
    int factN = 1, factR = 1, factN_R = 1;
    for(int i = 1; i <= n; i++)
    {   
        factN *= i;
    }
    for(int i = 1; i <= r; i++)
    {   
        factR *= i;
    }
    for(int i = 1; i <= n - r; i++)
    {   
        factN_R *= i;
    }
    printf("Combination nCr : %g\n", (float)factN / ((float)factR * (factN_R)));
    return 0;
}