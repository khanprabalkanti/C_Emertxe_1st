#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 'N':
    case 'n':
        printf("North Direction\n");
        break;
    case 'E':
    case 'e':
        printf("East Direction\n");
        break;
    case 'W':
    case 'w':
        printf("West Direction\n");
        break;
    case 'S':
    case 's':
        printf("South Direction\n");
        break;
    default:
        printf("Invalid Direction\n");
        break;
    }
}