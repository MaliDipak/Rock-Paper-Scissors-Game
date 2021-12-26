// Rock Paper Seaser Game With Dipak C. Mali
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int random_number()
{
    int n;
    srand(time(0));
    n = rand() % 30 + 1;
    return n;
}

int solution(char com, char ply)
{
    if (com == ply)
    {
        return 0;
    }
    else if (com == 'p' && (ply == 'r' || ply == 'R'))
    {
        return 1;
    }
    else if (com == 'p' && (ply == 's' || ply == 'S'))
    {
        return 2;
    }
    else if (com == 'r' && (ply == 'p' || ply == 'P'))
    {
        return 2;
    }
    else if (com == 'r' && (ply == 's' || ply == 'S'))
    {
        return 1;
    }
    else if (com == 's' && (ply == 'r' || ply == 'R'))
    {
        return 2;
    }
    else if (com == 's' && (ply == 'p' || ply == 'P'))
    {
        return 1;
    }
    else
    {
        return 3;
    }
}

void main()
{
    int result, a;
    char player, com;
    char ch = 'y';
    while (ch != 'n' && ch != 'N')
    {
        result = random_number();
        if (result >= 0 && result <= 10)
        {
            com = 'r';
        }
        else if (result >= 11 && result <= 20)
        {
            com = 'p';
        }
        else if (result >= 21 && result <= 30)
        {
            com = 's';
        }
        system("cls");
        printf("# Choose any one of the following :)\n");

        printf("[r] Rock\n[p] Paper\n[s] Scissor\n");
        printf("Enter your choice : ");
        fflush(stdin);
        scanf("%c", &player);
        a = solution(com, player);
        if (a == 0)
            printf("Computer choose %c and You choose %c so...,\n\t\t\t***Game_Draw!", com, player);
        else if (a == 1)
            printf("Computer choose %c and You choose %c so...,\n\t\t\t***Computer_Win!", com, player);
        else if (a == 2)
            printf("Computer choose %c and You choose %c so...,\n\t\t\t***You_Win!", com, player);
        else
            printf("Computer choose %c and You choose %c so...,\n\t\t\t***Enter Valid Choice...", com, player);

        printf("\n\nDo you want to continue the game (y/n): ");
        fflush(stdin);
        scanf("%c", &ch);
    }
}