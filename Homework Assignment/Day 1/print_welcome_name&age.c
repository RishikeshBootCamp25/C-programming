#include <stdio.h>
int main() {
    char name[50];  // Variable to store the name
    int age;        // Variable to store the age
    // Input: Asking for user's name and age
    printf("\nEnter your name: ");
    scanf("%s", name);  // Reading name (single word input)
    printf("\nEnter your age: ");
    scanf("%d", &age);  // Reading age
    // Output: Displaying the welcome message
    printf("\nWelcome, %s! You are %d years old.\n", name, age);
    return 0;
}
