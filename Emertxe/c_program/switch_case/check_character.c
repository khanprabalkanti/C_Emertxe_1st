#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A' ... 'Z':
        printf("Entered character is Uppercase\n");
        break;
    case 'a' ... 'z':
        printf("Entered character is Lowercase\n");
        break;
    case '0' ... '9':
        printf("Entered character is Digit\n");
        break;

    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}