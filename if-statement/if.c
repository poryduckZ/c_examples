#include <stdio.h>

int main() {
    int x = 10;
    if (x < 10) {
        printf("too cold \n");
    } else if (x == 10) {
        printf("just right \n");
    } else {
        printf("too hot \n");
    }
    
    return 0;
}