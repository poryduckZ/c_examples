#include <stdio.h>

int main() {
    int i = 1;
    int size = sizeof(&i);

    printf("Size: %d\n", size);
    
    return 0;
}