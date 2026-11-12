#include <stdio.h>
int main()
{
    int attendance, count = 0;
    for (int i = 0; i < 5; i++)
    {
    a:
        if (scanf("%d", &attendance) != 1 || attendance < 0 || attendance > 1)
        {
            printf("Invalid input.\n");
            goto a;
        }
        if (attendance)
            count++;
    }
    int present = count;
    int absent = 5 - present;
    float percentage = ((float)present / 5) * 100;
    printf("Present : %d\nAbsent : %d\nAttendance Percentage : %.2f\n", present, absent, percentage);
    return 0;
}