#include <stdio.h>
#include <string.h>

int main() {
    char name[50], copied[20];

    printf("Enter the name: ");
    scanf("%s", name);

    if (strlen(name) <= 5) {
        printf("Username: %s\n", name);
    } else {
        strncpy(copied, name, 5);
        copied[5] = '\0';
        printf("Username: %s\n", copied);
    }

    return 0;
}
