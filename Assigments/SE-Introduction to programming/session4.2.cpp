#include <stdio.h>

int main() {
    int prod_price;
    int discount = 20;
    char userchoice;
    float total_price;

    printf("Enter the Product Price: ");
    scanf("%d", &prod_price);

    printf("Are you a member (answer in y or n): ");
    scanf(" %c", &userchoice);

    if (userchoice == 'y' || userchoice == 'Y') {
        total_price = prod_price * ((100 - (discount + 5)) / 100.0);
    } else {
        total_price = prod_price * ((100 - discount) / 100.0);
    }

    printf("The total price after applying discount is: %.2f\n", total_price);

    return 0;
}
