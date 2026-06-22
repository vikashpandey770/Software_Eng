#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choices[] = {1, 2, 3, 4};
    int length = 4;
    int random_pick, user_choice;

    srand(time(NULL));
    random_pick = choices[rand() % length];

    printf("A game of guess between you and computer\n");
    printf("Rules: Guess correctly to win, or continue playing!\n");

    do {
        printf("\n1. Blinding Lights\n2. Believer\n3. Perfect\n4. Kesariya\nEnter your choice: ");
        scanf("%d", &user_choice);

        if (user_choice == random_pick) {
            printf("Congratulations you win!! The guess was correct!\n");
        } else {
            printf("You lose. Guess again!\n");
        }
    } while (user_choice != random_pick);

    return 0;
}
