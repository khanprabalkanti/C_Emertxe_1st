/* Keep taking numbers as input from user until user enters a number which is multiple of 7. */
#include<stdio.h>
int main()
{
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        if(!(n % 7))
        {
            break;
        }
    }while(1);
    printf("You entered multiple of 7.\nThank you!\n");
    return 0;
}