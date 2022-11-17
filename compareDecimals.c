#include <stdio.h>

/*
Double precision is correct upto 15 decimal places. 
It does not evluate values from the 16th decimal places
Hence
5.0000000000000001 == 5.0000000000000000

But 

5.000000000000001 != 5.0000000000000000
*/

int main(void) {
    int result;
    double a = 5.0000000000000001; 
    double b = 5.0000000000000000;

    result = a == b;
    
  
    if (result) {
        printf("TRUE\n");
    }else {
        printf("FALSE\n");
}
    
    return 0;
}