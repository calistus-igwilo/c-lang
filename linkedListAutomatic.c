#include <stdio.h>

struct point{
    int x;
    int y;
    struct point * next;
};
void printPoints(struct point *start);
struct point * append (struct point * end, struct point * newpt);
int main(void) {
    //! showMemory(start=65520)
    struct point pt1 = {1, 2, NULL};
    struct point pt2 = {-2, 3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point * start, * end;
    
    start = end = &pt1;
    end = append(end, &pt2);
    end = append(end, &pt3);
    
    printPoints(start);
    
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