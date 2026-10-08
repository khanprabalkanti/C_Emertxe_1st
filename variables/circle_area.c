/* Write a program to calculate area of a circle */
#include <stdio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float pi = (22.0/7.0);
    printf("The area of the circle is: %0.2f\n", pi*radius*radius);
    printf("%f", pi);
    return 0;
}