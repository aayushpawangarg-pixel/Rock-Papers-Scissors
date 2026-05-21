#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int computer;
int n;
// char d[9];
int RandomNumber()
{
    computer = rand() % 3;
    return computer;
}
/*char Play()
{
    if (computer == 0)
    {
        char d[] = "Rock";
    }
    else if (computer == 1)
    {
        char d[] = "Paper";
    }
    else
    {
        char d[] = "Scissors";
    }
    return d;
}*/

void Result()
{
    if (computer == n)
    {
        printf("Result: Tie\n");
    }
    else if ((computer == 0 && n == 1) ||
             (computer == 1 && n == 2) ||
             (computer == 2 && n == 0))
    {
        printf("Result: You won this round\n");
    }
    else
    {
        printf("Result: Computer won this round\n");
    }
}

int main()
{
    char ar[10];
    srand(time(NULL));
    char d[9];
    char e[9];
    printf("Enter ur name : ");
    scanf("%s", ar);
    printf("Welcome %s\n", ar);
    printf("Enter 0 for Rock\n");
    printf("Enter 1 for Paper\n");
    printf("Enter 2 for Scissors\n");

    for (int i = 0; i < 3; i++)
    {
        RandomNumber();
        if (computer == 0)
            strcpy(d, "Rock");

        else if (computer == 1)
            strcpy(d, "Paper");
        else
            strcpy(d, "Scissors");
        do
        {
            scanf("%d", &n);

            if (n < 0 || n > 2)
                printf("Invalid choice. Enter 0, 1, or 2 only: ");

        } while (n < 0 || n > 2);

        if (n == 0)
            strcpy(e, "Rock");

        else if (n == 1)
            strcpy(e, "Paper");
        else
            strcpy(e, "Scissors");       
        printf("Computer has chosen %s and %s has chosen %s\n", d, ar, e);
        Result();      
    }
    return 0;
}
