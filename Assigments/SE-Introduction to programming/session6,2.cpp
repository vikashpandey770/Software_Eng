#include <stdio.h>

int main() {
    int choice;
    char team[50];

    do {
        printf("\n---What operation you want to perform---\n");
        printf("1. View your IPL Team\n");
        printf("2. Add a new Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("My fav three team's are: 1.RCB 2.CSK 3.RR\n");
        } else if (choice == 2) {
            printf("Enter the team name: ");
            scanf("%s", team);
            printf("Team %s added successfully.\n", team);
        }
    } while (choice != 3);

    return 0;
}
