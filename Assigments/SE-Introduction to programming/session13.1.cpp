#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("playlist.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Shape of You\n");
    fprintf(fp, "Blinding Lights\n");
    fprintf(fp, "Perfect\n");

    fclose(fp);
    printf("Songs written successfully to playlist.txt\n");

    return 0;
}
