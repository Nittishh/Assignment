#include <stdio.h>

struct Player {
    char name[50];
    int runs;
};

void enterBattingInfo(struct Player *player) {
    printf("Enter player name and runs scored (separated by space): ");
    scanf("%s %d", player->name, &player->runs);
}

int calculateTotalRuns(struct Player team[], int numPlayers) {
    int totalRuns = 0;
    for (int i = 0; i < numPlayers; i++) {
        totalRuns += team[i].runs;
    }
    return totalRuns;
}

void displayBattingInfo(struct Player team[], int numPlayers) {
    printf("Batting Information:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("%-20s %d\n", team[i].name, team[i].runs);
    }
}

int main() {
    int numPlayers;

    printf("Enter the number of players in the cricket team: ");
    scanf("%d", &numPlayers);

    struct Player team[numPlayers];

    for (int i = 0; i < numPlayers; i++) {
        enterBattingInfo(&team[i]);
    }

    int totalRuns = calculateTotalRuns(team, numPlayers);

    displayBattingInfo(team, numPlayers);

    printf("\nTotal Runs Scored by Cricket Team: %d\n", totalRuns);

    return 0;
}
