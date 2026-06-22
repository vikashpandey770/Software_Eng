#include <stdio.h>

void passbyvalue(int follower) {
    follower += 1000;
    printf("Pass by Value inside a function: %d\n", follower);
}

void passbyreference(int *follower) {
    *follower += 1000;
    printf("Pass by reference inside a function: %d\n", *follower);
}

int main() {
    int follower = 5000;

    printf("Initial value of follower: %d\n", follower);
    passbyvalue(follower);
    printf("Value inside main after pass by value: %d\n", follower);

    passbyreference(&follower);
    printf("Value inside main after pass by reference: %d\n", follower);

    return 0;
}
