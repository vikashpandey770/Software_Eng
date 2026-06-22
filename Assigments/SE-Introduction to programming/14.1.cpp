#include <stdio.h>

int main() {
    int prices[] = {120, 250, 90};
    int total = 0;

    for (int i = 0; i < 3; i++) {
        total += prices[i];
    }

    printf("Total price is: %d\n", total);
    return 0;
}
