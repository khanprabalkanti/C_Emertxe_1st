/* Switch case with numbers */
#include <stdio.h>
int main(){
    int day; //Sunday to Saturday => 1 to 7
    printf("Enter day(in order 1 to 7): ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Enter a valid number!\n");
        break;
    }
    return 0;
}