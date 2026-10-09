/* Write a program to check if a number is dividable by 2 or not/ odd or even */
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d is dividable by 2.\n", num);
        printf("%d is even number.\n", num);
    }else{
        printf("%d is not dividable by 2.\n", num);
        printf("%d is odd number.\n", num);
    }
    return 0;
}