
#include "my_ctype.h"
void printInLowercase(const char* str);
void printInReversedCase(const char* str);
void printWithNoDigits(const char* str); // TODO
void printSpecialCharacters(const char* str); // TODO
void convertToLower(char* str); // TODO
void printWords(const char* str); // TODO

int main(void) {
    char ch_input = 'B';

    printf("isUpper('%c') = %d\n", ch_input, isUpper(ch_input));

    // Create a string
    char str[] = "HeLlO WoRlD123!";

    // Print the string
    puts("Using printf");
    printf("%s\n\n", str);
    puts("Using puts");
    puts(str);
    puts("\n");
    puts("Using a loop");

    for (int i = 0; str[i] != '\0'; i++) { // str[i] != '\0' - continue till the end of the string
        putchar(str[i]);
    }

    puts("\n");
    puts("Print in lowercase");
    printInLowercase(str);
    printInReversedCase(str);
    
    return 0;
}

void printInLowercase(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toLower(str[i]));
    }
    
    puts("\n");
}

void printInReversedCase(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isUpper(str[i])) {
            putchar(toLower(str[i]));
        }
    else {
        putchar(toUpper(str[i]));
    }
}
}
