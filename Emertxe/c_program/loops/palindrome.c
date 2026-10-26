#include<stdio.h>
int main()
{
    int n, temp, res;
    scanf("%d", &n);
    res = 0;
    temp = n;
   /*  while(temp > 0)
    {
        res = temp % 10 + (res * 10);
        temp /= 10;
    } */
    for(int i = 1; temp > 0; i++)
    {
        res = temp % 10 + (res * 10);
        temp /= 10;
    }
    if(n == res)
    {
        printf("Entered Number is a palindrom.\n");
    }
    else
    {
        printf("Entered Number is not a palindrom.\n");
    }
    return 0;
}