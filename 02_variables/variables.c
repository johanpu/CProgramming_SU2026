/*
    Introduction to variables in c.
    Lecture 2. 05/20/2026
*/

#include <stdio.h>

int main(void) {
    // Create a variable.

    int first_number;

    // Assign the value to the variable.

    first_number = 100;

    // Create & initialize.

    int second_number = 300;
// add all 5 operators (remainder, 4 arithmetics). add 3rd integer. 





    // Get the values from the keyboard.

    printf("Enter the first integer: ");
    scanf("%d", &first_number);

    printf("Enter the second integer: ");
    scanf("%d", &second_number);

    // Print values of variables.

    printf("The first number is: %d\n", first_number); // %d - conversion specifier.
    printf("The second number is: %d\n", second_number);

    // Calculate the sum.

    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);

    printf("\"A\"\t\\\"B\"\n");

    return 0;
}