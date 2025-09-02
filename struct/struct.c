#include <stdio.h>

typedef struct Coordinate {
    int x;
    int y;
    int z;
} coordinate_t;

coordinate_t new_coord(int x, int y, int z) {
    coordinate_t coord = {
        .x = x,
        .y = y,
        .z = z,
    };

    return coord;
};

int main() {
    coordinate_t coordinate = new_coord(1, 2, 3);

    printf("x: %d\n", coordinate.x);
    printf("y: %d\n", coordinate.y);
    printf("z: %d\n", coordinate.z);

    return 0;
}