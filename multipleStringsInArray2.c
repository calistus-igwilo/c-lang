#include <stdio.h>
int main(void){
    //! showMemory(cursors=[words[0], words[1], words[2]], start=65520)
    char words[3][10];
    int i;
    printf("Please enter three words: ");
    for (i=0; i<3; i++) {
        scanf("%s", words[i]);
    }
    printf("You entered: \n");
    for (i=0; i<3; i++) {
        printf("%s ", words[i]);
    }
    printf("\nFirst letters: \n");
    for (i=0; i<3; i++) {
        printf("\"%s\" starts with the letter '%c'.\n", words[i], words[i][0]);
    }
    return 0;
}