#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;

    srand(time(0));
    secret = rand() % 100 + 1;

    printf("Guess the number between 1 and 100: ");
    scanf("%d", &guess);

    if (guess == secret) {
        printf("Correct! You guessed it!\n");
    } else {
        printf("Wrong guess. The number was %d\n", secret);
    }

    return 0;
}
