#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem menu[3] = {
        {"Paneer Butter Masala", 250.0, 4.5},
        {"Veg Biryani", 180.0, 4.3},
        {"Chocolate Brownie", 120.0, 4.7}
    };

    printf("----- Zomato Menu -----\n");
    for (int i = 0; i < 3; i++) {
        printf("\nItem %d\n", i + 1);
        printf("Name : %s\n", menu[i].itemName);
        printf("Price : Rs. %.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
    }

    return 0;
}
