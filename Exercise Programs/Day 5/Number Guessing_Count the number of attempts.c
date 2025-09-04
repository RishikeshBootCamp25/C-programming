#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = rand() % 100 + 1;

    do {
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &guess);
        attempts++;
    } while (guess != secret);

    printf("Congratulations! You guessed it in %d attempts.\n", attempts);

    return 0;
}
