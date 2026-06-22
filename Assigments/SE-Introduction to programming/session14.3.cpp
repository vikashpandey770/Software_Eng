#include <stdio.h>

void formatFollowersCount(long count) {
    if (count >= 1000000) {
        printf("%.1fM\n", (float)count / 1000000);
    } else if (count >= 1000) {
        printf("%.1fK\n", (float)count / 1000);
    } else {
        printf("%ld\n", count);
    }
}

int main() {
    formatFollowersCount(1500);
    formatFollowersCount(1200000);
    formatFollowersCount(450);
    return 0;
}
