#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is uppercase\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        if (ch == '0')
        {
            printf("Zero\n");
        }
        else
        {
            if (ch % 2)
                printf("Odd Digit\n");
            else
                printf("Even Digit\n");
        }
    }
    else
    {
        printf("%c is special character\n", ch);
    }
    return 0;
}