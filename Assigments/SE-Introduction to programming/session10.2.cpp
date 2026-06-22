#include <stdio.h>
#include <string.h>

int main() {
    char user1[20], user2[20];

    printf("Enter your username 1: ");
    scanf("%s", user1);

    printf("Enter your username 2: ");
    scanf("%s", user2);

    if (strcmp(user1, user2) == 0) {
        printf("Both the strings are equal !!!\n");
    } else {
        printf("The strings are not equal!!!\n");
    }

    return 0;
}
