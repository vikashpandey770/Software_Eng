#include <stdio.h>

int main() {
    int arr[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("IPL MATCH %d, Team %d runs: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The highest runs in 3 matches of each team are:\n");
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] > arr[i][1]) {
            printf("Match %d Winner Score: %d\n", i + 1, arr[i][0]);
        } else {
            printf("Match %d Winner Score: %d\n", i + 1, arr[i][1]);
        }
    }

    return 0;
}
