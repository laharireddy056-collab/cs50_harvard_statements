#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIN_POS 50

int main()
{
    int p1 = 0, p2 = 0; 
    int dice, turn = 1; 
    char ch;

    srand(time(0));

    printf("\nSIMPLE LUDO GAME\n");
    printf("\nFirst player to reach %d wins!", WIN_POS);

    while(p1 < WIN_POS && p2 < WIN_POS)
    {
        if(turn == 1)
        {
            printf("\nPlayer 1 Turn. Press ENTER to roll dice");
            getchar();

            dice = rand() % 6 + 1;
            printf("Player 1 rolled: %d\n", dice);

            if(p1 + dice <= WIN_POS)
                p1 =p1+ dice;

            printf("Player 1 Position: %d\n", p1);

            if(p1 >= WIN_POS)
            {
                printf("\n?? Player 1 Wins!\n");
                break;
            }

            turn = 2;
        }
        else
        {
            printf("\nPlayer 2 Turn. Press ENTER to roll dice");
            getchar();

            dice = rand() % 6 + 1;
            printf("Player 2 rolled: %d\n", dice);

            if(p2 + dice <= WIN_POS)
                p2 =p2+ dice;

            printf("Player 2 Position: %d\n", p2);

            if(p2 >= WIN_POS)
            {
                printf("\n?? Player 2 Wins!\n");
                break;
            }

            turn = 1;
        }
    }

    return 0;
}
