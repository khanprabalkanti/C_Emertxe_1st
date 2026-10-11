/* Write a program to find a character entered by user is upper case or lower case */
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("Upper case\n");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Lower case\n");
    }else{
        printf("Not a English Alphabet!\n");
    }
    return 0;
}