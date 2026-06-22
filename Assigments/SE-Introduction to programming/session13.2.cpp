#include <stdio.h>

int main() {
    FILE *fp;
    char song[100];

    fp = fopen("playlist.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open playlist.txt\n");
        return 1;
    }

    printf("Songs in Playlist:\n");
    while (fgets(song, sizeof(song), fp) != NULL) {
        printf("%s", song);
    }

    fclose(fp);
    return 0;
}
