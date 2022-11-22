#include <stdio.h>
int main() {
    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    int * ptr = arr;

    /*
    * (ptr + 1) means add 1 to the address of ptr. 
    Since ptr is an int, it uses 4 bytes. So +1 = 4bytes which means the next address
    */
    * ptr = 2; // * arr   0R  arr[0]
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]
    
    return 0;
}