#include <stdio.h>

int main() {
    char playlist_name[50];
    int total_songs;
    float avg_duration;

    printf("Enter playlist name: ");
    scanf("%s", playlist_name);

    printf("Enter total songs in the playlist: ");
    scanf("%d", &total_songs);

    printf("Enter average duration of Songs: ");
    scanf("%f", &avg_duration);

    printf("The playlist name: %s\nThe total no of songs are: %d\nThe average duration of the songs is: %.2f\n", playlist_name, total_songs, avg_duration);

    return 0;
}
