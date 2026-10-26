/* Keep taking numbers as input from user until user enters an odd number. */
#include<stdio.h>
int main()
{
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n%2)
        {
            break;
        }
    }while(1);
    printf("You entered an odd number.\nThank you!\n");
    return 0;
}