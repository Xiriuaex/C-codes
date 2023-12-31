#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int counter = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    // while (guess != secretNumber && counter != 5)
    // {
    //     printf("Enter a number:");
    //     scanf("%d", &guess);
    //     counter++;
    // }
    // if (counter != 5)
    // {
    //     printf("\nYOU WIN!");
    // }
    // else
    // {
    //     printf("\n YOU LOSE!");
    // }

    // return 0;

    while (guess != secretNumber && outOfGuesses == 0)
    {
        if (counter < guessLimit)
        {
            printf("Enter a number:");
            scanf("%d", &guess);
            counter++;
        }
        else
        {
            outOfGuesses == 1;
            printf("you lose");
            break;
        }
    }
    printf("You win!");

    return 0;
}