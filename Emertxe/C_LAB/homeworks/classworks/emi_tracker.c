#include <stdio.h>
int main()
{

    int loan, emi, month = 1;
    printf("Enter Loan amount & EMI: ");
    if(scanf("%d%d", &loan, &emi) != 2 || loan < 1 || emi < 1 || emi > loan)
    {
        printf("Invalid input.\n");
        return 1;
    }
    while(loan > 0) 
    {
        if(loan > emi)
        {
            loan -= emi;
        }
        else
        {
            loan = 0;
        }
        printf("Month %d: Remaining Loan : %d\n", month, loan);
        month++;
    }
    printf("Loan fully paid!\n");
    return 0;
}