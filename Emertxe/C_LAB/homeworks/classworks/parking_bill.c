#include <stdio.h>
int main()
{
    int hrs, price;
    printf("Enter parking hours: ");
    if (scanf("%d", &hrs) != 1 || hrs < 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (hrs <= 2)
    {
        price = 30 * hrs;
    }
    else if (hrs <= 5)
    {
        price = (30 * 2) + (20 * (hrs - 2));
    }
    else
    {
        price = (30 * 2) + (20 * 3) + (10 * (hrs - 5));
    }

    printf("Total parking fee: %d\n", price);
    return 0;
}