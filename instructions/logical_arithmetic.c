/* Print 1(true) or 0(false) for following statements.
    i. If it's Sunday & it's Snowing
    ii. If it's Monda or it's Raining
    iii. If a number is greater than 9 & less than 100 -> true  */

#include <stdio.h>
#include <string.h>
int main(){
    char day[20], weather[20];
    int num;
    printf("Enter input(day): ");
    scanf("%s", day);
    printf("Enter input(weather): ");
    scanf("%s", weather);
    if((strcmp(day, "sunday") == 0) && (strcmp(weather, "snowing") == 0 )){
        printf("1\n");
    }else if((strcmp(day, "monday") == 0) || (strcmp(weather, "raining") == 0)){
        printf("1\n");
    }else{
        printf("0\n");
    }
    printf("Enter input(0 to 100): ");
    scanf("%d", &num);
    
    if(num >= 9 && num <= 100){
        printf("1\n");
    }else{
        printf("0\n");
    }
    return 0;
}