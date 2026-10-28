/*
Description: Mini Project2, Cafe menu.
Date and Day: 27-10-2026, Tuesday
Sample I/P:
Sample O/P:
 */
#include <stdio.h>
int main()
{
    int option;
    float grand_total = 0.0;
    int pizza = 0, biryani = 0, pasta = 0, coffee = 0, milk_tea = 0, black_tea = 0;
    printf("---------------------------------------------\n");
    printf("<----------Welcome to Emertxe Caffe--------->\n");
    printf("---------------------------------------------\n");
    do
    {
        printf("\t1.Pizza\t\tRs. 99/-\n\t2.Biryani\tRs. 149/-\n\t3.Pasta\t\tRs. 79/-\n\t4.Coffee\tRs. 49/-\n\t5.Milk Tea\tRs. 29/-\n\t6.Black Tea\tRs. 19/-\n");
        printf("---------------------------------------------\n");
        printf("\t7.Exit & Order\n");
        printf("---------------------------------------------\n");
        printf("\tEnter your option: ");
        scanf("%d", &option);
        printf("---------------------------------------------\n");
        switch (option)
        {
        case 1:
            printf("\tPizza");
            pizza++;
            break;
        case 2:
            printf("\tBiryani");
            biryani++;
            break;
        case 3:
            printf("\tPasta");
            pasta++;
            break;
        case 4:
            printf("\tCoffee");
            coffee++;
            break;
        case 5:
            printf("\tMilk Tea");
            milk_tea++;
            break;
        case 6:
            printf("\tBlack Tea");
            black_tea++;
            break;
        case 7:
            printf("---------------------------------------------\n");
            printf("\tOrders\t\tPrice(Rs.)\n");
            printf("---------------------------------------------\n");
            if (pizza > 0)
            {
                printf("\t%d X Pizza\t%d/-\n", pizza, pizza * 99);
                grand_total += pizza * 99;
            }
            if (biryani > 0)
            {
                printf("\t%d X Biryani\t%d/-\n", biryani, biryani * 149);
                grand_total += biryani * 149;
            }
            if (pasta > 0)
            {
                printf("\t%d X Pasta\t%d/-\n", pasta, pasta * 79);
                grand_total += pasta * 79;
            }
            if (coffee > 0)
            {
                printf("\t%d X Coffee\t%d/-\n", coffee, coffee * 49);
                grand_total += coffee * 49;
            }
            if (milk_tea > 0)
            {
                printf("\t%d X Milk Tea\t%d/-\n", milk_tea, milk_tea * 29);
                grand_total += milk_tea * 29;
            }
            if (black_tea > 0)
            {
                printf("\t%d X Black Tea\t%d/-\n", black_tea, black_tea * 19);
                grand_total += black_tea * 19;
            }
            printf("---------------------------------------------\n");
            printf("\tAmount\t\t%.2f\n", grand_total);
            printf("\tGST\t\t%g\n", grand_total * 18 / 100);
            printf("---------------------------------------------\n");
            float total = grand_total + (grand_total * 18 / 100);
            printf("\tTotal\t\t%.2f\n", total);
            break;

        default:
            printf("Sorry! No option available\n");
            break;
        }
        if (option >= 1 && option <= 6)
        {
            printf(" - added to your cart\n");
        }
        printf("---------------------------------------------\n");
    } while (option >= 1 && option <= 6);
    return 0;
}

