#include "my_string.h"

int main(void) {
    char s[100] = "Hello Jack";

    // Get the string.
    get_string(s, "Enter the string: ");

    printf("The string is \"%s\"\n", s);
    printf("The length is: %d\n", my_strlen(s));
    
    return 0;
}