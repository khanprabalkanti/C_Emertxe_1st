#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    switch(ch)
    {
        case 'A' ... 'Z':
            printf("Character is Uppercase\n");
            break;
        case 'a' ... 'z':
            printf("Character is Lowercase\n");
            break;
        case '0' ... '9':
            printf("Character is a digit\n");
            break;
        default:
            printf("Not an alphabet or digit\n");
    }
    return 0;
}