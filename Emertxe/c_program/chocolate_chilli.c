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
        if (player1 < 1 && player1 > 4)
        {
            printf("Wrong Pick! Try again!\n");
            return 1;
        }
        choco -= player1;
        printf("Remaining Chocolates = %d\n", choco);
        printf("Player 2 turn: \n");
        printf("Pick chocolates (1 to 3): ");
        scanf("%d", &player2);
        if (player2 >= 1 && player2 <= 3)
        {
            printf("Wrong Pick! Try again!\n");
            return 1;
        }
        choco -= player2;
    }
    return 0;
}