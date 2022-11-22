#include <stdio.h>

int main(void) {
    int a = 24;
    double b = 25.67;

    int * addressOfA = &a; // reference a pointer to the address of a
    double * addressOfB = &b; // pointer to the address of b

    printf("Address of a is: %p and value of a is: %d\n" , addressOfA, * addressOfA);
    printf("Address of b is: %p and value of b is: %.2lf\n", addressOfB, * addressOfB );

}