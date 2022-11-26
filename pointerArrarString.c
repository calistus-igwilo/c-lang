#include <stdio.h>
int main(void){
     //! showMemory(cursors=[words[0], words[1], words[2]], start=65520)
    char a[4];
    char b[6];
    char c[9];
    char * words[3] = {a, b, c};
    printf("Please enter a word with at  most 3 letters: ");
    scanf("%s", a);
    printf("Please enter a word with at  most 5 letters: ");
    scanf("%s", b);
    printf("Please enter a word with at  most 8 letters: ");
    scanf("%s", c);
    printf("You entered: \n");
    printf("%s %s %s.\n", a, b, c);
    printf("%s %s %s.\n", words[0], words[1], words[2]); //same as printf above
    return 0;
}