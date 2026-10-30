#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // n >= 0 ? (n == 0 ? printf("Zero\n") : (n % 2 ? printf("Positive Odd\n") : printf("N Even\n"))) : (n % 2 ? printf("Positive Odd\n") : printf("Positive Even\n"));
    n % 2 ? (n > 0 ? printf("Positive Odd\n") : printf("Negative Odd\n")) : 
            (n > 0 ? printf("Positive Even\n") : printf("Negative Even\n"));
}