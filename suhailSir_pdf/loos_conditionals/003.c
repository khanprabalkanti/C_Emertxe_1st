/* 3.  WAP to check if a character is a vowel or not. */
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    if(scanf(" %c", &ch) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        printf("'%c' is a vowel.\n", ch);
    }
    else
    {
        printf("'%c' is not vowel.\n", ch);
    }
    return 0;
}