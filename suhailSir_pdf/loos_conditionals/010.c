/* 10. WAP to implement a basic calculator(switch case).  */
#include <stdio.h>
int main()
{
    char opt;
    int n1, n2;
    float res;
    /* printf("Enter n1 & n2: ");
    if(scanf("%d%d", &n1, &n2) != 2)
    {
        printf("Invalid input\n");
        return 1;
    } */
    printf("Enter operation: ");
    scanf("%d%c%d", &n1, &opt, &n2);
    switch(opt)
    {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = (float)n1 / n2;
            break;
        default:
            printf("Invalid operator");
    }
    printf("Result = %g\n", res);
    return 0;
}