#include <stdio.h>

/*
Your job is to write a program that shows, in human-readable form (see below for specifics), 
how much memory a set of variables of a certain type will use. Your program should read a 
character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). 
Next it should read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables. 
Your program needs to be written in such a way that it would also perform correctly on other computers. 
In other words, rather than hard-coding specific sizes for the different variable types, your program 
needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. You need to make 
sure you provide this output in a form that is easy to read for humans.
*/

int main(void){
    int numOfVariables, size=0, amountOfSpace, MB, KBofMB, BofMB;
    char variableType;
    
    scanf("%c %d", &variableType, &numOfVariables);
    if (variableType == 'i') {
        size = sizeof(int);
    }else if (variableType == 's') {
        size = sizeof(short);
    }else if (variableType == 'c') {
        size = sizeof(char);
    }else if (variableType == 'd') {
        size = sizeof(double);
    } 
    amountOfSpace = size * numOfVariables;
    
    
    MB = amountOfSpace / 1000000; // get integer part of Megabyte (MB)
    KBofMB = (amountOfSpace % 1000000) / 1000;  // get the modulus part of MB
    BofMB = (amountOfSpace % 1000) % 1000; // get the modulus part of KB
    
    if (MB != 0) {
        printf("%d MB and %d KB and %d B", MB, KBofMB, BofMB );
    }else if (MB == 0){
        printf("%d KB and %d B",  amountOfSpace/1000, amountOfSpace%1000);
    }
    
}