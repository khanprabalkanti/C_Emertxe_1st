/*
Name - Prabal kanti khan
Description: Mini Game, Chocolate chili game.
Date and Day: 31-10-2026, Saturday
Sample I/P:
Sample O/P:
 */
#include <stdio.h>
int main()
{
    int player = 1, choco = 13, pick;
    while (choco > 0)
    {
        printf("Chocolates remaining = %d\n", choco);
        printf("Player %d turn\n", player);
        printf("Pick chocolates (1 to 3) = ");
        scanf("%d", &pick);

        if(pick < 1 || pick > 3 || pick > choco)
        {
            printf("Invalid Input!\n");
            return 1;
        }
        choco -= pick;
        if(choco == 0)
        {
            printf("Only Chilly remains!\n");
            player = player == 1 ? 2 : 1;
            printf("Player %d gets chilly!\n", player);
            printf("Player %d LOST!\n", player);
            player = player == 2 ? 1 : 2;
            printf("Player %d WON!\n", player);
        }

        player = player == 1 ? 2 : 1;
    }
    return 0;
}