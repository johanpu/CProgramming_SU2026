/*
    Using constant arrays.

    Searching in arrays.
*/

#include <stdio.h>

#define SIZE 10

void printDoubledArray(const int* arr, int size);
 
// Returns the index of the first zero value in the array. Returns -1 if no zeros present.
int searchFirstZero(const int* arr, int size);

int searchLastZero(const int* arr, int size);
int searchNthZero(const int* arr, int size, int n);
int searchLastNthTarget(const int* arr, int size, int n, int target); // search for nth target (e.g n=3 target=5 search for 3rd 5 in array)

int main(void) {
    // Create an array.
    int a[SIZE] = {1, 2, 3, 4};

    // Call the function.
    printDoubledArray(a, SIZE);

    printf("The first zero is at index %d\n", searchFirstZero(a, SIZE));
    printf("The LAST zero is at index %d\n", searchLastZero(a, SIZE));

    return 0;
}

void printDoubledArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i] * 2);
    }
}

int searchFirstZero(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0){
            return i;
        }
    }

    return -1;
}

int searchLastZero(const int* arr, int size) {
    for(int i = size - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            return i;
        }
    }

    return -1;
}

int searchNthZero(const int* arr, int size, int n) {
    // TODO
}

int searchLastNthTarget(const int* arr, int size, int n, int target) {
    // TODO
}