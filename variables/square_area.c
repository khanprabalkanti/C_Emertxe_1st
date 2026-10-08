/* Write a program to calculate area of a square */
#include <stdio.h>
int main(){
    float side;
    printf("Enter the side of square: ");
    scanf("%f", &side);
    printf("The Area of the square is: %0.2f\n", side * side);
    return 0;
}