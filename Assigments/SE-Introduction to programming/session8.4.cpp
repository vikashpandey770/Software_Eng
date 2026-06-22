#include <stdio.h>

char* formatPrice(int price) {
    static char formatted[20];
    if (price >= 1000) {
        sprintf(formatted, "Rs.%d,%03d", price / 1000, price % 1000);
    } else {
        sprintf(formatted, "Rs.%d", price);
    }
    return formatted;
}

int main() {
    int mouse = 500;
    int keyboard = 1000;
    int monitor = 50000;

    printf("The price of mouse: %s\n", formatPrice(mouse));
    printf("The price of keyboard: %s\n", formatPrice(keyboard));
    printf("The price of monitor: %s\n", formatPrice(monitor));

    return 0;
}
