/*  */
#include <stdio.h> 
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age <= 13){
        printf("Child.\n");
    }else if(age > 13 && age < 18){
        printf("Teenager.\n");
    }else if(age <= 65){
        printf("Afult.\nCan Vote.\nCan Drive.\n");
    }else{
        printf("Senior Citizen.\n");
    }
    printf("Thank You!\n");
    return 0;
}