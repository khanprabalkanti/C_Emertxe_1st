#include <stdio.h>
int main()
{
    int speed, limit, diff;
    printf("Enter Speed Limit & Speed : ");
    if (scanf("%d%d", &limit, &speed) != 2 || speed < 0 || limit < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (speed <= limit)
    {
        printf("No Violation\n");
        return 0;
    }
    else
    {
        diff = speed - limit;
    }
    if (diff <= 10)
    {
        printf("Minor Speed Violation\n");
    }
    else
    {
        printf("Major Speed Violation\n");
    }
    return 0;
}