#include <stdio.h>

/* 
write a program that takes several lines of input from a user (see the below example). 
The first line of the input indicates the number of robots to be deployed. 
Each subsequent line shows the height, the weight, the power of the engines 
and a resistance rating (1,2, or 3) of each of of these robots. Your program 
should use this information to calculate the total power of these robots. 
The power of all robots is the sum of the power of each robot, where the power of an 
individual robot is calculated via:

(enginePower + resistance) * (weight - height)

Example
Input:
2
50 60 2 1
43 62 5 2

Output:
163
*/


int main(void) {
    int i, enginePower, resistance, weight, height, numberRobots, powerScore=0;
    
    printf("Number of robots to be deployed? \n");
    scanf("%d", &numberRobots);
    
    for(i=0; i<numberRobots; i++) {
        printf("Enter the height, weight, power of engine, and resistance ratings \n");
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        powerScore += (enginePower + resistance) * (weight - height);
    }
    
    printf("%d\n", powerScore);
    
    return 0;
}