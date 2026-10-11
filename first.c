/* #include <stdio.h>

int main(){
    printf("Hello World\n");
    return 0;
} */
#include <stdio.h>
int main(){
    int totalDigit = 0, num;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num != 0){
        num /= 10;
        totalDigit++;
    }
    printf("Total Digits %d\n", totalDigit);
    printf("Total Digits %d\n", 12/10);

}