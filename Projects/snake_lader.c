/*Snakes and Ladders is a most played board (10x10) game where
players roll a dice to move along a numbered grid. The goal is
to reach the last square first. If a player lands on a ladder,
they move ahead, but if they land on a snake, they slide back.
So, as the game is quite easy to understand we can easily code
them using C language to create a Snake and Ladder Project.

The functionality of the code will be as follows:
Only two players play this game and take turns making moves alternately.
Random values can be generated using a dice to increase or decrease the value.
Points will be maintained using variables.
The game will end after any player attains 100 points.*/


#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice();
int movePlayer(int position);

int main()
{
    int player1 = 0, player2 = 0;
    int currentPlayer = 1;
    int dice;

    srand(time(0));

    printf("------ SNAKE AND LADDER GAME ------\n");

    while(player1 < 100 && player2 < 100)
    {
        printf("\nPlayer %d, Press Enter to Roll Dice...", currentPlayer);
        getchar();

        dice = rollDice();

        printf("Dice = %d\n", dice);

        if(currentPlayer == 1)
        {
            player1 = player1 + dice;

            if(player1 <= 100)
            {
                player1 = movePlayer(player1);
            }
            else
            {
                player1 = player1 - dice;
            }

            printf("Player 1 Position = %d\n", player1);

            if(player1 == 100)
            {
                printf("\nPlayer 1 Wins!\n");
                break;
            }

            currentPlayer = 2;
        }
        else
        {
            player2 = player2 + dice;

            if(player2 <= 100)
            {
                player2 = movePlayer(player2);
            }
            else
            {
                player2 = player2 - dice;
            }

            printf("Player 2 Position = %d\n", player2);

            if(player2 == 100)
            {
                printf("\nPlayer 2 Wins!\n");
                break;
            }

            currentPlayer = 1;
        }
    }

    return 0;
}

int rollDice()
{
    return (rand() % 6) + 1;
}

int movePlayer(int position)
{
    switch(position)
    {

        case 4:
            printf("Ladder! Move to 25\n");
            position = 25;
            break;

        case 13:
            printf("Ladder! Move to 46\n");
            position = 46;
            break;

        case 33:
            printf("Ladder! Move to 49\n");
            position = 49;
            break;

        case 50:
            printf("Ladder! Move to 69\n");
            position = 69;
            break;

        /* Snakes */

        case 40:
            printf("Snake! Move to 20\n");
            position = 20;
            break;

        case 63:
            printf("Snake! Move to 45\n");
            position = 45;
            break;

        case 83:
            printf("Snake! Move to 57\n");
            position = 57;
            break;

        case 99:
            printf("Snake! Move to 60\n");
            position = 60;
            break;

        default:
            break;
    }

    return position;
}


