#include <stdio.h>
void reset(int *); // prototype
int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    reset(arr);
    return 0;
}
void reset(int * ptr){  //pass array to function
    * ptr = 0;
    * (ptr + 1) = 0;
    * (ptr + 2) = 0;
}
