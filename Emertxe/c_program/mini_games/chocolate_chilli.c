#include <stdio.h>
int main()
{
    int player1, player2, choco = 13;
    while (choco > 0)
    {
        printf("Remaining Chocolates = %d\n", choco);
        printf("Player 1 turn: \n");
        printf("Pick chocolates (1 to 3): ");
        scanf("%d", &player1);
        if (player1 < 1 || player1 > 3)
        {
            printf("Wrong Pick! Try again!\n");
            return 1;
        }
        choco -= player1;
        if (choco == 0)
        {
            printf("Player 1 picked the last chocolate!\n");
            printf("Player 1 LOST!\n");
            printf("Player 2 WON!\n");
            break;
        }
        printf("Remaining Chocolates = %d\n", choco);
        printf("Player 2 turn: \n");
        printf("Pick chocolates (1 to 3): ");
        scanf("%d", &player2);
        if (player2 < 1 || player2 > 3)
        {
            printf("Wrong Pick! Try again!\n");
            return 1;
        }
        choco -= player2;
        if (choco == 0)
        {
            printf("Player 2 picked the last chocolate!\n");
            printf("Player 2 LOST!\n");
            printf("Player 1 WON!\n");
            break;
        }
    }
    return 0;
}