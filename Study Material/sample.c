#include <stdio.h>
#include <stdlib.h>  // for rand()
#include <time.h>    // for time()

int main() {
    srand(time(0)); // seed the random number
    int secretNumber = rand() % 100 + 1; // random number from 1 to 100
    printf("Random number (just for testing): %d\n", secretNumber);
    return 0;
}