#include <stdio.h>

struct Coordinate {
    int x;
    int y;
    int z;
};

int main() {
    struct Coordinate coordinate = {
        .x = 1,
        .y = 2,
        .z = 3
    };

    printf("x: %d\n", coordinate.x);
    printf("y: %d\n", coordinate.y);
    printf("z: %d\n", coordinate.z);

    return 0;
}