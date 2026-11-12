#include <stdio.h>
int main()
{
    float balance = 5000, amount;
    int option;
    do
    {
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw\n4. Exit\n");
        printf("----------------\n");
        printf("Enter Option: ");
        if (scanf("%d", &option) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
        printf("----------------\n");
        switch (option)
        {
            case 1:
                printf("Balance: %.2f\n", balance);
                break;
            case 2:
                printf("Enter Amount: ");
                if (scanf("%f", &amount) != 1 || amount < 1)
                {
                    printf("Invalid input\n");
                    return 1;
                }
                balance += amount;
                break;
            case 3:
                printf("Enter Amount: ");
                if (scanf("%f", &amount) != 1 || amount < 1 || amount > balance)
                {
                    printf("Invalid input\n");
                    return 1;
                }
                balance -= amount;
                break;
            case 4: 
                printf("Exit!\n");
                default:
                break;
        }
        printf("----------------\n");
    } while (option != 4);
    return 0;
}