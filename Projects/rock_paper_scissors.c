/* Rock Paper Scissor (also known as Stone Paper Scissor) is a classic hand game played
between two people. Each player simultaneously forms one of three shapes: Rock, Paper,
 or Scissors. The winner is determined based on simple rules that have made this game a
 timeless favorite:

Rock vs Paper -> Paper wins (because paper can cover rock).
Rock vs Scissors -> Rock wins (because rock can crush scissors).
Paper vs Scissors -> Scissors wins (because scissors can cut paper).
In this Rock Paper Scissor project, users are asked to make a choice between these
three options. The computer will also randomly choose one of the three shapes. Once
both the user and the computer have made their choices, the result will be displayed,
showing who won the round along with the choices of both players. */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();
int userChoice();
int computerChoice();
void result(int user, int computer);

int main()
{
    int user, computer;

    srand(time(0));

    menu();

    user = userChoice();
    computer = computerChoice();

    printf("\nYour Choice     : ");

    switch(user)
    {
        case 1:
            printf("Rock");
            break;

        case 2:
            printf("Paper");
            break;

        case 3:
            printf("Scissors");
            break;

        default:
            printf("Invalid");
    }

    printf("\nComputer Choice : ");

    switch(computer)
    {
        case 1:
            printf("Rock");
            break;

        case 2:
            printf("Paper");
            break;

        case 3:
            printf("Scissors");
            break;
    }

    printf("\n");

    result(user, computer);

}

void menu()
{
    printf("------ ROCK PAPER SCISSORS ------\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
}

int userChoice()
{
    int choice;

    printf("Enter your choice: ");
    scanf("%d", &choice);

    return choice;
}

int computerChoice()
{
    int choice;

    choice = (rand() % 3) + 1;

    return choice;
}

void result(int user, int computer)
{
    if(user == computer)
    {
        printf("Result : Match Draw\n");
    }
    else if((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2))
    {
        printf("Result : You Win!\n");
    }
    else if(user >= 1 && user <= 3)
    {
        printf("Result : Computer Wins!\n");
    }
    else
    {
        printf("Result : Invalid Choice\n");
    }
}







