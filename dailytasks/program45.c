#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "code";      // secret word
    char guess;
    int chances = 6;           // total wrong attempts allowed
    int length = strlen(word);
    char display[20];

    // Initialize display with underscores
    for(int i = 0; i < length; i++) {
        display[i] = '_';
    }
    display[length] = '\0';

    printf("=== HANGMAN GAME ===\n");

    while(chances > 0) {
        printf("\nWord: %s", display);
        printf("\nChances left: %d", chances);

        printf("\nEnter a letter: ");
        scanf(" %c", &guess);

        int found = 0;
        for(int i = 0; i < length; i++) {
            if(word[i] == guess) {
                display[i] = guess;
                found = 1;
            }
        }

        if(found) {
            printf("Correct guess!\n");
        } else {
            printf("Wrong guess!\n");
            chances--;
        }
        if(strcmp(word, display) == 0) {
            printf("\n You Win! The word is: %s\n", word);
            return 0;
        }
    }

    printf("\n You Lost! The word was: %s\n", word);

    return 0;
}
