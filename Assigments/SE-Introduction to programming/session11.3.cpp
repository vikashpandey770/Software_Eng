#include <stdio.h>

int main() {
    int orders[5] = {250, 450, 120, 300, 500};
    int *ptr = orders;

    printf("Order Amounts and Their Addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("No-%d: Amount = %d, Address = %p\n", i + 1, *(ptr + i), (void*)(ptr + i));
    }

    return 0;
}
