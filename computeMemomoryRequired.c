#include <stdio.h>

/*
A delivery company has hired you to manage their tracking services division. 
It is your job to store all of the currently used tracking codes in the company's 
database. These codes consist of either all integers, all decimal numbers, or all 
characters. The chief technology officer has warned you that the database is old 
and has limited space, so you want to determine how much memory the tracking codes 
will occupy before storing them. You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes 
you plan on entering. Next, for each successive tracking code your program should read 
in the integer length of code followed by a space and then the type of code ('i' for 
integer, 'd' for decimal, or 'c' for character). Finally your program should print the 
total amount of space required to store all of the tracking codes (in bytes). If the user 
enters an incorrect type for any tracking number, the program should print 'Invalid tracking 
code type' and exit.
*/

int main(void) {
    int i, numOfItems, length, totalBytes=0;
    char type;
    
    scanf("%d", &numOfItems);
    for (i=0; i<numOfItems; i++) {
        scanf("%d %c", &length, &type);
        if (type == 'i') {
            length = 4 * length;
        } else if (type == 'c') {
            length = length;
        }else if (type == 'd') {
            length = 8 * length;
        }else {
            printf("Invalid tracking code type\n");
            return 1;
        }
        totalBytes += length;
    }
    printf("%d bytes", totalBytes);
    
    
}