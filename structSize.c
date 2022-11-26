#include <stdio.h>

struct student{
	char firstName[5];
	char lastName[5];
	int birthYear;
	double aveGrade;
};

int main(void) {
    //! showMemory(start=65520)
	struct student me;
    printf("Size of struct student is %zu.\n", sizeof(struct student)); //22
    printf("Size of firstName is %zu.\n", sizeof(me.firstName));        //5
    printf("Size of lastName is %zu.\n", sizeof(me.lastName));          //5
    printf("Size of birthYear is %zu.\n", sizeof(me.birthYear));        //4
    printf("Size of aveGrade is %zu.\n", sizeof(me.aveGrade));          //8

	return 0;
}
