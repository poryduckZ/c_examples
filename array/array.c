#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements using array indexing
    printf("numbers[2] = %d\n", numbers[2]);

    // Accessing elements using pointers
    printf("*(numbers = 2) = %d\n", *(numbers + 2));

    // Pointer arithmetic
    int *ptr = numbers;
    printf("Pointer ptr points to numbers[0]: %d\n", *ptr);
    ptr += 2;
    printf("Pointer ptr points to numbers[2]: %d\n", *ptr);
    
    return 0;
}