/* Write a program to print the average of 3 numbers */
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    float avg =  (a+b+c)/3.0;
    printf("The average number of the 3 number is : %0.2f\n",avg);
    return 0;
}