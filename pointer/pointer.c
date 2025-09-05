#include <stdio.h>

typedef struct Coordinate {
    int x;
    int y;
    int z;
} coordinate_t;

int main() {
    int i = 1;
    int size = sizeof(&i);

    printf("Size: %d\n", size);

    int example = 32;
    int *pointer_to_example = &example;
    int value_at_pointer = *pointer_to_example;
    
    coordinate_t point = {10, 20, 30};
    coordinate_t *ptr_to_point = &point;
    printf("X: %d\n", ptr_to_point->x);

    return 0;
}