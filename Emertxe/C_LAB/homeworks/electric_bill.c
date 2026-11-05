#include <stdio.h>
int main()
{
    int unit, consumed, fixed = 50, total_payble;
    printf("Enter total consumed units: ");
    
    if (scanf("%d", &unit) != 1 || unit < 0)
    {
        printf("Invalid input\n");
        return 1;
    }
    if (unit <= 100)
    {
        consumed = unit * 2;
    }
    else if (unit <= 200)
    {
        consumed = 100 * 2 + (unit - 100) * 3;
    }
    else if (unit <= 500)
    {
        consumed = 100 * 2 + 100 * 3 + (unit - 200) * 5;
    }
    else
    {
        consumed = 100 * 2 + 100 * 3 + 300 * 5 + (unit - 500) * 7;
    }

    total_payble = consumed + fixed;
    printf("Electricity bill: Rs. %d/-\n", total_payble);

    return 0;
}