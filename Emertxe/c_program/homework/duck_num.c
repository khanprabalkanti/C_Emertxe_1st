
/*
    Date: 23-10-2026
    Description: This program checks whether the entered number is a duck number.
                 A duck number contains at least one zero digit in the number,
                 excluding leading zero conditions.
    Sample Input: 102
    Sample Output:
        Entered number is a duck number.
*/

#include <stdio.h>
int main()
{
    int n,/* mod, */ duck_flag = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Enter a valid natural number. Negative number is not allowed!\n");
        return 1;
    }
    temp = n;
    while (temp > 0)
    {
        /* mod = temp % 10; */
        /* printf("mod = %d\n", mod);
        printf("temp = %d\n", temp); */
        if (temp % 10)
        {
            duck_flag = 0;
        }
        else
        {
            duck_flag = 1;
            break;
        }
        temp/=10;
    }
    printf("%d\n", duck_flag);
    if(duck_flag)
    {
        printf("Entered number is a duck number.\n");
    }
    else
    {
        printf("Entered number is not a duck number.\n");
    }
    return 0;
}