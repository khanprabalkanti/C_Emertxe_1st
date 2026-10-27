/*
Description: Mini Project, Cafe menu.
Date and Day: 20-10-2026, Tuesday
Sample I/P:
Sample O/P:
 */
#include <stdio.h>
int main()
{
    char meal_option;
    int item_option;
    printf(" -----------------------------------------------------------------\n");
    printf("<==================== Welcome to Emertxe Cafe ====================>\n");
    printf(" -----------------------------------------------------------------\n");
    printf(" A.Beverages          B.Breakfast            C.Lunch\n");
    printf(" -----------          -----------            -------\n");
    printf(" 1.Milk Tea           1.Idli Vada            1.Chicken Biryani\n");
    printf(" 2.Masala Tea         2.Masala Dosa          2.Mutton Biryani\n");
    printf(" 3.Black Tea          3.Aloo Paratha         3.Veg Thali\n");
    printf(" 4.Lemon Tea          4.Poha                 4.Rajma Chawal\n");
    printf(" 5.Filter Coffee      5.Upma                 5.Paneer & Naan\n");
    printf(" 6.Black Coffee       6.Bread Omelette       6.Fried Rice\n");
    printf(" 7.Cold Coffee        7.Chole Kulche         7.Curd Rice\n");
    printf(" 8.Lassi              8.Kachori Sabzi        8.Chicken Curry\n");
    printf(" -----------------------------------------------------------------\n");
    printf(" D.Snacks             E.Dinner               F.Desserts\n");
    printf(" --------             --------               ----------\n");
    printf(" 1.Samosa             1.Roti & Tadka         1.Gulab Jamun\n");
    printf(" 2.Veg Puff           2.Paratha              2.Rasgulla\n");
    printf(" 3.Maggie             3.Veg Fried Rice       3.Rasmalai\n");
    printf(" 4.Pakora             4.Manchuria            4.Gajar Ka Halwa\n");
    printf(" 5.French Fries       5.Chicken Roll         5.Kheer\n");
    printf(" 6.Veg Cutlet         6.Masala Khichdi       6.Kulfi\n");
    printf(" 7.Chicken Cutlet     7.Butter Chicken       7.Vanilla Ice Cream\n");
    printf(" 8.Spring Roll        8.Chole Bhature        8.Choco Lava Cake\n");
    printf(" -----------------------------------------------------------------\n");
    printf("Enter your option: \n");
    printf("------------------\n");
    printf("\tA. Beverages\n");
    printf("\tB. Breakfast\n");
    printf("\tC. Lunch\n");
    printf("\tD. Snacs\n");
    printf("\tE. Dinner\n");
    printf("\tF. Desserts\n");
    printf("------------------\n");
    printf("Your Option: ");
    scanf("%c", &meal_option);
    printf("------------------\n");
    
do
{
    switch (meal_option)
    {
    case 'A':
    case 'a':
        printf(" -----------------------------------------------------------------\n");
        printf("<==================== Welcome to Emertxe Cafe ====================>\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tA.Beverages\t\t\tPrice(Rs.)\n");
        printf("\t-----------\t\t\t----------\n");
        printf("\t1.Milk Tea   \t\t\t20/- + GST\n");
        printf("\t2.Masala Tea \t\t\t25/- + GST\n");
        printf("\t3.Black Tea  \t\t\t15/- + GST\n");
        printf("\t4.Lemon Tea  \t\t\t15/- + GST\n");
        printf("\t5.Filter Coffee\t\t\t40/- + GST\n");
        printf("\t6.Black Coffee\t\t\t35/- + GST\n");
        printf("\t7.Cold Coffee\t\t\t40/- + GST\n");
        printf("\t8.Lassi      \t\t\t30/- + GST\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\t9.Back to the Main Menu\n");
        printf("\t10.Exit. Don't Order.\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tAdd Item: ");
        scanf("%d", &item_option);
        printf(" -----------------------------------------------------------------\n");
        if(item_option == 9)
            break;
        switch (item_option)
        {
        case 1:
            printf("\t'Milk Tea' - added to your cart.\n");
            break;
        case 2:
            printf("\t'Masala Tea' - added to your cart.\n");
            break;
        case 3:
            printf("\t'Black Tea' - added to your cart.\n");
            break;
        case 4:
            printf("\t'Lemon Tea' - added to your cart.\n");
            break;
        case 5:
            printf("\t'Filter Coffee' - added to your cart.\n");
            break;
        case 6:
            printf("\t'Black Coffee' - added to your cart.\n");
            break;
        case 7:
            printf("\t'Cold Coffee' - added to your cart.\n");
            break;
        case 8:
            printf("\t'Lassi' - added to your cart.\n");
            break;
        case 9:
            printf("\tBack to the Main Menu.\n");
            break;
        case 10:
            printf("\tExit.\n");
            break;
        default:
            break;
        }
        break;
    case 'B':
    case 'b':
        printf(" -----------------------------------------------------------------\n");
        printf("<==================== Welcome to Emertxe Cafe ====================>\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tB.Breakfast  \t\t\tPrice(Rs.)\n");
        printf("\t-----------  \t\t\t----------\n");
        printf("\t1.Idli Vada   \t\t\t70/- + GST\n");
        printf("\t2.Masala Dosa \t\t\t80/- + GST\n");
        printf("\t3.Aloo Paratha \t\t\t30/- + GST\n");
        printf("\t4.Poha  \t\t\t50/- + GST\n");
        printf("\t5.Upma Coffee\t\t\t50/- + GST\n");
        printf("\t6.Bread Omelette\t\t25/- + GST\n");
        printf("\t7.Chole Kulche\t\t\t40/- + GST\n");
        printf("\t8.Kachori Sabzi\t\t\t40/- + GST\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\t9.Back to the Main Menu\n");
        printf("\t10.Exit. Don't Order.\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tAdd Item: ");
        scanf("%d", &item_option);
        printf(" -----------------------------------------------------------------\n");
        break;
    case 'C':
    case 'c':
        printf(" -----------------------------------------------------------------\n");
        printf("<==================== Welcome to Emertxe Cafe ====================>\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tC.Lunch\t\t\tPrice(Rs.)\n");
        printf("\t-------\t\t\t----------\n");
        printf("\t1.Chicken Biryani\t\t150/- + GST\n");
        printf("\t2.Mutton Biryani\t\t180/- + GST\n");
        printf("\t3.Veg Thali  \t\t\t170/- + GST\n");
        printf("\t4.Rajma Chawal\t\t\t80/- + GST\n");
        printf("\t5.Paneer & Naan\t\t\t120/- + GST\n");
        printf("\t6.Fried Rice\t\t\t135/- + GST\n");
        printf("\t7.Curd Rice\t\t\t60/- + GST\n");
        printf("\t8.Chicken Curry\t\t\t120/- + GST\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\t9.Back to the Main Menu\n");
        printf("\t10.Exit. Don't Order.\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tAdd Item: ");
        scanf("%d", &item_option);
        printf(" -----------------------------------------------------------------\n");
        break;
    case 'D':
    case 'd':
        printf(" -----------------------------------------------------------------\n");
        printf("<==================== Welcome to Emertxe Cafe ====================>\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tD.Snacks\t\t\tPrice(Rs.)\n");
        printf("\t--------\t\t\t----------\n");
        printf("\t1.Samosa\t\t\t20/- + GST\n");
        printf("\t2.Veg Puff\t\t\t25/- + GST\n");
        printf("\t3.Maggie\t\t\t35/- + GST\n");
        printf("\t4.Pakora\t\t\t15/- + GST\n");
        printf("\t5.French Fries\t\t\t40/- + GST\n");
        printf("\t6.Veg Cutlet\t\t\t35/- + GST\n");
        printf("\t7.Chicken Cutlet\t\t50/- + GST\n");
        printf("\t8.Spring Roll\t\t\t60/- + GST\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\t9.Back to the Main Menu\n");
        printf("\t10.Exit. Don't Order.\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tAdd Item: ");
        scanf("%d", &item_option);
        printf(" -----------------------------------------------------------------\n");
        break;
    case 'E':
    case 'e':
        printf(" -----------------------------------------------------------------\n");
        printf("<==================== Welcome to Emertxe Cafe ====================>\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tE.Dinner\t\t\tPrice(Rs.)\n");
        printf("\t--------\t\t\t----------\n");
        printf("\t1.Roti & Tadka\t\t\t130/- + GST\n");
        printf("\t2.Paratha \t\t\t25/- + GST\n");
        printf("\t3.Veg Fried Rice\t\t75/- + GST\n");
        printf("\t4.Manchuria\t\t\t55/- + GST\n");
        printf("\t5.Chicken Roll\t\t\t80/- + GST\n");
        printf("\t6.Masala Khichdi\t\t\t75/- + GST\n");
        printf("\t7.Butter Chicken\t\t150/- + GST\n");
        printf("\t8.Chole Bhature\t\t\t70/- + GST\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\t9.Back to the Main Menu\n");
        printf("\t10.Exit. Don't Order.\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tAdd Item: ");
        scanf("%d", &item_option);
        printf(" -----------------------------------------------------------------\n");
        break;
    case 'F':
    case 'f':
        printf(" -----------------------------------------------------------------\n");
        printf("<==================== Welcome to Emertxe Cafe ====================>\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tF.Dessets\t\t\tPrice(Rs.)\n");
        printf("\t---------\t\t\t----------\n");
        printf("\t1.Gulab Jamun\t\t\t20/- + GST\n");
        printf("\t2.Rasgulla\t\t\t15/- + GST\n");
        printf("\t3.Rasmalai\t\t\t35/- + GST\n");
        printf("\t4.Gajar Ka Halwa\t\t35/- + GST\n");
        printf("\t5.Kheer \t\t\t40/- + GST\n");
        printf("\t6.Kulfi \t\t\t35/- + GST\n");
        printf("\t7.Vanilla Ice Cream\t\t40/- + GST\n");
        printf("\t8.Choco Lava Cake\t\t50/- + GST\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\t9.Back to the Main Menu\n");
        printf("\t10.Exit. Don't Order.\n");
        printf(" -----------------------------------------------------------------\n");
        printf("\tAdd Item: ");
        scanf("%d", &item_option);
        printf(" -----------------------------------------------------------------\n");
        break;
    }
}while(item_option >= 1 && item_option <= 10);
    
    return 0;
}