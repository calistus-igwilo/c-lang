#include <stdio.h>
#include <stdlib.h>

/*
initializePoly() should receive as input a pointer to the first structure in an array of structures 
as well as in integer, indicating how many points can be stored in the array. Your job is to initialize 
these points in the following way: Using a for loop with i starting at 0, initialize the x-coordinate of 
the point at index i as -i, and the y-coordinate as i*i.

Your main function should read the number of vertices to store in the array of points from the user, then 
allocate the appropriate amount of memory, initialize the array with the function initializePoly, and 
finally print the vertices of the polygon using the function printPoly().

*/

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    int numVertices;
    struct point * polygon;
    
    // Fill in your main function here
    scanf("%d", &numVertices);
    polygon = (struct point *) malloc(numVertices * sizeof(struct point));
    
    initializePoly(polygon, numVertices);
    printPoly(polygon, numVertices);
    
    free(polygon);
    
    return 0;

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * poly, int N){
    int i;
    for (i=0; i<N; i++) {
        poly[i].x = -i;
        poly[i].y = i*i;
    }
}