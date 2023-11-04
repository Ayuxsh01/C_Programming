// Problem statement:-
// As we all are familiar with the concept of the game. In this game,
// we have two players. In our program, player 1 will be the user,
// and player 2 will be the computer. Player 1 selects either rock, paper, or scissor.
// The computer does not know about what player 1 has selected,
// so the computer randomly selects any item (rock, paper, or scissor).

// In this game, each player has 3 turns.
// The player who gets the point at least two times will win the game.
// The following are the rules of the game.

// rock vs. scissors -> rock wins

// paper vs. scissors -> scissors wins

// paper vs. rock -> paper wins

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomnumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
int greater(char char1,char char2)
{
    // For rock , paper, Scissor - Returns 1 if c1>c2 and 0 otherwise if c1=c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict []= {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper, Scissore\n");
    for (int i = 0; i < 3; i++)

    {
        // Take Player 1's input
        printf("Player 1's turn: \n");
        printf("Press 1 for Rock , 2 for Paper, 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1]; // if we choose 1 means temp-1 = 1 it will be 0 and we choosed rock and show on
        printf("You chhose %c\n\n", playerchar);

        // Generate computer's Unit
        printf("Computer Turn:\n");
        printf("Press 1 for Rock , 2 for Paper, 3 for Scissors\n");

        temp = generateRandomnumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU choose %c\n", compchar);

        // compare the scores

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("CPU got it!!\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("Its a draw!!\n");
        }
        else
        {
            playerscore += 1;
            printf("You got it!!\n");
        }
        printf("You: %d\nCPU: %d\n\n", playerscore, compscore);
    }
    if (playerscore > compscore)
    {
        printf("You win the game\n");
    }
    else if (playerscore < compscore)
    {
        printf("CPU win the game\n");
    }
    else
    {
        printf("Its a draw \n");
    }
    return 0;
}