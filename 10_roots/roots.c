/*
    The program that calculates the roots of quadratic equations.

    ax^2 + bx + c = 0

    1) Print prompt first.

    */

#include <stdio.h>
#include <stdbool.h>

// Function prototypes
void printPrompt(char coeff);
int getCoefficient(void);
int calculateDiscriminant(int a, int b, int c);
void printRoots(int a, int b, int c);

int main(void) {
    printPrompt('a');
    int a = getCoefficient();

    printPrompt('b');
    int b = getCoefficient();

    printPrompt('c');
    int c = getCoefficient();

    return 0;
}

void printPrompt(char coeff) {
    printf("Enter the coefficient %c: ", coeff);
}

int getCoefficient(void) {
    int c;
    scanf("%d", &c);

    return c;
}

int calculateDiscriminant(int a, int b, int c) {
    return ((b * b) - (4 * a * c));
}

void printRoots(int a, int b, int c) {
    // TODO
    /*
        If discr < 0 -> no real roots
        Else if discr == 0 -> 1 root
        Else -> 2 roots
    */
}