
#include "my_ctype.h"
void printInLowercase(const char* str);
void printInReversedCase(const char* str);
void printWithNoDigits(const char* str); // TODO
void printSpecialCharacters(const char* str); // TODO
void convertToLower(char* str); // TODO
void printWords(const char* str); // TODO

void get_string(char* str, const char* prompt);

int my_strlen(const char* str);

void my_strcpy(char* dest, char* src);

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

void get_string(char* str, const char* prompt) {
    printf("%s\n", prompt);
    
    int i = 0;
    while (1) {
        char input = getchar();
        if (input == '\n') {
            break;
        }
        else {
            str[i] = input;
            i++;
        }
        
        // Add null character at the end of string.
        str[i] = '\0';
    }
}

int my_strlen(const char* str) {
    int i = 0;
    
    while (str[i] != '\0') {
        i++;
    }
    
    return i;
}
void my_strcpy(char* dest, char* src){
    int i = 0;
    
    while (1) {
        dest[i] = src[i];

        if (src[i] == '\0') {
            break;
        }

        i++;
    }
}