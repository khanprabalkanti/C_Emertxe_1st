#include<stdio.h>
int main(){
    int num1, num2, sum, product;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    product = num1 * num2;
    printf("Sum = %d\n", sum);
    printf("Product: %d\n", product);
    return 0;

}