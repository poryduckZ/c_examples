#include <stdio.h>

int max_sneklang_memory(int max_threads, int memory_per_thread) {
    return max_threads * memory_per_thread;
}

int main() {
    printf("Max memory: %d\n", max_sneklang_memory(2, 3));
    return 0;
}

