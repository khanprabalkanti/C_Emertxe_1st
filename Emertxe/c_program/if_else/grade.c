/*
Description: Program to calculate the grade based on the score using if-else-if.
Date and Day: 14-10-2026, Wednesday
Sample I/P: 82
Sample O/P: Grade B
 */
#include <stdio.h>
int main()
{
    int score;
    char grade;
    scanf("%d", &score);
    if((score < 0 || score > 100)){
        printf("Invalid Input!\n");
        return 1;
    }
    if (score >= 85 && score <= 100)
    {
        grade = 'A';
    }
    else if (score >= 75 && score <= 84)
    {
        grade = 'B';
    }
    else if (score >= 60 && score <= 74)
    {
        grade = 'C';
    }
    else if (score >= 45 && score <= 59)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    printf("Grade %c\n", grade);
    return 0;
}