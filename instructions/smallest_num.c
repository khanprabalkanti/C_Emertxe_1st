/* Write a program to print the smallest number. */
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a <= b && a <= c){
        printf("%d is the smallest number.\n", a);
    }else if(b <= a && b <= c){
        printf("%d is the smallest number.\n", b);
    }else{
        printf("%d is the smallest number.\n", c);
    }
    return 0;
}