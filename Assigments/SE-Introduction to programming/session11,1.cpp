#include <stdio.h>

int main() {
    int likes = 150;
    int *ptrLikes = &likes;

    printf("Value of likes = %d\n", likes);
    printf("Value stored in ptrLikes = %d\n", *ptrLikes);
    printf("Address of likes = %p\n", (void*)&likes);
    printf("Address stored in ptrLikes = %p\n", (void*)ptrLikes);

    return 0;
}
