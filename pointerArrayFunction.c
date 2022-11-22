#include <stdio.h>
/*
Within this program, we will pass an array with 6 integers to a function, 
have the function swap the first and last integer, the second and the second 
to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). 
It should take one parameter, representing the array of integers. 

The main function first reads 6 integers from the input, and assigns them 
to the array. The main function then calls reverseArray, passing the array 
as an argument.

The main function then prints the reversed array.
*/

void reverseArray(int *);

int main(void) {
    int i, arr[6], element;
   
    // store data in array
    for (i=0; i<6; i++) {
        scanf("%d", &element);
        arr[i] = element;
    }
    
    reverseArray(arr);
    
    for (i=0; i<6; i++) {
        printf("%d ", arr[i]);
    }
}

void reverseArray(int * arr) {
    int i, j, tmp;
     j = 5;

    //swap 
    for (i=0; i<3; i++){
        tmp = * (arr + i);
        * (arr + i) = * (arr + j);
        * (arr + j) = tmp;
        j--;
    }
    
    
}
