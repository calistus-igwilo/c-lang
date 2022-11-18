#include <stdio.h>

/*
 write a C-program that will tell a fan which line to stand in.
Assume that fan names are less than 50 characters long and contain no 
spaces. Your program should output an integer value (1 or 2) depending 
on whether the fan should join line 1 (name has even number of letters) 
or line 2 (name has odd number of letters).
*/

int main(void) {
    int i=0, evenName=1, oddName=2;
    char name[51];
    
    scanf("%s", name);
    while (name[i] != '\0') {
        i++;
    }
    if (i%2 == 0) {
        printf("%d", evenName);
    }else {
        printf("%d", oddName);
    }
    
    return 0;
}