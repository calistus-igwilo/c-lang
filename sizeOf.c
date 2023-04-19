#include <stdio.h>

/* 
unsigned char ranges from 0 to 255. if you add 1 to it, the result 
will be 0 (resets starting from initial possible value).
if you add 10, it returns 9

C does not protect you from going over the limits of a type. You 
need to take care of it by yourself
*/

int main(void) {
    unsigned char j = 255;
    j += 10;
    printf("%u\n", j); /* 9 it gets to end and starts from 0*/

    /* Specific size of types*/
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));
}