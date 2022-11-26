#include <stdio.h>
// Be sure to include any other library you may need...
#include <stdlib.h>

/*
You are working on programming a toaster. The user of the toaster has the option to have their bread 
toasted "light" or "dark", and you are working on implementations in different languages of this particular 
setting. For example, in the German model, the settings would be stored as "hell" and "dunkel" instead. 
In order to be as efficient as possible with the use of the limited memory on the computer chip in the 
toaster you need to write a function "allocateString()" that allocates memory for strings (and you will 
then use this function to allocate just enough memory to store the settings on a particular model).

This function "allocateString()" takes as argument an integer (of type int), representing the number of 
characters to allocate space for in memory. The function returns a pointer (of type char *), containing 
the address of the allocated memory. The function should use memory allocation to reserve the correct 
amount of space in memory. In order to receive credit for your solution you need to use sizeof (char) 
in this line, even if sizeof (char) returns 1.

In your main() function you should call the function allocateString() twice: once for the label containing 
the "light" setting and once for the "dark" setting. You are provided with some code already that explains 
precisely what you need to do. Please do not change the code that has been given to you.
*/


// Write your allocateString() prototype here
char * allocateString(int);

int main(void) {
    int lengthLight, lengthDark;
    char *strLight, *strDark;
    
    scanf("%d %d", &lengthLight, &lengthDark); 
    // Write a line of code here that calls the function allocateString().
    strLight = allocateString(lengthLight);
    
    /* The goal is to reserve space for the light setting label, therefore you 
       need to pass the number lengthLight to the function allocateString()
       Store the return value of this function call in the variable strLight. */
     
    // Write a line of code here that calls the function allocateString().
    strDark = allocateString(lengthDark);
    
    /* This time the goal is to reserve space in memory for the dark setting label.
       Store the return value of the function call in the variable strDark. */
   
    scanf("%s", strLight);
    scanf("%s", strDark);
    printf("Local settings: %s - %s\n", strLight, strDark);
    // Write a line of code here to free the memory allocated for strLight
    free(strLight);
    
    // Write a line of code here to free the memory allocated for strDark
    free(strDark);
    
	
    return 0;
}

char * allocateString(int numChars){
    // declare your variable(s) here
    char * ptr;
    
    // Write a line of code here that performs the memory allocation.
    /* You should allocate space in memory for the number of characters specified 
       via the input parameter to the function and the null terminator and store the 
       address of the allocated memory in a pointer named ptr. In order to receive credit 
       for your solution you need to use sizeof(char) in this line, even if sizeof(char) 
       returns 1. */
    ptr = (char *) malloc(numChars * sizeof(char));
    return ptr;
}
