#include<stdio.h>
int main()
{
    int n, choice;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Invalid Input! Enter a natural number.\n");
        return 1;
    }
    printf("Menu Choice (1 - 3):\n");
    printf("-------------------\n");
    printf("\t1. Square\n\t2. Cube\n\t3. Reciprocal\nEnter Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Square of %d = %d\n", n, n*n);
        break;
    case 2:
        printf("Cube of %d = %d\n", n, n*n*n);
        break;
    case 3:
        printf("Reciprocal of %d = %g\n", n, (float)1/n);
        break;
    
    default:
    printf("Invalid Choice!\n");
        break;
    }

    return 0;
}