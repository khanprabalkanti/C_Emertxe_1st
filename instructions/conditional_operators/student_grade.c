/* 
Write a program to give grades to a student
mark < 30 is D
mark >= 30 && mark < 50 is C
mark >= 50 && mark < 70 is B
mark >= 70 && mark < 90 is A
mark >= 90 && mark <= 100 is A+
 */
#include <stdio.h>
int main(){
    int mark;
    printf("Enter mark(0 to 100): ");
    scanf("%d", &mark);
    if(mark < 30){
        printf("D\n");
    }else if(mark >= 30 && mark < 50){
        printf("C\n");
    }else if(mark >= 50 && mark < 70){
        printf("B\n");
    }else if(mark >= 70 && mark < 90){
        printf("A\n");
    }else if(mark >= 90 && mark < 100){
        printf("A+\n");
    }else{
        printf("Enter a valid marks!\n");
    }
    return 0;
}