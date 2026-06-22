#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("playlist.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Believer\n");
    fprintf(fp, "Counting Stars\n");

    fclose(fp);
    printf("Two songs added successfully to playlist.txt\n");

    return 0;
}
