#include <stdio.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
    struct point * next;
};
void printPoints(struct point *start);
struct point * createPoint(int x, int y) ;
struct point * append (struct point * end, struct point * newpt);
void freePoints(struct point * start);
int main(void) {
    //! showMemory(start=65520)
    struct point * start, * end, * newpt;
    int num, i;
    int x, y;
    
    printf("How many points? ");
    scanf("%d", &num);
    for (i=0; i<num; i++) {
        printf("x = ");
        scanf("%d", &x);
        printf("y = ");
        scanf("%d", &y);
        newpt = createPoint(x,y);
        if (i==0) {
            start = end = newpt;
        } else {
            end = append(end,newpt);
        }
    }
    printf("You entered: ");
    printPoints(start);
    freePoints(start);
	return 0;
}

void printPoints(struct point *start) {
    //! showMemory(start = 65520, cursors=[ptr])
    struct point * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}

struct point * append (struct point * end, struct point * newpt) {
    end->next = newpt;
    return(end->next);
} 

struct point * createPoint(int x, int y) {
    struct point *ptr;
    ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;
    return(ptr);
}

void freePoints(struct point * start) {
    struct point * ptr = start;
    while (ptr!=NULL) {
        start = ptr;
        ptr = ptr->next; // keep track of the address of the next pointer
        free(start);
    }
}