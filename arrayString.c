#include <stdio.h>

/*
Write a C-program that prints out a word as many times as specified. 
The number of repetitions and the word should be given as input to 
the program. You may assume that the word has no more than 100 characters 
(be sure to also reserve space for the null terminator, \0, though!).
*/
int main(void) {
    char word[101];
    int i, repetition;
    
    scanf("%d %s", &repetition, word); // %s does not require & in scanf
    for (i=0; i<repetition; i++) {
        printf("%s\n", word);
    }
    
    return 0;
}