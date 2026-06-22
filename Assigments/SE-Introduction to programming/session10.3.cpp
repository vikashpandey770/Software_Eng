#include <stdio.h>
#include <string.h>

int main() {
    char string1[20] = "Flipkart";
    char shoppingApp[20];

    strcpy(shoppingApp, string1);
    printf("The copied string is: %s\n", shoppingApp);

    return 0;
}
