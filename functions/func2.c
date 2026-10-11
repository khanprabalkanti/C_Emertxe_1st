/* Write a function that prints Namaste if user is Indian & Bonjour if user is French. */
#include <stdio.h>
void greetings(int n);
int main(){
    int n;
    printf("If Indian enter 1 & if French enter 2: ");
    scanf("%d", &n);
    greetings(n);
    return 0;
}
void greetings(int n){
    if(n == 1){
        printf("Namaste!\n");
    }else if(n == 2){
        printf("Bonjour!\n");
    }else{
        printf("Invalid Input!\n");
    }
}