#include <stdio.h>

/*
Write a C-program that displays the following:

Programming in C
using this printf statement:

printf ("Programming %c%c %c\n", letter1, letter2, letter3);
*/

int main(void) {
    char letter1, letter2, letter3;
    
    letter1 = 'i';
    letter2 = 'n';
    letter3 = 'C';
    
    printf("Programming %c%c %c\n", letter1, letter2, letter3);
    
    return 0;
}