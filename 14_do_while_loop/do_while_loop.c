/*
    Introducting do... while loop.
*/

#include <stdio.h>

int main(void) {
    char input;
    int number;
    int option;

    // Get the character.
    do {
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    printf("Your character is %c.\n", input);

    // Scan a positive integer.
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &number);
    } while (number <= 0);

    printf("Your number is %d.\n", number);
    
    // Prompt user to select an option for output style.
    do {
        printf("Enter an option (1 or 2): ");
        scanf("%d", &option);
    } while (option != 1 && option != 2);

    printf("Your option is: %d.\n", option);

    for (int i = 0; i < number; i++) {
        if (option == 1) {
            printf("%c", input);
        }
        else {
            printf("%c\n", input);
        }
    }
    
    return 0; 
}