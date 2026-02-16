#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Random number generator
    srand(time(0));
    number = rand() % 100 + 1;   // 1 se 100 tak number

    printf("===== Number Guessing Game =====\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess > number) {
            printf("Too High!\n");
        }
        else if(guess < number) {
            printf("Too Low!\n");
        }
        else {
            printf("🎉 Correct! You guessed in %d attempts.\n", attempts);
        }

    } while(guess != number);

    return 0;
}
