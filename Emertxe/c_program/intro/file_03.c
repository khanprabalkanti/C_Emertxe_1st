/*
Description: - 
Date and Day:- 12-10-2026
Sample I/P:-
Sample O/P:-
 */
#include <stdio.h>
int main(){
    char ch;
    int num;
    float fnum;
    double dnum;

    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the float value: ");
    scanf("%f", &fnum);
    printf("Enter the double value: ");
    scanf("%lf", &dnum);

    printf("%c %d %f %lf\n", ch, num, fnum, dnum);
    return 0;
    
}