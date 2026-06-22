#include <stdio.h>
#include <string.h>

void getuserinitial(char name[]) {
    int i = 0;
    printf("%c", name[0]);
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
        i++;
    }
    printf("\n");
}

int main() {
    char name[50];
    printf("Enter your favorite cricketer's name: ");
    gets(name);

    int i = 0;
    while(name[i]) {
        if(name[i] >= 'a' && name[i] <= 'z') name[i] = name[i] - 32;
        i++;
    }

    getuserinitial(name);
    return 0;
}
