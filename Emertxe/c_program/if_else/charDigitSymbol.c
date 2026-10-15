/*
Description: Program to check whether a character is uppercase, lowercase, a digit, or a symbol using if-else-if.
Date and Day: 14-10-2026, Wednesday
Sample I/P: A
Sample O/P: Upper case
 */
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else{
        printf("Symbol\n");
    }
    return 0;
}