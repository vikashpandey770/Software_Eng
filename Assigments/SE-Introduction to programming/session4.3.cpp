#include <stdio.h>

int isEligibleForOffer(int age, int order_value) {
    if (age >= 18 && order_value > 500) {
        return 1;
    }
    return 0;
}

int main() {
    int age, total_order_value;

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter the total order value: ");
    scanf("%d", &total_order_value);

    if (isEligibleForOffer(age, total_order_value) == 1) {
        printf("Congratulations you are eligible for the offer!!!\n");
    } else {
        printf("You are not eligible for the offer !!!\n");
    }

    return 0;
}
