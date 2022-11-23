#include <stdio.h>
/*
Reverse Array:
Write a C program that the main function accepts 6 integers and stores them in an array.
The main function then calls reverseArray function and pass the array to it. 
The reverseArray function then swaps elements of the array in the following order:
swap the first element with the last element
swap the second element with the second last element
swap the third element with the third last element

Example
Input:  1 2 3 4 5 6
Output: 6 5 4 3 2 1
*/
void reverseArray(int *);

int main(void) {
    int i, arr[6], element;
    
    for (i=0; i<6; i++) {
        scanf("%d", &element);
        arr[i] = element;
    }
    reverseArray(arr);
    
    //printf("%d %d %d", arr[0], arr[1], arr[2]);
}

void reverseArray(int  * arr) {

}

