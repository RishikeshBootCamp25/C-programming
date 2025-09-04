// Add Power Operation using Recursion

#include <stdio.h>

// Function to calculate power recursively
int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("%d ^ %d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
