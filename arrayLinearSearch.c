#include <stdio.h>
int main(void) {
    //! showArray(list, cursors=[i])
    int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
    int n = 10;
    int item, i, found;
    
    printf("Which number are you looking for? ");
    scanf("%d", &item);
    found = 0;
    i = 0;
    while (!found && i<n) {
        if (item == list[i]) { 
            found = 1;
        } else {
            i++;
        }
    }
    
    if (!found) {
        printf("%d is not a member of this list. \n", item);
    } else {
        printf("I found %d at index %d in the list. \n", item, i);
    }
    
	return 0;
}