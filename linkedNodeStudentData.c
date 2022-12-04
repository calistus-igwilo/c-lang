#include <stdio.h>
#include <stdlib.h>

/*
You would like to store student data (for each student, their name and age) in a linked list of students. 
Your first task is to write a function createStudent() that takes as inputs a string (namely a student's name) 
and an integer (their age) and that returns a pointer to a struct student which stores this information. 
Your function should dynamically allocate the memory required for this struct student and then write the 
student's name and age into this newly allocated memory. 
*/

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)
struct student * createStudent(char studentName[50], int studentAge) {
    struct student * ptr;
    int i;
    
    ptr = (struct student *) malloc(sizeof(struct student));
    //ptr->name = studentName;
    ptr->age = studentAge;
    i = 0;
    while (studentName[i] != '\0') {
        ptr->name[i] = studentName[i];
        i++;
    }

    return ptr;
}
