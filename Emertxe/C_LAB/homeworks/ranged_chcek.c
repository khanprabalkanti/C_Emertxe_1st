#include <stdio.h>
int main()
{
    for(int i = 1; i <= 3; i++)
    {
        char ch;
        printf("Enter character: ");
        scanf(" %c", &ch);//Space before format specifier. why?
        printf("Attemps No. : %d\n", i);
        printf("ASCII No: %d\n", ch);
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("Uppercase %c\n", ch);
            printf("Yes, It is in our range.\n");
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("Lowercase %c\n", ch);
            printf("Yes, It is in our range.\n");
        }
        else if(ch >= '0' && ch <= '9')
        {
            printf("Digit %c\n", ch);
            printf("Yes, It is in our range.\n");
        }
        else if(ch == ' ')
        {
            printf("Space\n");
            printf("Yes, It is in our range.\n");
        }
        else
        {
            printf("No, It isn't in our range.\n");
        }
        printf("----------------------\n");
    }
    printf("All attempts are completed.\n");
    return 0;
}