#include <stdio.h>

/*
Write a program that first read an integer indicating the number of 
grades to be averaged. Next, your program will read the grades one 
by one, all of which are integers as well. Finally, your program will 
calculate and print the average of the grades to two decimal places.
*/

int main(void) {
    int i, grade, numGrades, totalGrade=0;
    double averageGrade, dNumGrades;
    
    printf("Enter the number of grades: ");
    scanf("%d", &numGrades);
    for(i=0; i<numGrades; i++) {
        printf("Enter grades, one at a time and hit enter: ");
        scanf("%d", &grade);
        totalGrade += grade;
    }
    dNumGrades = (double) numGrades;
    averageGrade = totalGrade/dNumGrades;
    printf("Average grade: %.2lf\n", averageGrade);
}