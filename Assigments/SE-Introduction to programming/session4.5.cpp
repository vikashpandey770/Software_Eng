#include <stdio.h>

int main() {
    int pree = 1, post = 1;

    printf("-----Pre increment counter-----\n");
    while (pree < 10) {
        printf("%d, ", ++pree);
    }

    printf("\n---Post increment counter-----\n");
    while (post < 10) {
        printf("%d, ", post++);
    }
    printf("\n");

    return 0;
}
