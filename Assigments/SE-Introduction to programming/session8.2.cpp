#include <stdio.h>
#include <string.h>

void addtocart(char cart[10][20], char product[20], int *add) {
    strcpy(cart[*add], product);
    (*add)++;
    printf("Cart inside function: \n");
    for (int i = 0; i < *add; i++) {
        printf("%s\n", cart[i]);
    }
}

int main() {
    char cart[10][20] = {"Mouse", "Keyboard"};
    int itemCount = 2;
    char product[20];

    printf("Enter your product: ");
    scanf("%s", product);

    addtocart(cart, product, &itemCount);

    printf("\nUpdated cart inside main function..\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%s\n", cart[i]);
    }

    return 0;
}
