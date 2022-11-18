#include <stdio.h>

/*
Your job is to find the length of the longest word in a text with no punctuation 
or special characters of any kind - only contains words. To do so, write a C-program 
that takes as a input first the number of words in a text, followed by all of the words 
in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/

int main(void) {
    int i, length, numWords, maxNum=0, cnt;
    char word[101];
    
    printf("Enter number of words: ");
    scanf("%d", &numWords);
    for (i=0; i<numWords; i++) {
        printf("Enter word: n");
        scanf("%s", word);
        cnt = 0;
        while (word[cnt] != '\0'){
            cnt++;
        }
        if (cnt > maxNum) {
            maxNum = cnt;
        }
        
    }
    printf("%d\n", cnt);
    
}