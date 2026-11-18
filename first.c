#include <stdio.h>

int main()
{
    char i = 0377;
    for(;i;)
    {
        printf("%d\t", i);
        for(;i--;)
            break;
    }
    printf("%d\t", i);
    return 0;
}
