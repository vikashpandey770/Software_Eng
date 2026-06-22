#include <stdio.h>

int main() {
    int dailySteps[7] = {2500, 3500, 3000, 4000, 10000, 2556, 7855};

    for (int i = 0; i < 7; i++) {
        printf("Day-[%d] == %d steps \n", i + 1, dailySteps[i]);
    }

    return 0;
}
