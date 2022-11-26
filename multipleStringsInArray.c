#include <stdio.h>

/* 
Your goal is to read a 68-word text from the input and then print it to the screen backwards. 
Individual words do not have to be spelled backwards, but rather your program should print out 
the last word first, then the second-to-last word, etc. No word has more than 40 characters.
*/

int main(void) {
    int i;
    char words[68][41];
    
    for (i=0; i<68; i++) {
       scanf("%s", words[i]);
    }
    
    for (i=67; i>-1; i--) {
        printf("%s ", words[i]);
    }
}