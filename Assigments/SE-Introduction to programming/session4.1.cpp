#include <stdio.h>

int calculate_total(int price, int quant) {
    return price * quant;
}

int main() {
    int item_price, quantity;

    printf("Enter the item price: ");
    scanf("%d", &item_price);

    printf("Enter the item quantity: ");
    scanf("%d", &quantity);

    printf("The total amount for %d product's is : %d\n", quantity, calculate_total(item_price, quantity));

    return 0;
}
