/* Write 2 functions - one to print "Hello" & second to print "Good bye". */
#include <stdio.h>
void Hello();
void goodBye();
int main(){
    Hello();
    goodBye();
    return 0;
}

void Hello(){
    printf("Hello!\n");
}

void goodBye(){
    printf("Good Bye!\n");
}