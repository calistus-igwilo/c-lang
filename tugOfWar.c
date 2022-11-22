#include <stdio.h>

/*
Your program should first read an integer indicating the number of members per team. 
Then, the program should read the player weights (integers representing kilograms) 
alternating by team. 
After calculating the total weight of each team, the program should display the text
 "Team X has an advantage" (replacing X with 1 or 2 depending on which team has a 
 greater total weight).

You will then display the text "Total weight for team 1:" followed by the weight of 
team 1, then "Total weight for team 2:" followed by the weight of team 2

You are guaranteed that the two teams will not have the same total weight.


*/

int main(void) {
    int i, teamA, teamB, totalA=0, totalB=0, numPlayers;
    
    scanf("%d", &numPlayers);
    //loop = 2 * numPlayers;
    
    for (i = 0; i < numPlayers; i++) {
        scanf("%d %d", &teamA, &teamB);
        totalA += teamA;
        totalB += teamB;
    }
    if (totalA > totalB) {
        printf("Team 1 has an advantage\n");
    }else {
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", totalA);
    printf("Total weight for team 2: %d\n", totalB);
}
