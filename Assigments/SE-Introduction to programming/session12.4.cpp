#include <stdio.h>

struct Bio {
    char description[100];
    int age;
};

struct InstaProfile {
    char username[50];
    int followers;
    struct Bio bio;
};

int main() {
    struct InstaProfile profile = {"karan_123", 1500, {"B.Tech Student", 20}};

    printf("Instagram Profile Details\n-----\n");
    printf("Username : %s\n", profile.username);
    printf("Followers : %d\n", profile.followers);
    printf("Description: %s\n", profile.bio.description);
    printf("Age : %d\n", profile.bio.age);

    return 0;
}
