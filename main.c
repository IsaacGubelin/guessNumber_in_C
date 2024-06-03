/***************************************************************************************************
*   GUESS THE NUMBER GAME
*   
*   Created by Isaac Gubelin on May 3, 2024
*
*   Description: Chooses a random integer between 0-99 (different in every startup) and prompts
*                user to keep typing in numbers until they get it correct.
*
***************************************************************************************************/

#include <stdio.h>      // Printf and scanf
#include <stdlib.h>     // rand function
#include <time.h>       // re-seed rand with time

#define UP_LIMIT 200    // The ceiling for how high a number the program chooses

int main(int argc, char* argv[]) {
    srand(time(0));                 // Reinitialize the random number generator seed

    int guess = -1;                 // This will hold each guess the player gives
    int num = rand() % UP_LIMIT;    // This is the number the program will compare the guesses to
    printf("Welcome to guess the number. Guess the number between 0-%d.\n", UP_LIMIT - 1);

    scanf("%d", &guess);            // Initial guess

    while (guess != num) {          // Loops if guess is incorrect
        if (guess > num)
            printf("Wrong, guess lower.\n");
        else if (guess < num)
            printf("Wrong, guess higher.\n");
        scanf("%d", &guess);        // Collect new input
    }

    printf("Congratulations, you guessed the number: %d\n", num);
    return 0;
}