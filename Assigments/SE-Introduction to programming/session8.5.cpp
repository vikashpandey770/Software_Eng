#include <stdio.h>

void capitalizeString(char str[]) {
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    printf("The formatted string is: %s\n", str);
}

int main() {
    char inputString[50];
    printf("Enter text: ");
    scanf("%s", inputString);

    capitalizeString(inputString);
    return 0;
}
