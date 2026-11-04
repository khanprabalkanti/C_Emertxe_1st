#include<stdio.h>
int main()
{
    int n, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    if(n <= 0)
    {
        printf("Invalid Input! Enter natural number.\n");
        return 1;
    }
    while(temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    n % sum ? printf("Not Niven Number.\n") : printf("Niven Number\n");

    return 0;
}