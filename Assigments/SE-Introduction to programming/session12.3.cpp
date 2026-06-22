#include <stdio.h>

struct Time {
    int hours;
    int minutes;
};

struct MovieShow {
    char movie[50];
    int screen;
    struct Time showTime;
};

int main() {
    struct MovieShow show = {"Avengers: Endgame", 3, {18, 30}};

    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n", show.movie, show.screen, show.showTime.hours, show.showTime.minutes);

    return 0;
}
