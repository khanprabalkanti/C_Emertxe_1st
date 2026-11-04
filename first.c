/* #include <stdio.h>

int main(){
    printf("Hello World\n");
    return 0;
} */
#include <stdio.h>
int main(){
    /* int totalDigit = 0, num;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num != 0){
        num /= 10;
        totalDigit++;
    }
    printf("Total Digits %d\n", totalDigit);
    printf("Total Digits %d\n", 12/10); */
    // int num = 0x1563;
    // printf("%d\n", num);
    // printf("%#o\n", num);
    // printf("%#x\n", num);
    // printf("%c\n", num);

    double n[2] = {4.0,2.0};
    printf("%x\n", &n[0] - &n[1]);

}