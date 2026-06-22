#include <stdio.h>

int main() {
    int playlistrating[3][5] = {
        {4, 3, 5, 2, 4},
        {3, 2, 4, 5, 2},
        {4, 2, 5, 1, 3}
    };

    printf("Rating for the second playlist: \n");
    for (int day = 0; day < 5; day++) {
        printf("playlist == 2 || day == %d || Rating's == %d\n", day + 1, playlistrating[1][day]);
    }

    return 0;
}
