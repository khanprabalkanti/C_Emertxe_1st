#include <stdio.h>
int main(){
    int n, factorial = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Enter a natural number!\n");
        return 1;
    }
    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial: %d\n", factorial);
    return 0;
}