/*
Name - Prabal kanti khan
Description: Mini Project, Cafe menu.
Date and Day: 20-10-2026, Tuesday
Sample I/P:
Sample O/P:
 */
#include <stdio.h>
int main()
{
    float total = 0.0;
    int milk_tea = 0, masala_tea = 0, black_tea = 0, lemon_tea = 0, filter_coffe = 0, black_coffe = 0, cold_coffe = 0, lassi = 0, idli = 0, dosa = 0, aloo_paratha = 0, poha = 0, upma = 0, bread_omlette = 0, chole_kulche = 0, kachori_sabzi = 0, chicken_biryani = 0, mutton_biryani = 0, veg_thali = 0, rajma_chawal = 0, paneer_naan = 0, fried_rice = 0, curd_rice = 0, chicken_curry = 0, samosa = 0, veg_puff = 0, maggie = 0, pakora = 0, french_fries = 0, veg_cutlet = 0, chicken_cutlet = 0, spring_roll = 0, roti_tadka = 0, paratha = 0, veg_fried_rice = 0, manchurian = 0, chicken_roll = 0, mashala_khichri = 0, butter_chicken = 0, chole_bhature = 0, gulab_jamun = 0, rasgulla = 0, rasmalai = 0, gajar_halwa = 0, kheer = 0, kulfi = 0, vanilla_icecream = 0, choco_cake = 0;

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
    printf(" 4.Pakora             4.Manchurian           4.Gajar Ka Halwa\n");
    printf(" 5.French Fries       5.Chicken Roll         5.Kheer\n");
    printf(" 6.Veg Cutlet         6.Masala Khichdi       6.Kulfi\n");
    printf(" 7.Chicken Cutlet     7.Butter Chicken       7.Vanilla Ice Cream\n");
    printf(" 8.Spring Roll        8.Chole Bhature        8.Choco Lava Cake\n");
    printf(" -----------------------------------------------------------------\n");
    do
    {
        printf("------------------\n");
        printf("Enter your option: \n");
        printf("------------------\n");
        printf("\tA. Beverages\n");
        printf("\tB. Breakfast\n");
        printf("\tC. Lunch\n");
        printf("\tD. Snacs\n");
        printf("\tE. Dinner\n");
        printf("\tF. Desserts\n");
        printf("------------------\n");
        printf("\tG. Make Order\n");
        printf("\tX. Exit\n");
        a://goto label
        printf("------------------\n");
        printf("Your Option: ");
        scanf(" %c", &meal_option); //***without space, it is not working.
        printf("------------------\n");

        switch (meal_option)
        {
        case 'A':
        case 'a':
            printf(" -----------------------------------------------------------------\n");
            printf("<==================== Welcome to Emertxe Cafe ====================>\n");
            printf(" -----------------------------------------------------------------\n");
            do
            {
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
                printf("\t9.Back to the Main Menu to Order\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\tSelect Option: ");
                scanf("%d", &item_option);
                printf(" -----------------------------------------------------------------\n");
                switch (item_option)
                {
                case 1:
                    printf("\t'Milk Tea'");
                    milk_tea++;
                    break;
                case 2:
                    printf("\t'Masala Tea'");
                    masala_tea++;
                    break;
                case 3:
                    printf("\t'Black Tea'");
                    black_tea++;
                    break;
                case 4:
                    printf("\t'Lemon Tea'");
                    lemon_tea++;
                    break;
                case 5:
                    printf("\t'Filter Coffee'");
                    filter_coffe++;
                    break;
                case 6:
                    printf("\t'Black Coffee'");
                    black_coffe++;
                    break;
                case 7:
                    printf("\t'Cold Coffee'");
                    cold_coffe++;
                    break;
                case 8:
                    printf("\t'Lassi'");
                    lassi++;
                    break;
                default:
                    printf("\tMain Menu\n");
                    break;
                }
                if (item_option >= 1 && item_option <= 8)
                {
                    printf(" - added to your cart.\n");
                }
                printf(" -----------------------------------------------------------------\n");
            } while (item_option >= 1 && item_option <= 8);

            break;
        case 'B':
        case 'b':
            printf(" -----------------------------------------------------------------\n");
            printf("<==================== Welcome to Emertxe Cafe ====================>\n");
            printf(" -----------------------------------------------------------------\n");
            do
            {
                printf("\tB.Breakfast  \t\t\tPrice(Rs.)\n");
                printf("\t-----------  \t\t\t----------\n");
                printf("\t1.Idli Vada   \t\t\t70/- + GST\n");
                printf("\t2.Masala Dosa \t\t\t80/- + GST\n");
                printf("\t3.Aloo Paratha \t\t\t30/- + GST\n");
                printf("\t4.Poha  \t\t\t50/- + GST\n");
                printf("\t5.Upma\t\t\t\t50/- + GST\n");
                printf("\t6.Bread Omelette\t\t25/- + GST\n");
                printf("\t7.Chole Kulche\t\t\t40/- + GST\n");
                printf("\t8.Kachori Sabzi\t\t\t40/- + GST\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\t9.Back to the Main Menu to Order\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\tAdd Item: ");
                scanf("%d", &item_option);
                printf(" -----------------------------------------------------------------\n");
                switch (item_option)
                {
                case 1:
                    printf("\t'Idli Vada'");
                    idli++;
                    break;
                case 2:
                    printf("\t'Masala Dosa'");
                    dosa++;
                    break;
                case 3:
                    printf("\t'Aloo Paratha'");
                    aloo_paratha++;
                    break;
                case 4:
                    printf("\t'Poha'");
                    poha++;
                    break;
                case 5:
                    printf("\t'Upma'");
                    upma++;
                    break;
                case 6:
                    printf("\t'Bread Omelette'");
                    bread_omlette++;
                    break;
                case 7:
                    printf("\t'Chole Kulche'");
                    chole_kulche++;
                    break;
                case 8:
                    printf("\t'Kachori Sabzi'");
                    kachori_sabzi++;
                    break;
                default:
                    printf("\tMain Menu\n");
                    break;
                }
                if (item_option >= 1 && item_option <= 8)
                {
                    printf(" - added to your cart.\n");
                }
                printf(" -----------------------------------------------------------------\n");
            } while (item_option >= 1 && item_option <= 8);
            break;
        case 'C':
        case 'c':
            printf(" -----------------------------------------------------------------\n");
            printf("<==================== Welcome to Emertxe Cafe ====================>\n");
            printf(" -----------------------------------------------------------------\n");
            do
            {
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
                printf("\t9.Back to the Main Menu to Order\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\tAdd Item: ");
                scanf("%d", &item_option);
                printf(" -----------------------------------------------------------------\n");
                switch (item_option)
                {
                case 1:
                    printf("\t'Chicken Biryani'");
                    chicken_biryani++;
                    break;
                case 2:
                    printf("\t'Mutton Biryani'");
                    mutton_biryani++;
                    break;
                case 3:
                    printf("\t'Veg Thali'");
                    veg_thali++;
                    break;
                case 4:
                    printf("\t'Rajma Chawal'");
                    rajma_chawal++;
                    break;
                case 5:
                    printf("\t'Paneer & Naan'");
                    paneer_naan++;
                    break;
                case 6:
                    printf("\t'Fried Rice'");
                    fried_rice++;
                    break;
                case 7:
                    printf("\t'Curd Rice'");
                    cold_coffe++;
                    break;
                case 8:
                    printf("\t'Chicken Curry'");
                    chicken_curry++;
                    break;
                default:
                    printf("\tMain Menu\n");
                    break;
                }
                if (item_option >= 1 && item_option <= 8)
                {
                    printf(" - added to your cart.\n");
                }
                printf(" -----------------------------------------------------------------\n");
            } while (item_option >= 1 && item_option <= 8);
            break;
        case 'D':
        case 'd':
            printf(" -----------------------------------------------------------------\n");
            printf("<==================== Welcome to Emertxe Cafe ====================>\n");
            printf(" -----------------------------------------------------------------\n");
            do
            {
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
                printf("\t9.Back to the Main Menu to Order\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\tAdd Item: ");
                scanf("%d", &item_option);
                printf(" -----------------------------------------------------------------\n");
                switch (item_option)
                {
                case 1:
                    printf("\t'Samosa'");
                    samosa++;
                    break;
                case 2:
                    printf("\t'Veg Puff'");
                    veg_puff++;
                    break;
                case 3:
                    printf("\t'Maggie'");
                    maggie++;
                    break;
                case 4:
                    printf("\t'Pakora'");
                    pakora++;
                    break;
                case 5:
                    printf("\t'French Fries'");
                    french_fries++;
                    break;
                case 6:
                    printf("\t'Veg Cutlet'");
                    veg_cutlet++;
                    break;
                case 7:
                    printf("\t'Chicken Cutlet'");
                    chicken_cutlet++;
                    break;
                case 8:
                    printf("\t'Spring Roll'");
                    spring_roll++;
                    break;
                default:
                    printf("\tMain Menu\n");
                    break;
                }
                if (item_option >= 1 && item_option <= 8)
                {
                    printf(" - added to your cart.\n");
                }
                printf(" -----------------------------------------------------------------\n");
            } while (item_option >= 1 && item_option <= 8);
            break;
        case 'E':
        case 'e':
            printf(" -----------------------------------------------------------------\n");
            printf("<==================== Welcome to Emertxe Cafe ====================>\n");
            printf(" -----------------------------------------------------------------\n");
            do
            {
                printf("\tE.Dinner\t\t\tPrice(Rs.)\n");
                printf("\t--------\t\t\t----------\n");
                printf("\t1.Roti & Tadka\t\t\t130/- + GST\n");
                printf("\t2.Paratha \t\t\t25/- + GST\n");
                printf("\t3.Veg Fried Rice\t\t75/- + GST\n");
                printf("\t4.Manchurian\t\t\t55/- + GST\n");
                printf("\t5.Chicken Roll\t\t\t80/- + GST\n");
                printf("\t6.Masala Khichdi\t\t75/- + GST\n");
                printf("\t7.Butter Chicken\t\t150/- + GST\n");
                printf("\t8.Chole Bhature\t\t\t70/- + GST\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\t9.Back to the Main Menu to Order\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\tAdd Item: ");
                scanf("%d", &item_option);
                printf(" -----------------------------------------------------------------\n");
                switch (item_option)
                {
                case 1:
                    printf("\t'Roti & Tadka'");
                    roti_tadka++;
                    break;
                case 2:
                    printf("\t'Paratha'");
                    paratha++;
                    break;
                case 3:
                    printf("\t'Veg Fried Rice'");
                    veg_fried_rice++;
                    break;
                case 4:
                    printf("\t'Manchurian'");
                    manchurian++;
                    break;
                case 5:
                    printf("\t'Chicken Roll'");
                    chicken_roll++;
                    break;
                case 6:
                    printf("\t'Masala Khichdi'");
                    mashala_khichri++;
                    break;
                case 7:
                    printf("\t'Butter Chicken'");
                    butter_chicken++;
                    break;
                case 8:
                    printf("\t'Chole Bhature'");
                    chole_bhature++;
                    break;
                default:
                    printf("\tMain Menu\n");
                    break;
                }
                if (item_option >= 1 && item_option <= 8)
                {
                    printf(" - added to your cart.\n");
                }
                printf(" -----------------------------------------------------------------\n");
            } while (item_option >= 1 && item_option <= 8);
            break;
        case 'F':
        case 'f':
            printf(" -----------------------------------------------------------------\n");
            printf("<==================== Welcome to Emertxe Cafe ====================>\n");
            printf(" -----------------------------------------------------------------\n");
            do
            {
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
                printf("\t9.Back to the Main Menu to Order\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\tAdd Item: ");
                scanf("%d", &item_option);
                printf(" -----------------------------------------------------------------\n");
                switch (item_option)
                {
                case 1:
                    printf("\t'Gulab Jamun'");
                    gulab_jamun++;
                    break;
                case 2:
                    printf("\t'Rasgulla'");
                    rasgulla++;
                    break;
                case 3:
                    printf("\t'Rasmalai'");
                    rasmalai++;
                    break;
                case 4:
                    printf("\t'Gajar Ka Halwa'");
                    gajar_halwa++;
                    break;
                case 5:
                    printf("\t'Kheer'");
                    kheer++;
                    break;
                case 6:
                    printf("\t'Kulfi'");
                    kulfi++;
                    break;
                case 7:
                    printf("\t'Vanilla Ice Cream'");
                    vanilla_icecream++;
                    break;
                case 8:
                    printf("\t'Choco Lava Cake'");
                    choco_cake++;
                    break;
                default:
                    printf("\tMain Menu\n");
                    break;
                }
                if (item_option >= 1 && item_option <= 8)
                {
                    printf(" - added to your cart.\n");
                }
                printf(" -----------------------------------------------------------------\n");
            } while (item_option >= 1 && item_option <= 8);
            break;
        case 'G':
        case 'g':
            total += milk_tea * 20;
            total += masala_tea * 25;
            total += black_tea * 15;
            total += lemon_tea * 15;
            total += filter_coffe * 40;
            total += black_coffe * 35;
            total += cold_coffe * 40;
            total += lassi * 30;
            total += idli * 70;
            total += dosa * 70;
            total += aloo_paratha * 30;
            total += poha * 50;
            total += upma * 50;
            total += bread_omlette * 25;
            total += chole_kulche * 40;
            total += kachori_sabzi * 40;
            total += chicken_biryani * 150;
            total += mutton_biryani * 180;
            total += veg_thali * 170;
            total += rajma_chawal * 80;
            total += paneer_naan * 120;
            total += fried_rice * 135;
            total += curd_rice * 60;
            total += chicken_curry * 120;
            total += samosa * 20;
            total += veg_puff * 25;
            total += maggie * 35;
            total += pakora * 15;
            total += french_fries * 40;
            total += veg_cutlet * 35;
            total += roti_tadka * 130;
            total += paratha * 25;
            total += veg_fried_rice * 75;
            total += manchurian * 55;
            total += chicken_roll * 80;
            total += mashala_khichri * 75;
            total += butter_chicken * 150;
            total += chole_bhature * 70;
            total += gulab_jamun * 20;
            total += rasgulla * 15;
            total += rasmalai * 35;
            total += gajar_halwa * 35;
            total += kheer * 40;
            total += kulfi * 35;
            total += vanilla_icecream * 40;
            total += choco_cake * 50;
            if (total)
            {
                printf(" -----------------------------------------------------------------\n");
                printf("\tMake Order\n");
                printf(" -----------------------------------------------------------------\n");
                printf("\tItem Lists\t\tPrice(Rs.)\n");
                printf(" -----------------------------------------------------------------\n");
                if (milk_tea > 0)
                {
                    printf("\t%d X Milk Tea\t\t%d/-\n", milk_tea, milk_tea * 20);
                }
                if (masala_tea > 0)
                {
                    printf("\t%d X Masal Tea\t\t%d/-\n", masala_tea, masala_tea * 25);
                }
                if (black_tea > 0)
                {
                    printf("\t%d X Black Tea\t\t%d/-\n", black_tea, black_tea * 15);
                }
                if (lemon_tea > 0)
                {
                    printf("\t%d X Lemon Tea\t\t%d/-\n", lemon_tea, lemon_tea * 15);
                }
                if (filter_coffe > 0)
                {
                    printf("\t%d X Filter Coffee \t%d/-\n", filter_coffe, filter_coffe * 40);
                }
                if (black_coffe > 0)
                {
                    printf("\t%d X Black Coffe\t\t%d/-\n", black_coffe, black_coffe * 35);
                }
                if (cold_coffe > 0)
                {
                    printf("\t%d X Cold Coffee\t\t%d/-\n", cold_coffe, cold_coffe * 40);
                }
                if (lassi > 0)
                {
                    printf("\t%d X Lassi\t\t%d/-\n", lassi, lassi * 30);
                }
                if (idli > 0)
                {
                    printf("\t%d X Idli Vada\t\t%d/-\n", idli, idli * 70);
                }
                if (dosa > 0)
                {
                    printf("\t%d X Masala Dosa\t\t%d/-\n", dosa, dosa * 80);
                }
                if (aloo_paratha > 0)
                {
                    printf("\t%d X Aloo Paratha\t%d/-\n", aloo_paratha, aloo_paratha * 30);
                }
                if (poha > 0)
                {
                    printf("\t%d X Poha\t\t%d/-\n", poha, poha * 50);
                }
                if (upma > 0)
                {
                    printf("\t%d X Upma\t\t%d/-\n", upma, upma * 50);
                }
                if (bread_omlette > 0)
                {
                    printf("\t%d X Bread Omelette\t%d/-\n", bread_omlette, bread_omlette * 25);
                }
                if (chole_kulche > 0)
                {
                    printf("\t%d X Chole Kulche\t%d/-\n", chole_kulche, chole_kulche * 40);
                }
                if (kachori_sabzi > 0)
                {
                    printf("\t%d X Kachori Sabzi\t%d/-\n", kachori_sabzi, kachori_sabzi * 40);
                }
                if (chicken_biryani > 0)
                {
                    printf("\t%d X Chicken Biryani\t%d/-\n", chicken_biryani, chicken_biryani * 150);
                }
                if (mutton_biryani > 0)
                {
                    printf("\t%d X Mutton Biryani\t%d/-\n", mutton_biryani, mutton_biryani * 180);
                }
                if (veg_thali > 0)
                {
                    printf("\t%d X Veg Thali\t\t%d/-\n", veg_thali, veg_thali * 170);
                }
                if (rajma_chawal > 0)
                {
                    printf("\t%d X Rajma Chawal\t%d/-\n", rajma_chawal, rajma_chawal * 80);
                }
                if (paneer_naan > 0)
                {
                    printf("\t%d X Paneer & Naan\t%d/-\n", paneer_naan, paneer_naan * 120);
                }
                if (fried_rice > 0)
                {
                    printf("\t%d X Fried Rice\t\t%d/-\n", fried_rice, fried_rice * 135);
                }
                if (curd_rice > 0)
                {
                    printf("\t%d X Curd Rice\t\t%d/-\n", curd_rice, curd_rice * 60);
                }
                if (chicken_curry > 0)
                {
                    printf("\t%d X Chicken Curry\t%d/-\n", chicken_curry, chicken_curry * 120);
                }
                if (samosa > 0)
                {
                    printf("\t%d X Samosa\t\t%d/-\n", samosa, samosa * 20);
                }
                if (veg_puff > 0)
                {
                    printf("\t%d X Veg Puff\t\t%d/-\n", veg_puff, veg_puff * 25);
                }
                if (maggie > 0)
                {
                    printf("\t%d X Maggie\t\t%d/-\n", maggie, maggie * 35);
                }
                if (pakora > 0)
                {
                    printf("\t%d X Pakora\t\t%d/-\n", pakora, pakora * 15);
                }
                if (french_fries > 0)
                {
                    printf("\t%d X French Fries\t%d/-\n", french_fries, french_fries * 40);
                }
                if (veg_cutlet > 0)
                {
                    printf("\t%d X Veg Cutlet\t\t%d/-\n", veg_cutlet, veg_cutlet * 35);
                }
                if (chicken_cutlet > 0)
                {
                    printf("\t%d X Chicken Cutlet\t%d/-\n", chicken_cutlet, chicken_cutlet * 50);
                }
                if (spring_roll > 0)
                {
                    printf("\t%d X Spring Roll\t\t%d/-\n", spring_roll, spring_roll * 60);
                }
                if (roti_tadka > 0)
                {
                    printf("\t%d X Roti & Tadka\t%d/-\n", roti_tadka, roti_tadka * 130);
                }
                if (paratha > 0)
                {
                    printf("\t%d X Paratha\t\t%d/-\n", paratha, paratha * 25);
                }
                if (veg_fried_rice > 0)
                {
                    printf("\t%d X Veg Fried Rice\t%d/-\n", veg_fried_rice, veg_fried_rice * 75);
                }
                if (manchurian > 0)
                {
                    printf("\t%d X Manchurian\t\t%d/-\n", manchurian, manchurian * 55);
                }
                if (chicken_roll > 0)
                {
                    printf("\t%d X Chicken Roll\t%d/-\n", chicken_roll, chicken_roll * 80);
                }
                if (mashala_khichri > 0)
                {
                    printf("\t%d X Masala Khichdi\t%d/-\n", mashala_khichri, mashala_khichri * 75);
                }
                if (butter_chicken > 0)
                {
                    printf("\t%d X Butter Chicken\t%d/-\n", butter_chicken, butter_chicken * 150);
                }
                if (chole_bhature > 0)
                {
                    printf("\t%d X Chole Bhature\t%d/-\n", chole_bhature, chole_bhature * 70);
                }
                if (gulab_jamun > 0)
                {
                    printf("\t%d X Gulab Jamun\t\t%d/-\n", gulab_jamun, gulab_jamun * 20);
                }
                if (rasgulla > 0)
                {
                    printf("\t%d X Rasgulla\t\t%d/-\n", rasgulla, rasgulla * 15);
                }
                if (rasmalai > 0)
                {
                    printf("\t%d X Rasmalai\t\t%d/-\n", rasmalai, rasmalai * 35);
                }
                if (gajar_halwa > 0)
                {
                    printf("\t%d X Gajar Ka Halwa\t%d/-\n", gajar_halwa, gajar_halwa * 35);
                }
                if (kheer > 0)
                {
                    printf("\t%d X Kheer\t\t%d/-\n", kheer, kheer * 40);
                }
                if (kulfi > 0)
                {
                    printf("\t%d X Kulfi\t\t%d/-\n", kulfi, kulfi * 35);
                }
                if (vanilla_icecream > 0)
                {
                    printf("\t%d X Vanila Ice Cream\t%d/-\n", vanilla_icecream, vanilla_icecream * 40);
                }
                if (choco_cake > 0)
                {
                    printf("\t%d X Choco Lava Cake\t%d/-\n", choco_cake, choco_cake * 50);
                }
                printf("---------------------------------------------\n");
                printf("\tAmount\t\t\t%.2f\n", total);
                printf("\tGST\t\t\t%g\n", total * 18 / 100);
                printf("---------------------------------------------\n");
                total = total + (total * 18 / 100);
                printf("\tTotal\t\t\t%.2f\n", total);
                printf("---------------------------------------------\n");
            }
            else
            {
                printf(" -----------------------------------------------------------------\n");
                printf("\t Please add atleast one item!\n"); //***(if nothing is in the cart, want to run the loop again to add items.) What will be the logic here?
                printf(" -----------------------------------------------------------------\n");
                goto a; //goto the main menu
            }
            break;
        }
    } while ((meal_option >= 'A' && meal_option <= 'F') || (meal_option >= 'a' && meal_option <= 'f'));

    return 0;
}