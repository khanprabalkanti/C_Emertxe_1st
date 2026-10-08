#include <stdio.h>
int main(){
    float a, b;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter another number: ");
    scanf("%f", &b);
    printf("Sum of those two numbers is : %0.2f\n", a+b);
    return 0;
}