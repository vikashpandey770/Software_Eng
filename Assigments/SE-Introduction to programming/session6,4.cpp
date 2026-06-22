#include <stdio.h>

int main() {
    int no = 20;

    printf("Entry control loop (while loop)\nOutput: ");
    while (no < 10) {
        printf("%d\n", no);
        no++;
    }

    printf("\nExit control loop (do-while loop)\nOutput: ");
    do {
        printf("%d\n", no);
        no++;
    } while (no < 10);

    return 0;
}
