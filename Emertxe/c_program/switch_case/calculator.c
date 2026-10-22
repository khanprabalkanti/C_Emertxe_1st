#include <stdio.h>
int main()
{
    int n1, n2;
    char op;
    printf("Enter 1st number, operator, 2nd number: ");
    scanf("%d%c%d", &n1, &op, &n2);
    if (op == '/' && n2 == 0)
    {
        printf("Invalid! use other digit instead 0\n");
        return 1;
    }
    switch (op)
    {
    case '+':
        printf("Addition is %d\n", n1 + n2);
        break;
    case '-':
        printf("Subtraction is %d\n", n1 - n2);
        break;
    case '*':
        printf("Multiplication is %d\n", n1 * n2);
        break;
    case '/':
        /* if (n2 == 0)
        {
            printf("Invalid! use other digit instead 0\n");
            break;
        } */
        printf("Division is %g\n", (float)n1 / n2);
        break;

    default:
        printf("Invalid Input!\n");
        break;
    }
    return 0;
}