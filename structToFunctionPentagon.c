#include <stdio.h>
struct point{
    double x;
    double y;
};

int main(void) {
    //! showMemory(start=65520)
    struct point pentagon[5];
    //int i;
    
    // assign the value 4.1 to the y cordinate of the 5th element: 
    // either of these are equivalent
    pentagon[4].y = 4.1;
    (pentagon+4)->y = 4.1;
    
	return 0;
}

