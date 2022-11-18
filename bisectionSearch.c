#include<stdio.h>
int main(void) {
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
    int n = 10;
    int item; 
    int ia, ib, mid, found;
    
    printf("Which number are you looking for? ");
    scanf("%d", &item);
    ia = 0;
    ib = n-1;
    found = 0;
    
    while (!found && (ia <= ib)) {
        mid = (ia + ib)/2; // middle index
        if (item == list[mid]) {
            found = 1;  // found item!
        } else if (item<list[mid]) {
            ib = mid-1; // toss the top half
        } else {
            ia = mid + 1; // toss the bottom half
        }
    }
    
    if (!found) {
        printf("Number %d was not found in the array. \n", item);
    } else {
        printf("Number %d was found at index %d in the array.\n", item, mid);
    }
    
	return 0;
}