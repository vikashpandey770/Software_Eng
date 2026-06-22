#include <stdio.h>
#include <string.h>

int main() {
    char team[50];

    printf("Enter the team name short code or place name: ");
    scanf("%s", team);

    if (strcmp(team, "rcb") == 0 || strcmp(team, "bangalore") == 0) {
        printf("RCB for the win!!!\n");
    } else if (strcmp(team, "csk") == 0 || strcmp(team, "chennai") == 0) {
        printf("CSK for the win!!!\n");
    } else if (strcmp(team, "mi") == 0 || strcmp(team, "mumbai") == 0) {
        printf("MI for the win!!!\n");
    } else if (strcmp(team, "srh") == 0 || strcmp(team, "hyderabad") == 0) {
        printf("SRH for the win!!!\n");
    } else if (strcmp(team, "kkr") == 0 || strcmp(team, "kolkata") == 0) {
        printf("KKR for the win!!!\n");
    } else if (strcmp(team, "rr") == 0 || strcmp(team, "rajasthan") == 0) {
        printf("RR for the win!!!\n");
    } else if (strcmp(team, "pbks") == 0 || strcmp(team, "punjab") == 0) {
        printf("PBKS for the win!!!\n");
    } else if (strcmp(team, "gt") == 0 || strcmp(team, "gujarat") == 0) {
        printf("GT for the win!!!\n");
    } else if (strcmp(team, "dc") == 0 || strcmp(team, "delhi") == 0) {
        printf("DC for the win!!!\n");
    } else if (strcmp(team, "lsg") == 0 || strcmp(team, "lucknow") == 0) {
        printf("LSG for the win!!!\n");
    } else {
        printf("Team not found!\n");
    }

    return 0;
}
