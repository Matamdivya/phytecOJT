#include <stdio.h>

int main() {
    int secret = 7;   // fixed secret number
    int guess;
    int chances = 3;

    printf("Guess the number (between 1 and 10).\n");

    for (int i = 1; i <= chances; i++) {
        printf("Chance %d: ", i);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Correct! You guessed the number.\n");
            return 0; // end program if guessed right
        } else {
            printf("Wrong guess.\n");
        }
    }

    printf("Out of chances! The secret number was %d.\n", secret);
    return 0;
}


