#include <stdio.h>

int main() {
    int total_cart;
    float total_amount;

    printf("Enter total cart amount: ");
    scanf("%d", &total_cart);

    if (total_cart > 2000) {
        total_amount = total_cart * 0.8;
        printf("Total amount: %.2f\n", total_amount);
    } else if (total_cart > 1000) {
        total_amount = total_cart * 0.9;
        printf("Total amount: %.2f\n", total_amount);
    } else {
        printf("Total amount is: %d\n", total_cart);
    }

    return 0;
}
