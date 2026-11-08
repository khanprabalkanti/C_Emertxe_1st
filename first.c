/* #include <stdio.h>

int main(){
    printf("Hello World\n");
    return 0;
} */
#include <stdio.h>
int main()
{
    float num1, num2;
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

    printf("scanf returned: %f\n", scanf("%f%f", &num1, &num2));
    int result = printf("\t");
    printf("printf returned: %d\n", result);
}