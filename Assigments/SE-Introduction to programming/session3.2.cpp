#include <stdio.h>

int main() {
    const float GST_RATE = 18.0;
    float basePrice, gstAmount, finalPrice;

    printf("Enter base price: ");
    scanf("%f", &basePrice);

    gstAmount = (basePrice * GST_RATE) / 100;
    finalPrice = basePrice + gstAmount;

    printf("GST Amount = %.2f\n", gstAmount);
    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}
