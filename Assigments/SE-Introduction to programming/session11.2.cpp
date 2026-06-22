#include <stdio.h>

void swapPlaylistCounts(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int playlist1 = 25;
    int playlist2 = 40;

    printf("Before swapping:\n");
    printf("Total no of song's in Playlist 1 = %d\n", playlist1);
    printf("Total no of song's in Playlist 2 = %d\n", playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter swapping:\n");
    printf("Total no of song's in Playlist 1 = %d\n", playlist1);
    printf("Total no of song's in Playlist 2 = %d\n", playlist2);

    return 0;
}
