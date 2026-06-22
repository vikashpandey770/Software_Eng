#include <stdio.h>

int main() {
    int row, col, space;
    for (row = 1; row <= 6; row++) {
        for (space = 1; space <= 6 - row; space++) {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
