#include <stdio.h>
int main()
{
    float amount, discount = 0.0, payable;
    printf("Enter amount: ");
    if (scanf("%f", &amount) != 1 || amount < 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if(amount >= 10000)
    {
        discount = amount * (20.0f / 100);
    }
    else if (amount >= 5000)
    {
        discount = amount * (10.0f / 100);
    }
    else if (amount >= 1000)
    {
        discount = amount * (5.0f / 100);
    }
    payable = amount - discount;
    printf("Discount : Rs. %.2f\nFinal Amount : Rs. %.2f\n", discount, payable);
    return 0;
}