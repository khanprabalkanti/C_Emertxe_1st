/* Print "Hello World" 5 times. */
#include <stdio.h>
void helloWorld(int count);
int main(){
    helloWorld(5);
    return 0;
}
void helloWorld(int count){
    if(count == 0){
        return ;
    }
    printf("Hello World!\n");
    helloWorld(count-1);
}