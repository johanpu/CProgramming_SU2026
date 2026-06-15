#include <stdio.h>

// Function prototypes - short description of functions
void two(void);
void one_three(void);

int main() {
    puts("starting now:");
    //Function call
    one_three();
    puts("done!");
    
    return 0;
}

void one_three(void) {
    puts("one");
    two();
    puts("three");
}

void two(void) {
    puts("two");
}
