#include<stdio.h>
int main(){
    float val1, val2, val3, avg;
    printf("Enter 3 float values: ");
    scanf("%f%f%f", &val1, &val2, &val3);
    avg = (float)(val1 + val2 + val3)/3;
    printf("Average: %f\n", avg);
    return 0;
}