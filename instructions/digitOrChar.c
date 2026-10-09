/* Write a program to check if given character is digit or not. */
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a input(digit or char): ");
    scanf("%c", &ch);
    if(ch >= '0' && ch <= '9'){
        printf("Given input is a digit.\n");
    }else{
        printf("Given input is not a digit.\n");
    }
    return 0;
}