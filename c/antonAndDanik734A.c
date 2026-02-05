#include <stdio.h>

int main() {
    int anton = 0;
    int danik = 0;
    int gamesPlayed = 0;
    scanf("%d ", &gamesPlayed);

    char gameResults[gamesPlayed+1];
    fgets(gameResults, sizeof(gameResults), stdin);

    int i = 0;
    while (gameResults[i] != '\0') {
        if (gameResults[i] == 'A') {
            anton++;
        } else {
            danik++;
        }
        i++;
    }

    if (anton > danik) {
        printf("Anton\n");
    } else if (danik > anton) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }
}
