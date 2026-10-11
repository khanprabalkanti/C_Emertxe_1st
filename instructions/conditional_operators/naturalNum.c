/* 
Write a program to check if the given number is a natural number or not.
 */
#include <stdio.h>
int main(){
    float number;
    printf("Enter a number to check if it is a natural number: ");
    scanf("%f", &number);
    if(number >= 1 && number == (int)number){
        printf("%0.0f is a natural number.\n", number);
    }else{
        printf("%0.2f is not a natural number.\n", number);
    }
    return 0;
}