/* Write functions to calculate area of a square, a circle and a rectangle. */
#include <stdio.h>
float square(float side);
float circle(float radius);
float rectangle(float length, float width);
int main(){
    int n;
    printf("Enter Square(1), Circle(2), Rectangle(3): ");
    scanf("%d", &n);
    do{
        if(n == 1){
            float side;
            printf("Enter side of the Square: ");
            scanf("%f", &side);
            printf("The area of the square is: %0.2f\n", square(side));
            break;
        }else if(n == 2){
            float radius;
            printf("Enter radius of the Circle: ");
            scanf("%f", &radius);
            printf("The area of the Circle is: %0.2f\n", circle(radius));
            break;
        }else if(n == 3){
            float length, width;
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            printf("The area of the Circle is: %0.2f\n", rectangle(length, width));
            break;
        }else{
            printf("Invalid Input!\n");
            break;
        }
    }while(1);
    return 0;
}

float square(float side){
    return (side * side);
}

float circle(float radius){
    return (22/7.0)*radius;
}

float rectangle(float length, float width){
    return (length * width);
}
