#include <stdio.h>

/*
write a program to find out how many letters occur multiple times in a given 
word. Your program should read a word from the input and then sort the letters 
of the word alphabetically (by their ASCII codes). Next, your program should 
iterate through the letters of the word and compare each letter with the one 
following it. If these equal each other, you increase a counter by 1, making 
sure to then skip ahead far enough so that letters that occur more than twice 
are not counted again. You may assume that the word you read from the input has 
no more than 50 letters, and that the word is all lowercase.
*/

int main(void) {
    int i, j, k=0, length=0, occurence=0;
    char word[50], tmp;
    
    scanf("%s", word);
    
    // find length of word
    while (word[length] !='\0') {
        length++;
    }
    
    // bubble sort
    for (i=0; i<length-1; i++) {
        for (j=0; j<length-1; j++) {
            if (word[j] > word[j+1]) {
                //swap
                tmp = word[j];
                word[j] = word[j+1];
                word[j+1] = tmp;
            }
        }
    }
    printf("Sorted word: %s\n", word);

    // how many letters occur multiple times?
    while (word[k+1] != '\0') {
        if (word[k] == word[k+1]) {
            while (word[k] == word[k+1]) {
                k++;
            }
        occurence += 1;
        }else {
            k=k+1;
        }
    }
    printf("%d\n", occurence);

    return 0;

}