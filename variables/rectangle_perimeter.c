/* Write a program to calculate perimeter of rectangle. */
#include <stdio.h>
int main(){
    float length, width;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    printf("Perimeter of the rectangle is: %0.2f\n", 2*(length+width));
    return 0;
}