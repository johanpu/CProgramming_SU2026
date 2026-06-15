/*
    Logical operator

    && - logical AND
    || - logical OR
    ! - logical NOT

*/

/*
    Create a function named checkInput. The function takes 2 integers.
    Returns 1 if first integer is divisible by 2nd integer && by (secondInteger - 3)

    (e.g. 12 and 6, 12%6 == 0 so TRUE, and 6-3 = 3, so 12%3=0 TRUE!)

    Returns 2 if the first integer is divisible by 2nd integer || by (secondInteger - 3)

    Return 3 if not divisible by 2nd nor 2nd-3

    In the main call the function and print the appropriate message.
*/

#include <stdio.h>

int main(void) {
    int input;

    // Scan the input
    printf("Enter your input: ");
    scanf("%d", &input);

    /*// Check the input
    if (input > 0) {
        if (input < 100) {
            if (input % 2 == 0) {
                puts("Valid input.");
            }
        }
    }*/
    
    if (input > 0 && input < 100 && input % 2 == 0) {
        puts("Valid input.");
    }
    else{
        puts("Invalid input.");
    }
    
    
    return 0;
}

