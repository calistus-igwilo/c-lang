#include <stdio.h>

/*
Your program will have to read a sequence of positive integers and display 
their sum. We do not know how many integers there will be, but the sequence 
always ends with the value -1 (which is not an expense, just an end marker).
*/

int main(void) {
    int num, sum=0;
    
    scanf("%d", &num);
    while (num != -1) {
        sum += num;
        scanf("%d", &num);
        
    }
    printf("%d", sum);
    
    return 0;
}