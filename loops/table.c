/* Print the table of a number input by the user. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a valid natural number!\n");
        return 1;
    }
    printf("Table of %d:\n", n);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i, n*i);
    }
    return 0;
}