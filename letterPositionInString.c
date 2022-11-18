#include <stdio.h>

/*
You are interested in finding words that contain the letter 't' or 'T' in the 
first half of the word (including the middle letter if there is one). 
Specifically, if the first half of the word does contain a 't' or a 'T', 
your program should output a 1. If the first half does not contain the 
letter 't' or 'T', but the second half does, then your program should 
output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your 
program's output should be -1. You may assume that the word entered does 
not have more than 50 letters.
*/
int main(void) {
    int i=0, position=0, check;
    char word[50];
    
    scanf("%s", word);
    while (word[i] != '\0') {
        if (word[i] == 'T' || word[i] == 't') {
            position = i+1;
        }
        i++;
    }
    check = (int) (i / 2.0 + 0.5); //round decimal before converting to integer
    if (position == 0) {
        printf("%d\n", -1);
    }else if(position <= check ) {
        printf("%d\n", 1);
    }else {
        printf("%d\n", 2);
    }
    
    return 0;
}