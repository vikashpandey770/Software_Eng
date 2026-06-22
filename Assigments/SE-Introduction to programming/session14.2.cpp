#include <stdio.h>

int isEven(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number = 4;
    if (isEven(number)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
