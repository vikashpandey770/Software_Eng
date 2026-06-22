#include <stdio.h>

int main() {
    int choice;

    printf("Enter your preferred meal time:\n1. Breakfast\n2. Lunch\n3. Dinner\n4. Snack\nChoice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Try some oats for the Breakfast.\n");
            break;
        case 2:
            printf("Try some Biryani or rajma chawal.\n");
            break;
        case 3:
            printf("Try some roti paired with dal.\n");
            break;
        case 4:
            printf("Try some chai with Parle-G.\n");
            break;
        default:
            printf("TRY some Fruits!!\n");
            break;
    }

    return 0;
}
