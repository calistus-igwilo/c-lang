#include <stdio.h>

/*
Researchers are interested in how fast an epidemic spreads, and therefore 
the speed at which health measures must be put in place. Your program 
should first read an integer representing the total population of the area. 
Knowing that a person was infected on day 1 and that each infected person 
contaminates two new people every day, you must calculate the day at which 
the entire population of the area will be infected.
*/

int main(void) {
    int population, newInfection, totalInfection=1, day=1;
    
    scanf("%d", &population);
    
    while (totalInfection < population) {
        newInfection = 2 * totalInfection;
        totalInfection += newInfection;
        
        day += 1;
    }
    printf("%d", day);
    
}