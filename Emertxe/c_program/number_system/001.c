#include <stdio.h>
int main()
{
    signed char ch = 0;
    printf("%u\n", ch);
    ch = 700;
    printf("%u\n", ch);
    printf("%d\n", ch);
    
    ch = -1000;
    printf("%u\n", ch);
    
    return 0;
}