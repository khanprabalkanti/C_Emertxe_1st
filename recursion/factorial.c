/* factorial of n. */
#include <stdio.h>
int factorial(int n);
int main(){
    printf("%d\n", factorial(5));
    return 0;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return (factorial(n-1) * n);
}