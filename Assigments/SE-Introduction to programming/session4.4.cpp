#include <stdio.h>

void checkTrending(int likes, int comments, int shares) {
    if (likes >= 1000 || (comments > 200 && shares >= 50)) {
        printf("The post is trending on instagram !!!\n");
    } else {
        printf("The post is not trending on instagram\n");
    }
}

int main() {
    int likes, comments, shares;

    printf("Enter the amount of likes, comments, shares: ");
    scanf("%d %d %d", &likes, &comments, &shares);

    checkTrending(likes, comments, shares);

    return 0;
}
