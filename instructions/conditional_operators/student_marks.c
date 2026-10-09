/* Write a program to check if a student passed or failed.
    Marks > 30 is pass marks
    Marks <= 30 is fail marks
 */
#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks(0-100): ");
    scanf("%d", &marks);
    if(marks >= 0 && marks <= 30){
        printf("Fail\n");
    }else if(marks > 30 && marks <= 100){
        printf("Pass\n");
    }else{
        printf("Enter valid marks (0 to 100)!\n");
    }
    return 0;
}