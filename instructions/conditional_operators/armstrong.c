/* Write a program to check if a given number is Armstrong Number or not.
Number	Calculation
0	    (0^1=0)
153	    (1^3+5^3+3^3=153)
370	    (3^3+7^3+0^3=370)
371	    (3^3+7^3+1^3=371)
407	    (4^3+0^3+7^3=407)
1634	(1^4+6^4+3^4+4^4=1634) 
these are Armstrong number
*/
#include <stdio.h>
#include <math.h>
int main(){
    int num, totalDigit = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while(temp != 0){
        temp /= 10;
        totalDigit++;
    }
    temp = num;
    float result = 0.0;
    int remainder;
    while(temp != 0){
        remainder =  temp % 10;
        result += pow(remainder, totalDigit);
        temp /= 10;
    }
    printf("Result: %0.2f\n", result);
    return 0;
}