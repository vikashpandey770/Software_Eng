#include <stdio.h>

int main() {
    int arr[7];
    float total = 0.0;

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    printf("The average of the week is: %.3f\n", total / 7);
    return 0;
}
