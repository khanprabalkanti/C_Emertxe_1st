/* Switch case with character */
#include <stdio.h>
int main(){
    char ch;
    printf("Enter day(first char of day, t => tuesday, T => Thursday): ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'S':
        printf("Sunday\n");
        break;
    case 'M':
    case 'm':
        printf("Monday\n");
        break;
    case 't':
        printf("Tuesday\n");
        break;
    case 'W':
    case 'w':
        printf("Wednesday\n");
        break;
    case 'T':
        printf("Thursday\n");
        break;
    case 'F':
    case 'f':
        printf("Friday\n");
        break;
    case 's':
        printf("Saturday\n");
        break;
    
    default:
        printf("Not a valid day\n");
        break;
    }
    return 0;
}