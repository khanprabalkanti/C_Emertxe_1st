#include <stdio.h>
int main()

{
    int n;
    printf("Enter year: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Enter a valid year. Negative year is not allowed!\n");
        return 1;
    }
    if((!(n % 4) && (n % 100)) || !(n % 400))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("No Leap Year\n");
    }
    return 0;
}