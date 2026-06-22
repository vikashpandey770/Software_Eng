#include <stdio.h>

void incrementFollowers(int *followers, int n) {
    for (int i = 0; i < n; i++) {
        *(followers + i) = *(followers + i) + 100;
    }
}

int main() {
    int followers[5] = {1200, 850, 2300, 1500, 980};

    printf("Original follower counts: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", followers[i]);
    }

    incrementFollowers(followers, 5);

    printf("\n\nUpdated follower counts: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", followers[i]);
    }
    printf("\n");

    return 0;
}
