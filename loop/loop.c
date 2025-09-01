#include <stdio.h>

int main() {

    for (int i = 0; i < 5; i++) {
        printf("Hello %d\n", i);
    }

    int i = 4;
    while (i >= 0) {
        printf("Hello: %d\n", i);
        i--;
    }

    int j = 0;
    do {
        printf("Hello: %d\n", j);
        j++;
    } while (j < 5);

    return 0;
}