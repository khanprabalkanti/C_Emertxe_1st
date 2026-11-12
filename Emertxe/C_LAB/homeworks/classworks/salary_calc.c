#include <stdio.h>
int main()
{
    float basic, hra, da, pf, net, gross;
    printf("Enter Basic Salary: ");
    if (scanf("%f", &basic) != 1 || basic < 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    hra = basic * (20.00f / 100);
    da = basic * (10.00f / 100);
    pf = basic * (12.00f / 100);
    gross = basic + hra + da;
    net = gross - pf;
    
    printf("HRA     : %.2f\nDA      : %.2f\nPF       : %.2f\nGross Salary : %.2f\nNet Salary : %.2f\n", hra, da, pf, gross, net);
    return 0;
}