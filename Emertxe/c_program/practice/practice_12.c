#include <stdio.h>

int main()
{
    unsigned int x = 4294967295;
    x = x + 2; // Result: 0 (32-bit unsigned int)
    printf("%d\n", x);

    return 0;
}