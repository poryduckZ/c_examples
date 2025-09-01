#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int main() {
    printf("sizeof(bool)    = %zu\n", sizeof(bool));
    printf("sizeof(int)    = %zu\n", sizeof(int));
    printf("sizeof(float)    = %zu\n", sizeof(float));
    printf("sizeof(double)    = %zu\n", sizeof(double));
    printf("sizeof(size_t)    = %zu\n", sizeof(size_t));
    return 0;
}