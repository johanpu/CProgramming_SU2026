/*
    Practice w/ characters in C.
*/

#include <stdio.h>
#include <stdbool.h>
// Checks if the given character is uppercase.
bool isUpper(char c);
bool isLower(char c);
bool isDigit(char c);
bool isAlphaNumeric(char c);
bool isSpecial(char c);

char toLower(char c);
char toUpper(char c);

int main(void) {
    char ch_input;
    do {
        printf("Enter a character (. to exit): ");
        scanf(" %c", &ch_input);
        printf("\n");

        printf("isUpper('%c') = %d\n", ch_input, isUpper(ch_input));
        printf("isLower('%c') = %d\n", ch_input, isLower(ch_input));
        printf("isDigit('%c') = %d\n", ch_input, isDigit(ch_input));
        printf("isAlphaNumeric('%c') = %d\n", ch_input, isAlphaNumeric(ch_input));
        printf("toLower('%c') = %c\n", ch_input, toLower(ch_input));
        printf("toUpper('%c') = %c\n", ch_input, toUpper(ch_input));
        printf("isSpecial('%c') = %c\n", ch_input, isSpecial(ch_input));

        printf("\n");

    } while (ch_input != '.');
    
    
    return 0;
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isDigit(char c) {
    return c >= '0' && c <= '9'; 
}

bool isAlphaNumeric(char c) {
    return isUpper(c) || isLower(c) || isDigit(c);
}

char toLower(char c) {
    if (isUpper(c)) {
        return c + 32;
    }
    else {
        return c;
    }
}

char toUpper(char c) {
    if (isLower(c)) {
        return c - 32;
    }
    else {
        return c;
    }

bool isSpecial(char c) {
    return !(isAlphaNumeric(c));
}
}