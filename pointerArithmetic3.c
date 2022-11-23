#include <stdio.h>

int main(void) {
    int numbers[] = {4, -1, 8, 3, 0, -11};
    int * ptr;

    * numbers + 4;      // 8 (4+4)
    numbers[10];        // random depends on what was stored in memory before
    ptr = numbers + 2;  // 8
    ptr++;              
    * ptr;              // 3
}