#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible for Driving License\n");
        if (age >= 21) {
            printf("Eligible for Credit Card\n");
        }
        if (age >= 25) {
            printf("Eligible for Car Rental\n");
        }
    } else {
        printf("You are not old enough for these services.\n");
    }

    return 0;
}
