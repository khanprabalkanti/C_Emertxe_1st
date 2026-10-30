#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int temp = n;
        for(int j = 0; j < n - i; j++)
        {
            if(temp > 1)
            {
                printf("%d ", temp);
            }
            else
            {
                printf("* ");
            }
            temp--;
        }
        printf("\n");
    }
}